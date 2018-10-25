// Fill out your copyright notice in the Description page of Project Settings.

#include "JsonHelper.h"
#include "StringTools.h"
FJsonStruct UJsonHelper::ParseJson(FString str)
{
	TSharedPtr<FJsonValue> JsonParsed;
	MyTools::ParseJson(JsonParsed, str);
	FJsonStruct out;
	out.value = JsonParsed;
	return out;
}

FString UJsonHelper::ToString(FJsonStruct json)
{
	if(!json.value.IsValid())return FString();
	switch (json.value->Type) {
	case EJson::None:case EJson::Null:break;
	case EJson::String:case EJson::Number:case EJson::Boolean:
		return TEXT("\"")+json.key+TEXT("\":")+TryGetBaseValue(json);
		break;
	case EJson::Array:
		return 	MyTools::CreateJson(json.value->AsArray());
		break;
	case EJson::Object:
		return 	MyTools::CreateJson(json.value->AsObject());
		break;
	}
	return 	FString();
}

EJsonType UJsonHelper::JsonType(FJsonStruct json)
{
	switch (json.value->Type) {
	case EJson::None:return EJsonType::None;break;
	case EJson::Null:return EJsonType::Null;break;
	case EJson::String:return EJsonType::String;break;
	case EJson::Number:return EJsonType::Number;break;
	case EJson::Boolean:return EJsonType::Boolean;break;
	case EJson::Array:	return EJsonType::Array; break;
	case EJson::Object:	return EJsonType::Object; break;
	}
	return EJsonType::None;
}

FString UJsonHelper::TryGetBaseValue(FJsonStruct json)
{
	return MyTools::ParseJsonValueSingle(json.value);
}

TArray<FJsonStruct> UJsonHelper::GetAllValueFromJson(FJsonStruct json)
{
	TArray<FJsonStruct> out;
	if(!json.value.IsValid())	return out;
	if (json.value->Type == EJson::Object) {
		for (auto tem : json.value->AsObject()->Values) {
			FJsonStruct addTem;
			addTem.value = tem.Value;
			addTem.key = tem.Key;
			out.Add(addTem);
		}
	}
	else if (json.value->Type == EJson::Array) {
		for (auto tem : json.value->AsArray()) {
			FJsonStruct addTem;
			addTem.value = tem;
			out.Add(addTem);
		}
	}
	else out.Add(json);
	return out;
}

FJsonStruct UJsonHelper::FindJsonFromObject(FJsonStruct json, FString key, FString value, EJsonType type,bool& isFound)
{
	isFound = false;
	FJsonStruct out;
	TSharedPtr<FJsonValue> result;
	if (FindJsonFromObject_C(json.value, key, value,(EJson)type,result)) {
		isFound = true;
		out.key = key;
		out.value = result;
	}
	return out;
}

bool UJsonHelper::FindJsonFromObject_C(TSharedPtr<FJsonValue> json, FString key, FString value, EJson type,TSharedPtr<FJsonValue>& result)
{
	if (!json.IsValid() || (json->Type != EJson::Object&&json->Type != EJson::Array))	return false;
	if (json->Type == EJson::Array) {
		auto temArray = json->AsArray();
		for (auto tem : temArray) {
			if (FindJsonFromObject_C(tem, key, value, type, result))return true;
		}
		return false;
	}
	else {
		switch (type)
		{
		case EJson::None:case EJson::Null:return false; break;
		case EJson::String: {
			auto tem = json->AsObject()->GetField<EJson::String>(key);
			if (tem.IsValid() && tem->AsString().Equals(value)) {
				result = tem;
				return true;
			}
			else return false;
			break;
		}
		case EJson::Number: {
			auto tem = json->AsObject()->GetField<EJson::String>(key);
			if (tem.IsValid() && tem->AsNumber() == FCString::Atof(*value)) {
				result = tem;
				return true;
			}
			else return false;
			break;
		}
		case EJson::Boolean: {
			auto tem = json->AsObject()->GetField<EJson::String>(key);
			if (tem.IsValid() && value.Equals(tem->AsBool() ? "true" : "false")) {
				result = tem;
				return true;
			}
			else return false;
			break;
		}
		case EJson::Array: {
			auto tem = json->AsObject()->GetField<EJson::Array>(key);
			if (tem.IsValid()){
				result = tem;
				return true;
			}
			break;
		}
		case EJson::Object: {
			auto tem = json->AsObject()->GetField<EJson::Object>(key);
			if (tem.IsValid()) {
				result = tem;
				return true;
			}
			break;
		}
		}
		return false;
	}
}

