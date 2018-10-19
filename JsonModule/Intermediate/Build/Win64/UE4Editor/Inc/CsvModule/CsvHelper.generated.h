// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CSVMODULE_CsvHelper_generated_h
#error "CsvHelper.generated.h already included, missing '#pragma once' in CsvHelper.h"
#endif
#define CSVMODULE_CsvHelper_generated_h

#define MyPackageProject_Plugins_JsonModule_Source_CsvModule_Public_CsvHelper_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCsvStrConvertToJsonStr) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_csvRaw); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UCsvHelper::CsvStrConvertToJsonStr(Z_Param_csvRaw); \
		P_NATIVE_END; \
	}


#define MyPackageProject_Plugins_JsonModule_Source_CsvModule_Public_CsvHelper_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCsvStrConvertToJsonStr) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_csvRaw); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UCsvHelper::CsvStrConvertToJsonStr(Z_Param_csvRaw); \
		P_NATIVE_END; \
	}


#define MyPackageProject_Plugins_JsonModule_Source_CsvModule_Public_CsvHelper_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCsvHelper(); \
	friend CSVMODULE_API class UClass* Z_Construct_UClass_UCsvHelper(); \
public: \
	DECLARE_CLASS(UCsvHelper, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/CsvModule"), NO_API) \
	DECLARE_SERIALIZER(UCsvHelper) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define MyPackageProject_Plugins_JsonModule_Source_CsvModule_Public_CsvHelper_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUCsvHelper(); \
	friend CSVMODULE_API class UClass* Z_Construct_UClass_UCsvHelper(); \
public: \
	DECLARE_CLASS(UCsvHelper, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/CsvModule"), NO_API) \
	DECLARE_SERIALIZER(UCsvHelper) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define MyPackageProject_Plugins_JsonModule_Source_CsvModule_Public_CsvHelper_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCsvHelper(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCsvHelper) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCsvHelper); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCsvHelper); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCsvHelper(UCsvHelper&&); \
	NO_API UCsvHelper(const UCsvHelper&); \
public:


#define MyPackageProject_Plugins_JsonModule_Source_CsvModule_Public_CsvHelper_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCsvHelper(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCsvHelper(UCsvHelper&&); \
	NO_API UCsvHelper(const UCsvHelper&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCsvHelper); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCsvHelper); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCsvHelper)


#define MyPackageProject_Plugins_JsonModule_Source_CsvModule_Public_CsvHelper_h_15_PRIVATE_PROPERTY_OFFSET
#define MyPackageProject_Plugins_JsonModule_Source_CsvModule_Public_CsvHelper_h_12_PROLOG
#define MyPackageProject_Plugins_JsonModule_Source_CsvModule_Public_CsvHelper_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyPackageProject_Plugins_JsonModule_Source_CsvModule_Public_CsvHelper_h_15_PRIVATE_PROPERTY_OFFSET \
	MyPackageProject_Plugins_JsonModule_Source_CsvModule_Public_CsvHelper_h_15_RPC_WRAPPERS \
	MyPackageProject_Plugins_JsonModule_Source_CsvModule_Public_CsvHelper_h_15_INCLASS \
	MyPackageProject_Plugins_JsonModule_Source_CsvModule_Public_CsvHelper_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyPackageProject_Plugins_JsonModule_Source_CsvModule_Public_CsvHelper_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyPackageProject_Plugins_JsonModule_Source_CsvModule_Public_CsvHelper_h_15_PRIVATE_PROPERTY_OFFSET \
	MyPackageProject_Plugins_JsonModule_Source_CsvModule_Public_CsvHelper_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	MyPackageProject_Plugins_JsonModule_Source_CsvModule_Public_CsvHelper_h_15_INCLASS_NO_PURE_DECLS \
	MyPackageProject_Plugins_JsonModule_Source_CsvModule_Public_CsvHelper_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyPackageProject_Plugins_JsonModule_Source_CsvModule_Public_CsvHelper_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
