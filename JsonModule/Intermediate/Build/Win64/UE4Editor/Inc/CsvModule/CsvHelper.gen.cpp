// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/CsvHelper.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCsvHelper() {}
// Cross Module References
	CSVMODULE_API UClass* Z_Construct_UClass_UCsvHelper_NoRegister();
	CSVMODULE_API UClass* Z_Construct_UClass_UCsvHelper();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_CsvModule();
	CSVMODULE_API UFunction* Z_Construct_UFunction_UCsvHelper_CsvStrConvertToJsonStr();
// End Cross Module References
	void UCsvHelper::StaticRegisterNativesUCsvHelper()
	{
		UClass* Class = UCsvHelper::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CsvStrConvertToJsonStr", &UCsvHelper::execCsvStrConvertToJsonStr },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UCsvHelper_CsvStrConvertToJsonStr()
	{
		struct CsvHelper_eventCsvStrConvertToJsonStr_Parms
		{
			FString csvRaw;
			FString ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Str, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(CsvHelper_eventCsvStrConvertToJsonStr_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_csvRaw = { UE4CodeGen_Private::EPropertyClass::Str, "csvRaw", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(CsvHelper_eventCsvStrConvertToJsonStr_Parms, csvRaw), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_csvRaw,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Csv" },
				{ "ModuleRelativePath", "Public/CsvHelper.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCsvHelper, "CsvStrConvertToJsonStr", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14042401, sizeof(CsvHelper_eventCsvStrConvertToJsonStr_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCsvHelper_NoRegister()
	{
		return UCsvHelper::StaticClass();
	}
	UClass* Z_Construct_UClass_UCsvHelper()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
				(UObject* (*)())Z_Construct_UPackage__Script_CsvModule,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UCsvHelper_CsvStrConvertToJsonStr, "CsvStrConvertToJsonStr" }, // 1642650604
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "CsvHelper.h" },
				{ "ModuleRelativePath", "Public/CsvHelper.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UCsvHelper>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UCsvHelper::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00000080u,
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
	IMPLEMENT_CLASS(UCsvHelper, 2738243895);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCsvHelper(Z_Construct_UClass_UCsvHelper, &UCsvHelper::StaticClass, TEXT("/Script/CsvModule"), TEXT("UCsvHelper"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCsvHelper);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
