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
		static FJsonStruct ChangeJsonStringValue(FJsonStruct json, FString value);
	UFUNCTION(BlueprintPure, Category = "Json")
		static FJsonStruct ChangeJsonNumberValue(FJsonStruct json, float value);
	UFUNCTION(BlueprintPure, Category = "Json")
		static FJsonStruct ChangeJsonBoolValue(FJsonStruct json, bool value);

	UFUNCTION(BlueprintPure, Category = "Json")
		static FJsonStruct ChangeJsonArrayValue(FJsonStruct json, FJsonStruct from, FJsonStruct to);
	UFUNCTION(BlueprintPure, Category = "Json")
		static FJsonStruct ChangeJsonObjectValue(FJsonStruct json, FString key, FJsonStruct value);


	/*��Array���Ƴ�ĳһ��*/
	UFUNCTION(BlueprintPure, Category = "Json")
		static FJsonStruct RemoveJsonArrayValueByValue(FJsonStruct json, FJsonStruct value,bool& isSuccess);
	/*��Objec���Ƴ�ĳһ��*/
	UFUNCTION(BlueprintPure, Category = "Json")
		static FJsonStruct RemoveJsonObjectValueByKey(FJsonStruct json, FString key, bool& isSuccess);
	/*����Arrayһ��Ԫ��*/
	UFUNCTION(BlueprintPure, Category = "Json")
		static FJsonStruct AddJsonArrayValue(FJsonStruct json, FJsonStruct value, bool& isSuccess);
	/*����Objectһ��Ԫ��*/
	UFUNCTION(BlueprintPure, Category = "Json")
		static FJsonStruct AddJsonObjectValue(FJsonStruct json, FJsonStruct value, bool& isSuccess,bool isRepleace = true);

	/*���ɻ�������*/
	UFUNCTION(BlueprintPure, Category = "Json")
		static FJsonStruct CreateJsonStringValue(FString key, FString value);
	UFUNCTION(BlueprintPure, Category = "Json")
		static FJsonStruct CreateJsonNumberValue(FString key, float value);
	UFUNCTION(BlueprintPure, Category = "Json")
		static FJsonStruct CreateJsonBoolValue(FString key, bool value);
	/*�����Json�ϲ���һ��Object�� ���ص�Json����ΪObject*/
	UFUNCTION(BlueprintPure, meta = (DisplayName = "CreateJsonObjectValue", CommutativeAssociativeBinaryOperator = "true"), Category = "Json")
		static FJsonStruct CreateJsonObjectValue(FJsonStruct A, FJsonStruct B);
	/*������Json����Object ���ص�Json����ΪObject*/
	UFUNCTION(BlueprintPure, Category = "Json")
		static FJsonStruct CreateJsonObjectValueBySingle(FJsonStruct json, FString key);
	/*�����Json Object�ϲ�����Object ���ص�Json����ΪObject*/
	UFUNCTION(BlueprintPure, meta = (DisplayName = "CreateJsonObjectValueIncludeObject", CommutativeAssociativeBinaryOperator = "true"), Category = "Json")
		static FJsonStruct CreateJsonObjectValueByObject(FJsonStruct A, FJsonStruct B);
	static void CreateJsonObjectValue_C(TSharedPtr<FJsonObject> obj, FJsonStruct addItem,bool isAppendObjct=false);

	/*�����Json�ϲ���һ��Aray�� ���ص�Json����ΪAray*/
	UFUNCTION(BlueprintPure, meta = (DisplayName = "CreateJsonArrayValue", CommutativeAssociativeBinaryOperator = "true"), Category = "Json")
		static FJsonStruct CreateJsonArrayValue(FJsonStruct A, FJsonStruct B);
	/*������Json����Aray ���ص�Json����ΪAray*/
	UFUNCTION(BlueprintPure,Category = "Json")
		static FJsonStruct CreateJsonArrayValueBySingle(FJsonStruct json, FString key);
	/*�����Json Aray�ϲ�����Aray ���ص�Json����ΪAray*/
	UFUNCTION(BlueprintPure, meta = (DisplayName = "CreateJsonArrayValueIncludeArray", CommutativeAssociativeBinaryOperator = "true"), Category = "Json")
		static FJsonStruct CreateJsonArrayValueByArray(FJsonStruct A, FJsonStruct B);
	static void CreateJsonArrayValue_C(TArray<TSharedPtr<FJsonValue>>& ary, FJsonStruct addItem,bool isAppendArray=true);

};
