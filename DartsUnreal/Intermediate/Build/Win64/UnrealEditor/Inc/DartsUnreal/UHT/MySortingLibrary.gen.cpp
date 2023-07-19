// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DartsUnreal/MySortingLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMySortingLibrary() {}
// Cross Module References
	DARTSUNREAL_API UClass* Z_Construct_UClass_UMySortingLibrary();
	DARTSUNREAL_API UClass* Z_Construct_UClass_UMySortingLibrary_NoRegister();
	DARTSUNREAL_API UClass* Z_Construct_UClass_UParPlayer_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_DartsUnreal();
// End Cross Module References
	DEFINE_FUNCTION(UMySortingLibrary::execSortPlayersByProperty)
	{
		P_GET_TARRAY_REF(UParPlayer*,Z_Param_Out_PlayersArray);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMySortingLibrary::SortPlayersByProperty(Z_Param_Out_PlayersArray);
		P_NATIVE_END;
	}
	void UMySortingLibrary::StaticRegisterNativesUMySortingLibrary()
	{
		UClass* Class = UMySortingLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SortPlayersByProperty", &UMySortingLibrary::execSortPlayersByProperty },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMySortingLibrary_SortPlayersByProperty_Statics
	{
		struct MySortingLibrary_eventSortPlayersByProperty_Parms
		{
			TArray<UParPlayer*> PlayersArray;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayersArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayersArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PlayersArray;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMySortingLibrary_SortPlayersByProperty_Statics::NewProp_PlayersArray_Inner = { "PlayersArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UParPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMySortingLibrary_SortPlayersByProperty_Statics::NewProp_PlayersArray_MetaData[] = {
		{ "DisplayName", "Players Array" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMySortingLibrary_SortPlayersByProperty_Statics::NewProp_PlayersArray = { "PlayersArray", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MySortingLibrary_eventSortPlayersByProperty_Parms, PlayersArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UMySortingLibrary_SortPlayersByProperty_Statics::NewProp_PlayersArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMySortingLibrary_SortPlayersByProperty_Statics::NewProp_PlayersArray_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMySortingLibrary_SortPlayersByProperty_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMySortingLibrary_SortPlayersByProperty_Statics::NewProp_PlayersArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMySortingLibrary_SortPlayersByProperty_Statics::NewProp_PlayersArray,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMySortingLibrary_SortPlayersByProperty_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sorting" },
		{ "ModuleRelativePath", "MySortingLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMySortingLibrary_SortPlayersByProperty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMySortingLibrary, nullptr, "SortPlayersByProperty", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMySortingLibrary_SortPlayersByProperty_Statics::MySortingLibrary_eventSortPlayersByProperty_Parms), Z_Construct_UFunction_UMySortingLibrary_SortPlayersByProperty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMySortingLibrary_SortPlayersByProperty_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMySortingLibrary_SortPlayersByProperty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMySortingLibrary_SortPlayersByProperty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMySortingLibrary_SortPlayersByProperty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMySortingLibrary_SortPlayersByProperty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMySortingLibrary);
	UClass* Z_Construct_UClass_UMySortingLibrary_NoRegister()
	{
		return UMySortingLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UMySortingLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMySortingLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_DartsUnreal,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMySortingLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMySortingLibrary_SortPlayersByProperty, "SortPlayersByProperty" }, // 2892680570
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMySortingLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "MySortingLibrary.h" },
		{ "ModuleRelativePath", "MySortingLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMySortingLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMySortingLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMySortingLibrary_Statics::ClassParams = {
		&UMySortingLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMySortingLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMySortingLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMySortingLibrary()
	{
		if (!Z_Registration_Info_UClass_UMySortingLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMySortingLibrary.OuterSingleton, Z_Construct_UClass_UMySortingLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMySortingLibrary.OuterSingleton;
	}
	template<> DARTSUNREAL_API UClass* StaticClass<UMySortingLibrary>()
	{
		return UMySortingLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMySortingLibrary);
	UMySortingLibrary::~UMySortingLibrary() {}
	struct Z_CompiledInDeferFile_FID_digital_designer_and_animator_stage_FreccietteAS_DartsUnreal_Source_DartsUnreal_MySortingLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_digital_designer_and_animator_stage_FreccietteAS_DartsUnreal_Source_DartsUnreal_MySortingLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMySortingLibrary, UMySortingLibrary::StaticClass, TEXT("UMySortingLibrary"), &Z_Registration_Info_UClass_UMySortingLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMySortingLibrary), 215946144U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_digital_designer_and_animator_stage_FreccietteAS_DartsUnreal_Source_DartsUnreal_MySortingLibrary_h_1951653865(TEXT("/Script/DartsUnreal"),
		Z_CompiledInDeferFile_FID_digital_designer_and_animator_stage_FreccietteAS_DartsUnreal_Source_DartsUnreal_MySortingLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_digital_designer_and_animator_stage_FreccietteAS_DartsUnreal_Source_DartsUnreal_MySortingLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
