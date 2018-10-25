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
		static void ChangeJsonArrayValue(UPARAM(ref)FJsonStruct& json, FJsonStruct from, FJsonStruct to, bool& isSuccess);
	UFUNCTION(BlueprintPure, Category = "Json")
		static void ChangeJsonObjectValue(FJsonStruct json, FString key, FJsonStruct value, bool& isSuccess);


	/*从Array中移除某一项*/
	UFUNCTION(BlueprintPure, Category = "Json")
		static void RemoveJsonArrayValueByValue(FJsonStruct json, FJsonStruct value,bool& isSuccess);
	/*从Objec中移除某一项*/
	UFUNCTION(BlueprintPure, Category = "Json")
		static void RemoveJsonObjectValueByKey(FJsonStruct json, FString key, bool& isSuccess);
	/*增加Array一个元素*/
	UFUNCTION(BlueprintPure, Category = "Json")
		static void AddJsonArrayValue(UPARAM(ref) FJsonStruct& json, FJsonStruct value, bool& isSuccess);
	/*增加Object一个元素*/
	UFUNCTION(BlueprintPure, Category = "Json")
		static void AddJsonObjectValue(FJsonStruct json, FJsonStruct value, bool& isSuccess,bool isRepleace = true);

	/*生成基础类型*/
	UFUNCTION(BlueprintPure, Category = "Json")
		static FJsonStruct CreateJsonStringValue(FString key, FString value);
	UFUNCTION(BlueprintPure, Category = "Json")
		static FJsonStruct CreateJsonNumberValue(FString key, float value);
	UFUNCTION(BlueprintPure, Category = "Json")
		static FJsonStruct CreateJsonBoolValue(FString key, bool value);
	/*生成空Object*/
	UFUNCTION(BlueprintPure, meta = (DisplayName = "CreateEmptyJsonObject"), Category = "Json")
		static FJsonStruct CreateJsonObject();
	/*将多个Json合并到一个Object中 返回的Json类型为Object*/
	UFUNCTION(BlueprintPure, meta = (DisplayName = "CreateJsonObject"), Category = "Json")
		static FJsonStruct CreateJsonObjectByValue(TArray<FJsonStruct> arrays);
	static void CreateJsonObjectValue_C(TSharedPtr<FJsonObject> obj, FJsonStruct addItem);

	/*生成空Array*/
	UFUNCTION(BlueprintPure, meta = (DisplayName = "CreateEmptyJsonArray"), Category = "Json")
		static FJsonStruct CreateJsonArray();
	/*将多个Json合并到一个Aray中 返回的Json类型为Aray*/
	UFUNCTION(BlueprintPure, meta = (DisplayName = "CreateJsonArray"), Category = "Json")
		static FJsonStruct CreateJsonArrayByValue(TArray<FJsonStruct> arrays);
	static void CreateJsonArrayValue_C(TArray<TSharedPtr<FJsonValue>>& ary, FJsonStruct addItem);

};
