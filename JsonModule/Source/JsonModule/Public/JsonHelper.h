// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine.h"
#include "JsonHelper.generated.h"

UENUM(BlueprintType)
enum class EJsonType : uint8 {
	None,
	Null,
	String,
	Number,
	Boolean,
	Array,
	Object
};


USTRUCT(BlueprintType)
struct FJsonStruct
{
	GENERATED_USTRUCT_BODY()
	TSharedPtr<FJsonValue> value;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FString key;
};
UCLASS()
class JSONMODULE_API UJsonHelper : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	/*�����ַ���*/
	UFUNCTION(BlueprintPure, Category = "Json")
	static FJsonStruct ParseJson(FString str);
	/*json�����ַ���*/
	UFUNCTION(BlueprintPure, Category = "Json")
	static FString ToString(FJsonStruct json);
	/*��ȡ����*/
	UFUNCTION(BlueprintPure, Category = "Json")
	static EJsonType JsonType(FJsonStruct json);
	/*���Ի�ȡJson��������value*/
	UFUNCTION(BlueprintPure, Category = "Json")
	static FString TryGetBaseValue(FJsonStruct json);
	/*��ȡJSON����ΪObject��Array�е�����value*/
	UFUNCTION(BlueprintPure, Category = "Json")
	static TArray<FJsonStruct> GetAllValueFromJson(FJsonStruct json);
	/*����Json����ΪObject�е��ض�Value*/
	UFUNCTION(BlueprintPure, meta = (DisplayName = "Find"), Category = "Json")
		static FJsonStruct FindJsonFromObject(FJsonStruct json, FString key, FString value, EJsonType type,bool& isFound);
		static bool FindJsonFromObject_C(TSharedPtr<FJsonValue> json, FString key,FString value, EJson type, TSharedPtr<FJsonValue>& result);
	/*����Json Keyֵ*/
	UFUNCTION(BlueprintPure, Category = "Json")
		static FJsonStruct SetJsonKey(FJsonStruct json,FString key);
	/*����Json Value*/
	UFUNCTION(BlueprintPure, Category = "Json")
		static void ChangeJsonArrayValue(UPARAM(ref)FJsonStruct& json, FJsonStruct from, FJsonStruct to, bool& isSuccess);
	UFUNCTION(BlueprintPure, Category = "Json")
		static void ChangeJsonObjectValue(FJsonStruct json, FString key, FJsonStruct value, bool& isSuccess);


	/*��Array���Ƴ�ĳһ��*/
	UFUNCTION(BlueprintPure, Category = "Json")
		static void RemoveJsonArrayValueByValue(FJsonStruct json, FJsonStruct value,bool& isSuccess);
	/*��Objec���Ƴ�ĳһ��*/
	UFUNCTION(BlueprintPure, Category = "Json")
		static void RemoveJsonObjectValueByKey(FJsonStruct json, FString key, bool& isSuccess);
	/*����Arrayһ��Ԫ��*/
	UFUNCTION(BlueprintPure, Category = "Json")
		static void AddJsonArrayValue(UPARAM(ref) FJsonStruct& json, FJsonStruct value, bool& isSuccess);
	/*����Objectһ��Ԫ��*/
	UFUNCTION(BlueprintPure, Category = "Json")
		static void AddJsonObjectValue(FJsonStruct json, FJsonStruct value, bool& isSuccess,bool isRepleace = true);

	/*���ɻ�������*/
	UFUNCTION(BlueprintPure, Category = "Json")
		static FJsonStruct CreateJsonStringValue(FString key, FString value);
	UFUNCTION(BlueprintPure, Category = "Json")
		static FJsonStruct CreateJsonNumberValue(FString key, float value);
	UFUNCTION(BlueprintPure, Category = "Json")
		static FJsonStruct CreateJsonBoolValue(FString key, bool value);
	/*���ɿ�Object*/
	UFUNCTION(BlueprintPure, meta = (DisplayName = "CreateEmptyJsonObject"), Category = "Json")
		static FJsonStruct CreateJsonObject();
	/*�����Json�ϲ���һ��Object�� ���ص�Json����ΪObject*/
	UFUNCTION(BlueprintPure, meta = (DisplayName = "CreateJsonObject"), Category = "Json")
		static FJsonStruct CreateJsonObjectByValue(TArray<FJsonStruct> arrays);
	static void CreateJsonObjectValue_C(TSharedPtr<FJsonObject> obj, FJsonStruct addItem);

	/*���ɿ�Array*/
	UFUNCTION(BlueprintPure, meta = (DisplayName = "CreateEmptyJsonArray"), Category = "Json")
		static FJsonStruct CreateJsonArray();
	/*�����Json�ϲ���һ��Aray�� ���ص�Json����ΪAray*/
	UFUNCTION(BlueprintPure, meta = (DisplayName = "CreateJsonArray"), Category = "Json")
		static FJsonStruct CreateJsonArrayByValue(TArray<FJsonStruct> arrays);
	static void CreateJsonArrayValue_C(TArray<TSharedPtr<FJsonValue>>& ary, FJsonStruct addItem);

};
