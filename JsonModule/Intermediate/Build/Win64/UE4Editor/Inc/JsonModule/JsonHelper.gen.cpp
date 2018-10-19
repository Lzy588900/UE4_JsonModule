// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/JsonHelper.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeJsonHelper() {}
// Cross Module References
	JSONMODULE_API UEnum* Z_Construct_UEnum_JsonModule_EJsonType();
	UPackage* Z_Construct_UPackage__Script_JsonModule();
	JSONMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FJsonStruct();
	JSONMODULE_API UClass* Z_Construct_UClass_UJsonHelper_NoRegister();
	JSONMODULE_API UClass* Z_Construct_UClass_UJsonHelper();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	JSONMODULE_API UFunction* Z_Construct_UFunction_UJsonHelper_AddJsonArrayValue();
	JSONMODULE_API UFunction* Z_Construct_UFunction_UJsonHelper_AddJsonObjectValue();
	JSONMODULE_API UFunction* Z_Construct_UFunction_UJsonHelper_ChangeJsonArrayValue();
	JSONMODULE_API UFunction* Z_Construct_UFunction_UJsonHelper_ChangeJsonBoolValue();
	JSONMODULE_API UFunction* Z_Construct_UFunction_UJsonHelper_ChangeJsonNumberValue();
	JSONMODULE_API UFunction* Z_Construct_UFunction_UJsonHelper_ChangeJsonObjectValue();
	JSONMODULE_API UFunction* Z_Construct_UFunction_UJsonHelper_ChangeJsonStringValue();
	JSONMODULE_API UFunction* Z_Construct_UFunction_UJsonHelper_CreateJsonArray();
	JSONMODULE_API UFunction* Z_Construct_UFunction_UJsonHelper_CreateJsonArrayByValue();
	JSONMODULE_API UFunction* Z_Construct_UFunction_UJsonHelper_CreateJsonBoolValue();
	JSONMODULE_API UFunction* Z_Construct_UFunction_UJsonHelper_CreateJsonNumberValue();
	JSONMODULE_API UFunction* Z_Construct_UFunction_UJsonHelper_CreateJsonObject();
	JSONMODULE_API UFunction* Z_Construct_UFunction_UJsonHelper_CreateJsonObjectByValue();
	JSONMODULE_API UFunction* Z_Construct_UFunction_UJsonHelper_CreateJsonStringValue();
	JSONMODULE_API UFunction* Z_Construct_UFunction_UJsonHelper_FindJsonFromObject();
	JSONMODULE_API UFunction* Z_Construct_UFunction_UJsonHelper_GetAllValueFromJson();
	JSONMODULE_API UFunction* Z_Construct_UFunction_UJsonHelper_JsonType();
	JSONMODULE_API UFunction* Z_Construct_UFunction_UJsonHelper_ParseJson();
	JSONMODULE_API UFunction* Z_Construct_UFunction_UJsonHelper_RemoveJsonArrayValueByValue();
	JSONMODULE_API UFunction* Z_Construct_UFunction_UJsonHelper_RemoveJsonObjectValueByKey();
	JSONMODULE_API UFunction* Z_Construct_UFunction_UJsonHelper_SetJsonKey();
	JSONMODULE_API UFunction* Z_Construct_UFunction_UJsonHelper_ToString();
	JSONMODULE_API UFunction* Z_Construct_UFunction_UJsonHelper_TryGetBaseValue();
