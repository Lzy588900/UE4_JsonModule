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

	/*解析字符串*/
	UFUNCTION(BlueprintPure, Category = "Json")
	static FJsonStruct ParseJson(FString str);
	/*json生成字符串*/
	UFUNCTION(BlueprintPure, Category = "Json")
	static FString ToString(FJsonStruct json);
	/*获取类型*/
	UFUNCTION(BlueprintPure, Category = "Json")
	static EJsonType JsonType(FJsonStruct json);
	/*尝试获取Json基础类型value*/
	UFUNCTION(BlueprintPure, Category = "Json")
	static FString TryGetBaseValue(FJsonStruct json);
	/*获取JSON类型为Object和Array中的所有value*/
	UFUNCTION(BlueprintPure, Category = "Json")
	static TArray<FJsonStruct> GetAllValueFromJson(FJsonStruct json);
	/*查找Json类型为Object中的特定Value*/
	UFUNCTION(BlueprintPure, meta = (DisplayName = "Find"), Category = "Json")
		static FJsonStruct FindJsonFromObject(FJsonStruct json, FString key, FString value, EJsonType type,bool& isFound);
		static bool FindJsonFromObject_C(TSharedPtr<FJsonValue> json, FString key,FString value, EJson type, TSharedPtr<FJsonValue>& result);
	/*设置Json Key值*/
	UFUNCTION(BlueprintPure, Category = "Json")
		static FJsonStruct SetJsonKey(FJsonStruct json,FString key);
	/*设置Json Value*/
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


	/*从Array中移除某一项*/
	UFUNCTION(BlueprintPure, Category = "Json")
		static FJsonStruct RemoveJsonArrayValueByValue(FJsonStruct json, FJsonStruct value,bool& isSuccess);
	/*从Objec中移除某一项*/
	UFUNCTION(BlueprintPure, Category = "Json")
		static FJsonStruct RemoveJsonObjectValueByKey(FJsonStruct json, FString key, bool& isSuccess);
	/*增加Array一个元素*/
	UFUNCTION(BlueprintPure, Category = "Json")
		static FJsonStruct AddJsonArrayValue(FJsonStruct json, FJsonStruct value, bool& isSuccess);
	/*增加Object一个元素*/
	UFUNCTION(BlueprintPure, Category = "Json")
		static FJsonStruct AddJsonObjectValue(FJsonStruct json, FJsonStruct value, bool& isSuccess,bool isRepleace = true);

	/*生成基础类型*/
	UFUNCTION(BlueprintPure, Category = "Json")
		static FJsonStruct CreateJsonStringValue(FString key, FString value);
	UFUNCTION(BlueprintPure, Category = "Json")
		static FJsonStruct CreateJsonNumberValue(FString key, float value);
	UFUNCTION(BlueprintPure, Category = "Json")
		static FJsonStruct CreateJsonBoolValue(FString key, bool value);
	/*将多个Json合并到一个Object中 返回的Json类型为Object*/
	UFUNCTION(BlueprintPure, meta = (DisplayName = "CreateJsonObjectValue", CommutativeAssociativeBinaryOperator = "true"), Category = "Json")
		static FJsonStruct CreateJsonObjectValue(FJsonStruct A, FJsonStruct B);
	/*将单个Json生成Object 返回的Json类型为Object*/
	UFUNCTION(BlueprintPure, Category = "Json")
		static FJsonStruct CreateJsonObjectValueBySingle(FJsonStruct json, FString key);
	/*将多个Json Object合并生成Object 返回的Json类型为Object*/
	UFUNCTION(BlueprintPure, meta = (DisplayName = "CreateJsonObjectValueIncludeObject", CommutativeAssociativeBinaryOperator = "true"), Category = "Json")
		static FJsonStruct CreateJsonObjectValueByObject(FJsonStruct A, FJsonStruct B);
	static void CreateJsonObjectValue_C(TSharedPtr<FJsonObject> obj, FJsonStruct addItem,bool isAppendObjct=false);

	/*将多个Json合并到一个Aray中 返回的Json类型为Aray*/
	UFUNCTION(BlueprintPure, meta = (DisplayName = "CreateJsonArrayValue", CommutativeAssociativeBinaryOperator = "true"), Category = "Json")
		static FJsonStruct CreateJsonArrayValue(FJsonStruct A, FJsonStruct B);
	/*将单个Json生成Aray 返回的Json类型为Aray*/
	UFUNCTION(BlueprintPure,Category = "Json")
		static FJsonStruct CreateJsonArrayValueBySingle(FJsonStruct json, FString key);
	/*将多个Json Aray合并生成Aray 返回的Json类型为Aray*/
	UFUNCTION(BlueprintPure, meta = (DisplayName = "CreateJsonArrayValueIncludeArray", CommutativeAssociativeBinaryOperator = "true"), Category = "Json")
		static FJsonStruct CreateJsonArrayValueByArray(FJsonStruct A, FJsonStruct B);
	static void CreateJsonArrayValue_C(TArray<TSharedPtr<FJsonValue>>& ary, FJsonStruct addItem,bool isAppendArray=true);

};