FJsonStruct UJsonHelper::SetJsonKey(FJsonStruct json, FString key)
{
	json.key = key;
	return json;
}

FJsonStruct UJsonHelper::ChangeJsonStringValue(FJsonStruct json, FString value)
{
	json = CreateJsonStringValue(json.key, value);
	return json;
}

FJsonStruct UJsonHelper::ChangeJsonNumberValue(FJsonStruct json, float value)
{
	json = CreateJsonNumberValue(json.key, value);
	return json;
}

FJsonStruct UJsonHelper::ChangeJsonBoolValue(FJsonStruct json, bool value)
{
	json = CreateJsonBoolValue(json.key, value);
	return json;
}

FJsonStruct UJsonHelper::ChangeJsonArrayValue(FJsonStruct json, FJsonStruct from, FJsonStruct to)
{
	if (!json.value.IsValid() || json.value->Type != EJson::Array)return json;
	if (!from.value.IsValid() || !to.value.IsValid())return json;
	auto arrays = json.value->AsArray();
	auto index = 0;
	for (auto tem : arrays) {
		FJsonStruct temStruct;
		temStruct.key = from.key;
		temStruct.value = tem;
		if (ToString(temStruct).Equals(ToString(from))) {
			arrays[index] = to.value;
			TSharedPtr < FJsonValueArray > Value = MakeShareable(new FJsonValueArray(arrays));
			json.value = Value;
			return json;
		}
		index++;
	}
	return json;
}

FJsonStruct UJsonHelper::ChangeJsonObjectValue(FJsonStruct json, FString key, FJsonStruct value)
{
	if (!json.value.IsValid() || json.value->Type != EJson::Object)return json;
	json.value->AsObject()->SetField(key, value.value);
	return json;
}


void UJsonHelper::RemoveJsonArrayValueByValue(FJsonStruct json, FJsonStruct value, bool& isSuccess)
{
	isSuccess = false;
	if (!json.value.IsValid() || json.value->Type != EJson::Array)return ;
	if (!value.value.IsValid())return ;
	auto arrays = json.value->AsArray();
	auto index = 0;
	for (auto tem : arrays) {
		FJsonStruct temStruct;
		temStruct.key = value.key;
		temStruct.value = tem;
		if (ToString(temStruct).Equals(ToString(value))) {
			arrays.RemoveAt(index);
			TSharedPtr < FJsonValueArray > Value = MakeShareable(new FJsonValueArray(arrays));
			json.value = Value;
			isSuccess = true;
			return ;
		}
		index++;
	}
	return ;
}

void UJsonHelper::RemoveJsonObjectValueByKey(FJsonStruct json, FString key, bool& isSuccess)
{
	isSuccess = false;
	if (!json.value.IsValid() || json.value->Type != EJson::Object)return ;
	isSuccess=json.value->AsObject()->HasField(key);
	if(isSuccess)
		json.value->AsObject()->RemoveField(key);
	//return json;
}