// End Cross Module References
	static UEnum* EJsonType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_JsonModule_EJsonType, Z_Construct_UPackage__Script_JsonModule(), TEXT("EJsonType"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EJsonType(EJsonType_StaticEnum, TEXT("/Script/JsonModule"), TEXT("EJsonType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_JsonModule_EJsonType_CRC() { return 2785380053U; }
	UEnum* Z_Construct_UEnum_JsonModule_EJsonType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_JsonModule();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EJsonType"), 0, Get_Z_Construct_UEnum_JsonModule_EJsonType_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EJsonType::None", (int64)EJsonType::None },
				{ "EJsonType::Null", (int64)EJsonType::Null },
				{ "EJsonType::String", (int64)EJsonType::String },
				{ "EJsonType::Number", (int64)EJsonType::Number },
				{ "EJsonType::Boolean", (int64)EJsonType::Boolean },
				{ "EJsonType::Array", (int64)EJsonType::Array },
				{ "EJsonType::Object", (int64)EJsonType::Object },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/JsonHelper.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_JsonModule,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EJsonType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EJsonType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FJsonStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern JSONMODULE_API uint32 Get_Z_Construct_UScriptStruct_FJsonStruct_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FJsonStruct, Z_Construct_UPackage__Script_JsonModule(), TEXT("JsonStruct"), sizeof(FJsonStruct), Get_Z_Construct_UScriptStruct_FJsonStruct_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FJsonStruct(FJsonStruct::StaticStruct, TEXT("/Script/JsonModule"), TEXT("JsonStruct"), false, nullptr, nullptr);
static struct FScriptStruct_JsonModule_StaticRegisterNativesFJsonStruct
{
	FScriptStruct_JsonModule_StaticRegisterNativesFJsonStruct()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("JsonStruct")),new UScriptStruct::TCppStructOps<FJsonStruct>);
	}
} ScriptStruct_JsonModule_StaticRegisterNativesFJsonStruct;
	UScriptStruct* Z_Construct_UScriptStruct_FJsonStruct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FJsonStruct_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_JsonModule();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("JsonStruct"), sizeof(FJsonStruct), Get_Z_Construct_UScriptStruct_FJsonStruct_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/JsonHelper.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FJsonStruct>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_key_MetaData[] = {
				{ "Category", "JsonStruct" },
				{ "ModuleRelativePath", "Public/JsonHelper.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_key = { UE4CodeGen_Private::EPropertyClass::Str, "key", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(FJsonStruct, key), METADATA_PARAMS(NewProp_key_MetaData, ARRAY_COUNT(NewProp_key_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_key,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_JsonModule,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"JsonStruct",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FJsonStruct),
				alignof(FJsonStruct),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FJsonStruct_CRC() { return 3628412903U; }
	void UJsonHelper::StaticRegisterNativesUJsonHelper()
	{
		UClass* Class = UJsonHelper::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddJsonArrayValue", &UJsonHelper::execAddJsonArrayValue },
			{ "AddJsonObjectValue", &UJsonHelper::execAddJsonObjectValue },
			{ "ChangeJsonArrayValue", &UJsonHelper::execChangeJsonArrayValue },
			{ "ChangeJsonBoolValue", &UJsonHelper::execChangeJsonBoolValue },
			{ "ChangeJsonNumberValue", &UJsonHelper::execChangeJsonNumberValue },
			{ "ChangeJsonObjectValue", &UJsonHelper::execChangeJsonObjectValue },
			{ "ChangeJsonStringValue", &UJsonHelper::execChangeJsonStringValue },
			{ "CreateJsonArray", &UJsonHelper::execCreateJsonArray },
			{ "CreateJsonArrayByValue", &UJsonHelper::execCreateJsonArrayByValue },
			{ "CreateJsonBoolValue", &UJsonHelper::execCreateJsonBoolValue },
			{ "CreateJsonNumberValue", &UJsonHelper::execCreateJsonNumberValue },
			{ "CreateJsonObject", &UJsonHelper::execCreateJsonObject },
			{ "CreateJsonObjectByValue", &UJsonHelper::execCreateJsonObjectByValue },
			{ "CreateJsonStringValue", &UJsonHelper::execCreateJsonStringValue },
			{ "FindJsonFromObject", &UJsonHelper::execFindJsonFromObject },
			{ "GetAllValueFromJson", &UJsonHelper::execGetAllValueFromJson },
			{ "JsonType", &UJsonHelper::execJsonType },
			{ "ParseJson", &UJsonHelper::execParseJson },
			{ "RemoveJsonArrayValueByValue", &UJsonHelper::execRemoveJsonArrayValueByValue },
			{ "RemoveJsonObjectValueByKey", &UJsonHelper::execRemoveJsonObjectValueByKey },
			{ "SetJsonKey", &UJsonHelper::execSetJsonKey },
			{ "ToString", &UJsonHelper::execToString },
			{ "TryGetBaseValue", &UJsonHelper::execTryGetBaseValue },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UJsonHelper_AddJsonArrayValue()
	{
		struct JsonHelper_eventAddJsonArrayValue_Parms
		{
			FJsonStruct json;
			FJsonStruct value;
			bool isSuccess;
			FJsonStruct ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(JsonHelper_eventAddJsonArrayValue_Parms, ReturnValue), Z_Construct_UScriptStruct_FJsonStruct, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_isSuccess_SetBit = [](void* Obj){ ((JsonHelper_eventAddJsonArrayValue_Parms*)Obj)->isSuccess = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isSuccess = { UE4CodeGen_Private::EPropertyClass::Bool, "isSuccess", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(JsonHelper_eventAddJsonArrayValue_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_isSuccess_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_value = { UE4CodeGen_Private::EPropertyClass::Struct, "value", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(JsonHelper_eventAddJsonArrayValue_Parms, value), Z_Construct_UScriptStruct_FJsonStruct, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_json = { UE4CodeGen_Private::EPropertyClass::Struct, "json", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(JsonHelper_eventAddJsonArrayValue_Parms, json), Z_Construct_UScriptStruct_FJsonStruct, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_isSuccess,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_value,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_json,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Json" },
				{ "ModuleRelativePath", "Public/JsonHelper.h" },
				{ "ToolTip", "????Array\xd2\xbb??\xd4\xaa??" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UJsonHelper, "AddJsonArrayValue", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14442401, sizeof(JsonHelper_eventAddJsonArrayValue_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UJsonHelper_AddJsonObjectValue()
	{
		struct JsonHelper_eventAddJsonObjectValue_Parms
		{
			FJsonStruct json;
			FJsonStruct value;
			bool isSuccess;
			bool isRepleace;
			FJsonStruct ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(JsonHelper_eventAddJsonObjectValue_Parms, ReturnValue), Z_Construct_UScriptStruct_FJsonStruct, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_isRepleace_SetBit = [](void* Obj){ ((JsonHelper_eventAddJsonObjectValue_Parms*)Obj)->isRepleace = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isRepleace = { UE4CodeGen_Private::EPropertyClass::Bool, "isRepleace", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(JsonHelper_eventAddJsonObjectValue_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_isRepleace_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_isSuccess_SetBit = [](void* Obj){ ((JsonHelper_eventAddJsonObjectValue_Parms*)Obj)->isSuccess = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isSuccess = { UE4CodeGen_Private::EPropertyClass::Bool, "isSuccess", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(JsonHelper_eventAddJsonObjectValue_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_isSuccess_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_value = { UE4CodeGen_Private::EPropertyClass::Struct, "value", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(JsonHelper_eventAddJsonObjectValue_Parms, value), Z_Construct_UScriptStruct_FJsonStruct, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_json = { UE4CodeGen_Private::EPropertyClass::Struct, "json", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(JsonHelper_eventAddJsonObjectValue_Parms, json), Z_Construct_UScriptStruct_FJsonStruct, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_isRepleace,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_isSuccess,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_value,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_json,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Json" },
				{ "CPP_Default_isRepleace", "true" },
				{ "ModuleRelativePath", "Public/JsonHelper.h" },
				{ "ToolTip", "????Object\xd2\xbb??\xd4\xaa??" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UJsonHelper, "AddJsonObjectValue", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14442401, sizeof(JsonHelper_eventAddJsonObjectValue_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UJsonHelper_ChangeJsonArrayValue()
	{
		struct JsonHelper_eventChangeJsonArrayValue_Parms
		{
			FJsonStruct json;
			FJsonStruct from;
			FJsonStruct to;
			FJsonStruct ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(JsonHelper_eventChangeJsonArrayValue_Parms, ReturnValue), Z_Construct_UScriptStruct_FJsonStruct, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_to = { UE4CodeGen_Private::EPropertyClass::Struct, "to", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(JsonHelper_eventChangeJsonArrayValue_Parms, to), Z_Construct_UScriptStruct_FJsonStruct, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_from = { UE4CodeGen_Private::EPropertyClass::Struct, "from", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(JsonHelper_eventChangeJsonArrayValue_Parms, from), Z_Construct_UScriptStruct_FJsonStruct, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_json = { UE4CodeGen_Private::EPropertyClass::Struct, "json", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(JsonHelper_eventChangeJsonArrayValue_Parms, json), Z_Construct_UScriptStruct_FJsonStruct, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_to,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_from,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_json,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Json" },
				{ "ModuleRelativePath", "Public/JsonHelper.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UJsonHelper, "ChangeJsonArrayValue", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14042401, sizeof(JsonHelper_eventChangeJsonArrayValue_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UJsonHelper_ChangeJsonBoolValue()
	{
		struct JsonHelper_eventChangeJsonBoolValue_Parms
		{
			FJsonStruct json;
			bool value;
			FJsonStruct ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(JsonHelper_eventChangeJsonBoolValue_Parms, ReturnValue), Z_Construct_UScriptStruct_FJsonStruct, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_value_SetBit = [](void* Obj){ ((JsonHelper_eventChangeJsonBoolValue_Parms*)Obj)->value = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_value = { UE4CodeGen_Private::EPropertyClass::Bool, "value", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(JsonHelper_eventChangeJsonBoolValue_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_value_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_json = { UE4CodeGen_Private::EPropertyClass::Struct, "json", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(JsonHelper_eventChangeJsonBoolValue_Parms, json), Z_Construct_UScriptStruct_FJsonStruct, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_value,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_json,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Json" },
				{ "ModuleRelativePath", "Public/JsonHelper.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UJsonHelper, "ChangeJsonBoolValue", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14042401, sizeof(JsonHelper_eventChangeJsonBoolValue_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UJsonHelper_ChangeJsonNumberValue()
	{
		struct JsonHelper_eventChangeJsonNumberValue_Parms
		{
			FJsonStruct json;
			float value;
			FJsonStruct ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(JsonHelper_eventChangeJsonNumberValue_Parms, ReturnValue), Z_Construct_UScriptStruct_FJsonStruct, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_value = { UE4CodeGen_Private::EPropertyClass::Float, "value", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(JsonHelper_eventChangeJsonNumberValue_Parms, value), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_json = { UE4CodeGen_Private::EPropertyClass::Struct, "json", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(JsonHelper_eventChangeJsonNumberValue_Parms, json), Z_Construct_UScriptStruct_FJsonStruct, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_value,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_json,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Json" },
				{ "ModuleRelativePath", "Public/JsonHelper.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UJsonHelper, "ChangeJsonNumberValue", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14042401, sizeof(JsonHelper_eventChangeJsonNumberValue_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UJsonHelper_ChangeJsonObjectValue()
	{
		struct JsonHelper_eventChangeJsonObjectValue_Parms
		{
			FJsonStruct json;
			FString key;
			FJsonStruct value;
			FJsonStruct ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(JsonHelper_eventChangeJsonObjectValue_Parms, ReturnValue), Z_Construct_UScriptStruct_FJsonStruct, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_value = { UE4CodeGen_Private::EPropertyClass::Struct, "value", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(JsonHelper_eventChangeJsonObjectValue_Parms, value), Z_Construct_UScriptStruct_FJsonStruct, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_key = { UE4CodeGen_Private::EPropertyClass::Str, "key", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(JsonHelper_eventChangeJsonObjectValue_Parms, key), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_json = { UE4CodeGen_Private::EPropertyClass::Struct, "json", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(JsonHelper_eventChangeJsonObjectValue_Parms, json), Z_Construct_UScriptStruct_FJsonStruct, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_value,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_key,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_json,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Json" },
				{ "ModuleRelativePath", "Public/JsonHelper.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UJsonHelper, "ChangeJsonObjectValue", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14042401, sizeof(JsonHelper_eventChangeJsonObjectValue_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UJsonHelper_ChangeJsonStringValue()
	{
		struct JsonHelper_eventChangeJsonStringValue_Parms
		{
			FJsonStruct json;
			FString value;
			FJsonStruct ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(JsonHelper_eventChangeJsonStringValue_Parms, ReturnValue), Z_Construct_UScriptStruct_FJsonStruct, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_value = { UE4CodeGen_Private::EPropertyClass::Str, "value", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(JsonHelper_eventChangeJsonStringValue_Parms, value), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_json = { UE4CodeGen_Private::EPropertyClass::Struct, "json", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(JsonHelper_eventChangeJsonStringValue_Parms, json), Z_Construct_UScriptStruct_FJsonStruct, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_value,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_json,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Json" },
				{ "ModuleRelativePath", "Public/JsonHelper.h" },
				{ "ToolTip", "????Json Value" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UJsonHelper, "ChangeJsonStringValue", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14042401, sizeof(JsonHelper_eventChangeJsonStringValue_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UJsonHelper_CreateJsonArray()
	{
		struct JsonHelper_eventCreateJsonArray_Parms
		{
			FJsonStruct ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(JsonHelper_eventCreateJsonArray_Parms, ReturnValue), Z_Construct_UScriptStruct_FJsonStruct, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Json" },
				{ "DisplayName", "CreateEmptyJsonArray" },
				{ "ModuleRelativePath", "Public/JsonHelper.h" },
				{ "ToolTip", "???\xc9\xbf?Array" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UJsonHelper, "CreateJsonArray", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14042401, sizeof(JsonHelper_eventCreateJsonArray_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UJsonHelper_CreateJsonArrayByValue()
	{
		struct JsonHelper_eventCreateJsonArrayByValue_Parms
		{
			TArray<FJsonStruct> arrays;
			FJsonStruct ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(JsonHelper_eventCreateJsonArrayByValue_Parms, ReturnValue), Z_Construct_UScriptStruct_FJsonStruct, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_arrays = { UE4CodeGen_Private::EPropertyClass::Array, "arrays", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(JsonHelper_eventCreateJsonArrayByValue_Parms, arrays), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_arrays_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "arrays", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FJsonStruct, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_arrays,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_arrays_Inner,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Json" },
				{ "DisplayName", "CreateJsonArray" },
				{ "ModuleRelativePath", "Public/JsonHelper.h" },
				{ "ToolTip", "??????Json?\xcf\xb2???\xd2\xbb??Aray?? ???\xd8\xb5?Json????\xce\xaa""Aray" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UJsonHelper, "CreateJsonArrayByValue", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14042401, sizeof(JsonHelper_eventCreateJsonArrayByValue_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UJsonHelper_CreateJsonBoolValue()
	{
		struct JsonHelper_eventCreateJsonBoolValue_Parms
		{
			FString key;
			bool value;
			FJsonStruct ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(JsonHelper_eventCreateJsonBoolValue_Parms, ReturnValue), Z_Construct_UScriptStruct_FJsonStruct, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_value_SetBit = [](void* Obj){ ((JsonHelper_eventCreateJsonBoolValue_Parms*)Obj)->value = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_value = { UE4CodeGen_Private::EPropertyClass::Bool, "value", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(JsonHelper_eventCreateJsonBoolValue_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_value_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_key = { UE4CodeGen_Private::EPropertyClass::Str, "key", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(JsonHelper_eventCreateJsonBoolValue_Parms, key), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_value,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_key,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Json" },
				{ "ModuleRelativePath", "Public/JsonHelper.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UJsonHelper, "CreateJsonBoolValue", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14042401, sizeof(JsonHelper_eventCreateJsonBoolValue_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UJsonHelper_CreateJsonNumberValue()
	{
		struct JsonHelper_eventCreateJsonNumberValue_Parms
		{
			FString key;
			float value;
			FJsonStruct ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(JsonHelper_eventCreateJsonNumberValue_Parms, ReturnValue), Z_Construct_UScriptStruct_FJsonStruct, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_value = { UE4CodeGen_Private::EPropertyClass::Float, "value", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(JsonHelper_eventCreateJsonNumberValue_Parms, value), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_key = { UE4CodeGen_Private::EPropertyClass::Str, "key", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(JsonHelper_eventCreateJsonNumberValue_Parms, key), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_value,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_key,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Json" },
				{ "ModuleRelativePath", "Public/JsonHelper.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UJsonHelper, "CreateJsonNumberValue", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14042401, sizeof(JsonHelper_eventCreateJsonNumberValue_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UJsonHelper_CreateJsonObject()
	{
		struct JsonHelper_eventCreateJsonObject_Parms
		{
			FJsonStruct ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(JsonHelper_eventCreateJsonObject_Parms, ReturnValue), Z_Construct_UScriptStruct_FJsonStruct, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Json" },
				{ "DisplayName", "CreateEmptyJsonObject" },
				{ "ModuleRelativePath", "Public/JsonHelper.h" },
				{ "ToolTip", "???\xc9\xbf?Object" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UJsonHelper, "CreateJsonObject", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14042401, sizeof(JsonHelper_eventCreateJsonObject_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UJsonHelper_CreateJsonObjectByValue()
	{
		struct JsonHelper_eventCreateJsonObjectByValue_Parms
		{
			TArray<FJsonStruct> arrays;
			FJsonStruct ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(JsonHelper_eventCreateJsonObjectByValue_Parms, ReturnValue), Z_Construct_UScriptStruct_FJsonStruct, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_arrays = { UE4CodeGen_Private::EPropertyClass::Array, "arrays", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(JsonHelper_eventCreateJsonObjectByValue_Parms, arrays), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_arrays_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "arrays", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FJsonStruct, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_arrays,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_arrays_Inner,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Json" },
				{ "DisplayName", "CreateJsonObject" },
				{ "ModuleRelativePath", "Public/JsonHelper.h" },
				{ "ToolTip", "??????Json?\xcf\xb2???\xd2\xbb??Object?? ???\xd8\xb5?Json????\xce\xaaObject" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UJsonHelper, "CreateJsonObjectByValue", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14042401, sizeof(JsonHelper_eventCreateJsonObjectByValue_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UJsonHelper_CreateJsonStringValue()
	{
		struct JsonHelper_eventCreateJsonStringValue_Parms
		{
			FString key;
			FString value;
			FJsonStruct ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(JsonHelper_eventCreateJsonStringValue_Parms, ReturnValue), Z_Construct_UScriptStruct_FJsonStruct, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_value = { UE4CodeGen_Private::EPropertyClass::Str, "value", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(JsonHelper_eventCreateJsonStringValue_Parms, value), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_key = { UE4CodeGen_Private::EPropertyClass::Str, "key", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(JsonHelper_eventCreateJsonStringValue_Parms, key), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_value,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_key,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Json" },
				{ "ModuleRelativePath", "Public/JsonHelper.h" },
				{ "ToolTip", "???\xc9\xbb???????" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UJsonHelper, "CreateJsonStringValue", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14042401, sizeof(JsonHelper_eventCreateJsonStringValue_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UJsonHelper_FindJsonFromObject()
	{
		struct JsonHelper_eventFindJsonFromObject_Parms
		{
			FJsonStruct json;
			FString key;
			FString value;
			EJsonType type;
			bool isFound;
			FJsonStruct ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(JsonHelper_eventFindJsonFromObject_Parms, ReturnValue), Z_Construct_UScriptStruct_FJsonStruct, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_isFound_SetBit = [](void* Obj){ ((JsonHelper_eventFindJsonFromObject_Parms*)Obj)->isFound = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isFound = { UE4CodeGen_Private::EPropertyClass::Bool, "isFound", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(JsonHelper_eventFindJsonFromObject_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_isFound_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_type = { UE4CodeGen_Private::EPropertyClass::Enum, "type", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(JsonHelper_eventFindJsonFromObject_Parms, type), Z_Construct_UEnum_JsonModule_EJsonType, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_type_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_value = { UE4CodeGen_Private::EPropertyClass::Str, "value", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(JsonHelper_eventFindJsonFromObject_Parms, value), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_key = { UE4CodeGen_Private::EPropertyClass::Str, "key", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(JsonHelper_eventFindJsonFromObject_Parms, key), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_json = { UE4CodeGen_Private::EPropertyClass::Struct, "json", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(JsonHelper_eventFindJsonFromObject_Parms, json), Z_Construct_UScriptStruct_FJsonStruct, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_isFound,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_type,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_type_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_value,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_key,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_json,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Json" },
				{ "DisplayName", "Find" },
				{ "ModuleRelativePath", "Public/JsonHelper.h" },
				{ "ToolTip", "????Json????\xce\xaaObject?\xd0\xb5??\xd8\xb6?Value" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UJsonHelper, "FindJsonFromObject", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14442401, sizeof(JsonHelper_eventFindJsonFromObject_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UJsonHelper_GetAllValueFromJson()
	{
		struct JsonHelper_eventGetAllValueFromJson_Parms
		{
			FJsonStruct json;
			TArray<FJsonStruct> ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Array, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(JsonHelper_eventGetAllValueFromJson_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FJsonStruct, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_json = { UE4CodeGen_Private::EPropertyClass::Struct, "json", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(JsonHelper_eventGetAllValueFromJson_Parms, json), Z_Construct_UScriptStruct_FJsonStruct, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_json,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Json" },
				{ "ModuleRelativePath", "Public/JsonHelper.h" },
				{ "ToolTip", "??\xc8\xa1JSON????\xce\xaaObject??Array?\xd0\xb5?????value" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UJsonHelper, "GetAllValueFromJson", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14042401, sizeof(JsonHelper_eventGetAllValueFromJson_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UJsonHelper_JsonType()
	{
		struct JsonHelper_eventJsonType_Parms
		{
			FJsonStruct json;
			EJsonType ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Enum, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(JsonHelper_eventJsonType_Parms, ReturnValue), Z_Construct_UEnum_JsonModule_EJsonType, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_json = { UE4CodeGen_Private::EPropertyClass::Struct, "json", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(JsonHelper_eventJsonType_Parms, json), Z_Construct_UScriptStruct_FJsonStruct, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_json,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Json" },
				{ "ModuleRelativePath", "Public/JsonHelper.h" },
				{ "ToolTip", "??\xc8\xa1????" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UJsonHelper, "JsonType", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14042401, sizeof(JsonHelper_eventJsonType_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UJsonHelper_ParseJson()
	{
		struct JsonHelper_eventParseJson_Parms
		{
			FString str;
			FJsonStruct ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(JsonHelper_eventParseJson_Parms, ReturnValue), Z_Construct_UScriptStruct_FJsonStruct, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_str = { UE4CodeGen_Private::EPropertyClass::Str, "str", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(JsonHelper_eventParseJson_Parms, str), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_str,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Json" },
				{ "ModuleRelativePath", "Public/JsonHelper.h" },
				{ "ToolTip", "?????\xd6\xb7???" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UJsonHelper, "ParseJson", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14042401, sizeof(JsonHelper_eventParseJson_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UJsonHelper_RemoveJsonArrayValueByValue()
	{
		struct JsonHelper_eventRemoveJsonArrayValueByValue_Parms
		{
			FJsonStruct json;
			FJsonStruct value;
			bool isSuccess;
			FJsonStruct ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(JsonHelper_eventRemoveJsonArrayValueByValue_Parms, ReturnValue), Z_Construct_UScriptStruct_FJsonStruct, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_isSuccess_SetBit = [](void* Obj){ ((JsonHelper_eventRemoveJsonArrayValueByValue_Parms*)Obj)->isSuccess = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isSuccess = { UE4CodeGen_Private::EPropertyClass::Bool, "isSuccess", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(JsonHelper_eventRemoveJsonArrayValueByValue_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_isSuccess_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_value = { UE4CodeGen_Private::EPropertyClass::Struct, "value", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(JsonHelper_eventRemoveJsonArrayValueByValue_Parms, value), Z_Construct_UScriptStruct_FJsonStruct, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_json = { UE4CodeGen_Private::EPropertyClass::Struct, "json", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(JsonHelper_eventRemoveJsonArrayValueByValue_Parms, json), Z_Construct_UScriptStruct_FJsonStruct, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_isSuccess,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_value,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_json,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Json" },
				{ "ModuleRelativePath", "Public/JsonHelper.h" },
				{ "ToolTip", "??Array???\xc6\xb3?\xc4\xb3\xd2\xbb??" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UJsonHelper, "RemoveJsonArrayValueByValue", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14442401, sizeof(JsonHelper_eventRemoveJsonArrayValueByValue_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UJsonHelper_RemoveJsonObjectValueByKey()
	{
		struct JsonHelper_eventRemoveJsonObjectValueByKey_Parms
		{
			FJsonStruct json;
			FString key;
			bool isSuccess;
			FJsonStruct ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(JsonHelper_eventRemoveJsonObjectValueByKey_Parms, ReturnValue), Z_Construct_UScriptStruct_FJsonStruct, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_isSuccess_SetBit = [](void* Obj){ ((JsonHelper_eventRemoveJsonObjectValueByKey_Parms*)Obj)->isSuccess = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isSuccess = { UE4CodeGen_Private::EPropertyClass::Bool, "isSuccess", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(JsonHelper_eventRemoveJsonObjectValueByKey_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_isSuccess_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_key = { UE4CodeGen_Private::EPropertyClass::Str, "key", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(JsonHelper_eventRemoveJsonObjectValueByKey_Parms, key), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_json = { UE4CodeGen_Private::EPropertyClass::Struct, "json", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(JsonHelper_eventRemoveJsonObjectValueByKey_Parms, json), Z_Construct_UScriptStruct_FJsonStruct, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_isSuccess,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_key,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_json,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Json" },
				{ "ModuleRelativePath", "Public/JsonHelper.h" },
				{ "ToolTip", "??Objec???\xc6\xb3?\xc4\xb3\xd2\xbb??" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UJsonHelper, "RemoveJsonObjectValueByKey", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14442401, sizeof(JsonHelper_eventRemoveJsonObjectValueByKey_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UJsonHelper_SetJsonKey()
	{
		struct JsonHelper_eventSetJsonKey_Parms
		{
			FJsonStruct json;
			FString key;
			FJsonStruct ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(JsonHelper_eventSetJsonKey_Parms, ReturnValue), Z_Construct_UScriptStruct_FJsonStruct, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_key = { UE4CodeGen_Private::EPropertyClass::Str, "key", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(JsonHelper_eventSetJsonKey_Parms, key), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_json = { UE4CodeGen_Private::EPropertyClass::Struct, "json", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(JsonHelper_eventSetJsonKey_Parms, json), Z_Construct_UScriptStruct_FJsonStruct, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_key,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_json,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Json" },
				{ "ModuleRelativePath", "Public/JsonHelper.h" },
				{ "ToolTip", "????Json Key\xd6\xb5" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UJsonHelper, "SetJsonKey", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14042401, sizeof(JsonHelper_eventSetJsonKey_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UJsonHelper_ToString()
	{
		struct JsonHelper_eventToString_Parms
		{
			FJsonStruct json;
			FString ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Str, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(JsonHelper_eventToString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_json = { UE4CodeGen_Private::EPropertyClass::Struct, "json", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(JsonHelper_eventToString_Parms, json), Z_Construct_UScriptStruct_FJsonStruct, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_json,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Json" },
				{ "ModuleRelativePath", "Public/JsonHelper.h" },
				{ "ToolTip", "json?????\xd6\xb7???" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UJsonHelper, "ToString", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14042401, sizeof(JsonHelper_eventToString_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UJsonHelper_TryGetBaseValue()
	{
		struct JsonHelper_eventTryGetBaseValue_Parms
		{
			FJsonStruct json;
			FString ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Str, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(JsonHelper_eventTryGetBaseValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_json = { UE4CodeGen_Private::EPropertyClass::Struct, "json", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(JsonHelper_eventTryGetBaseValue_Parms, json), Z_Construct_UScriptStruct_FJsonStruct, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_json,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Json" },
				{ "ModuleRelativePath", "Public/JsonHelper.h" },
				{ "ToolTip", "???\xd4\xbb?\xc8\xa1Json????????value" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UJsonHelper, "TryGetBaseValue", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14042401, sizeof(JsonHelper_eventTryGetBaseValue_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UJsonHelper_NoRegister()
	{
		return UJsonHelper::StaticClass();
	}
	UClass* Z_Construct_UClass_UJsonHelper()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
				(UObject* (*)())Z_Construct_UPackage__Script_JsonModule,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UJsonHelper_AddJsonArrayValue, "AddJsonArrayValue" }, // 104308514
				{ &Z_Construct_UFunction_UJsonHelper_AddJsonObjectValue, "AddJsonObjectValue" }, // 3992977140
				{ &Z_Construct_UFunction_UJsonHelper_ChangeJsonArrayValue, "ChangeJsonArrayValue" }, // 3937872861
				{ &Z_Construct_UFunction_UJsonHelper_ChangeJsonBoolValue, "ChangeJsonBoolValue" }, // 3850033926
				{ &Z_Construct_UFunction_UJsonHelper_ChangeJsonNumberValue, "ChangeJsonNumberValue" }, // 265971713
				{ &Z_Construct_UFunction_UJsonHelper_ChangeJsonObjectValue, "ChangeJsonObjectValue" }, // 2744918561
				{ &Z_Construct_UFunction_UJsonHelper_ChangeJsonStringValue, "ChangeJsonStringValue" }, // 879861796
				{ &Z_Construct_UFunction_UJsonHelper_CreateJsonArray, "CreateJsonArray" }, // 2865429746
				{ &Z_Construct_UFunction_UJsonHelper_CreateJsonArrayByValue, "CreateJsonArrayByValue" }, // 3548686228
				{ &Z_Construct_UFunction_UJsonHelper_CreateJsonBoolValue, "CreateJsonBoolValue" }, // 1336967343
				{ &Z_Construct_UFunction_UJsonHelper_CreateJsonNumberValue, "CreateJsonNumberValue" }, // 1478570704
				{ &Z_Construct_UFunction_UJsonHelper_CreateJsonObject, "CreateJsonObject" }, // 577867857
				{ &Z_Construct_UFunction_UJsonHelper_CreateJsonObjectByValue, "CreateJsonObjectByValue" }, // 726529556
				{ &Z_Construct_UFunction_UJsonHelper_CreateJsonStringValue, "CreateJsonStringValue" }, // 3845758276
				{ &Z_Construct_UFunction_UJsonHelper_FindJsonFromObject, "FindJsonFromObject" }, // 970734643
				{ &Z_Construct_UFunction_UJsonHelper_GetAllValueFromJson, "GetAllValueFromJson" }, // 370257326
				{ &Z_Construct_UFunction_UJsonHelper_JsonType, "JsonType" }, // 2383536473
				{ &Z_Construct_UFunction_UJsonHelper_ParseJson, "ParseJson" }, // 3562701279
				{ &Z_Construct_UFunction_UJsonHelper_RemoveJsonArrayValueByValue, "RemoveJsonArrayValueByValue" }, // 4097997457
				{ &Z_Construct_UFunction_UJsonHelper_RemoveJsonObjectValueByKey, "RemoveJsonObjectValueByKey" }, // 1962813790
				{ &Z_Construct_UFunction_UJsonHelper_SetJsonKey, "SetJsonKey" }, // 3461609452
				{ &Z_Construct_UFunction_UJsonHelper_ToString, "ToString" }, // 3319552522
				{ &Z_Construct_UFunction_UJsonHelper_TryGetBaseValue, "TryGetBaseValue" }, // 3785485105
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "JsonHelper.h" },
				{ "ModuleRelativePath", "Public/JsonHelper.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UJsonHelper>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UJsonHelper::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UJsonHelper, 2372557045);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UJsonHelper(Z_Construct_UClass_UJsonHelper, &UJsonHelper::StaticClass, TEXT("/Script/JsonModule"), TEXT("UJsonHelper"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UJsonHelper);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