void UJsonHelper::AddJsonArrayValue(UPARAM(ref)FJsonStruct & json, FJsonStruct value, bool & isSuccess)
{
	isSuccess = false;
	if (!json.value.IsValid() || json.value->Type != EJson::Array)return;
	if (!value.value.IsValid())return;
	auto temArray = json.value->AsArray();
	temArray.Add(value.value);
	TSharedPtr < FJsonValueArray > Value = MakeShareable(new FJsonValueArray(temArray));
	json.value = Value;
	isSuccess = true;
}
void UJsonHelper::AddJsonObjectValue(FJsonStruct json, FJsonStruct value, bool& isSuccess, bool isRepleace)
{
	isSuccess = false;
	if (!json.value.IsValid() || json.value->Type != EJson::Object)return ;
	if (!value.value.IsValid())return ;
	if (isRepleace) {
		json.value->AsObject()->SetField(value.key, value.value);
		isSuccess = true;
		return ;
	}
	else {
		if (json.value->AsObject()->HasField(value.key))return ;
		json.value->AsObject()->SetField(value.key, value.value);
		isSuccess = true;
		return ;
	}
}

FJsonStruct UJsonHelper::CreateJsonStringValue(FString key, FString value)
{
	FJsonStruct out;
	TSharedPtr<FJsonValueString> Value = MakeShareable(new FJsonValueString(value));
	out.key = key;
	out.value = Value;
	return out;
}

FJsonStruct UJsonHelper::CreateJsonNumberValue(FString key, float value)
{
	FJsonStruct out;
	TSharedPtr<FJsonValueNumber> Value = MakeShareable(new FJsonValueNumber(value));
	out.key = key;
	out.value = Value;
	return out;
}

FJsonStruct UJsonHelper::CreateJsonBoolValue(FString key, bool value)
{
	FJsonStruct out;
	TSharedPtr<FJsonValueBoolean> Value = MakeShareable(new FJsonValueBoolean(value));
	out.key = key;
	out.value = Value;
	return out;
}
FJsonStruct UJsonHelper::CreateJsonObject()
{
	TArray<FJsonStruct> tem;
	return CreateJsonObjectByValue(tem);
}
FJsonStruct UJsonHelper::CreateJsonObjectByValue(TArray<FJsonStruct> arrays)
{
	FJsonStruct out;
	TSharedPtr<FJsonObject> temObj = MakeShareable(new FJsonObject);
	TSharedPtr < FJsonValueObject > Value = MakeShareable(new FJsonValueObject(temObj));
	for (auto tem : arrays) {
		if (tem.value.IsValid())CreateJsonObjectValue_C(temObj, tem);
	}
	out.value = Value;
	return out;
}


void UJsonHelper::CreateJsonObjectValue_C(TSharedPtr<FJsonObject> obj, FJsonStruct addItem)
{
	switch (addItem.value->Type)
	{
	case EJson::None:case EJson::Null:break;
	case EJson::String:case EJson::Number:case EJson::Boolean:case EJson::Array:case EJson::Object:
		obj->SetField(addItem.key, addItem.value);
		break;
	}
}

FJsonStruct UJsonHelper::CreateJsonArray()
{
	TArray<FJsonStruct> tem;
	return CreateJsonArrayByValue(tem);
}

FJsonStruct UJsonHelper::CreateJsonArrayByValue(TArray<FJsonStruct> arrays)
{
	FJsonStruct out;
	TArray<TSharedPtr<FJsonValue>> temArray;
	for (auto tem : arrays)
		if (tem.value.IsValid())CreateJsonArrayValue_C(temArray, tem);
	TSharedPtr < FJsonValueArray > Value = MakeShareable(new FJsonValueArray(temArray));
	out.value = Value;
	return out;
}

void UJsonHelper::CreateJsonArrayValue_C(TArray<TSharedPtr<FJsonValue>>& ary, FJsonStruct addItem)
{
	switch (addItem.value->Type)
	{
	case EJson::None:case EJson::Null:break;
	case EJson::String:case EJson::Number:case EJson::Boolean:case EJson::Object:case EJson::Array:
		ary.Add(addItem.value);
		break;
	}
}
