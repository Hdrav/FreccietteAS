// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DartsUnreal/ParPlayer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParPlayer() {}
// Cross Module References
	DARTSUNREAL_API UClass* Z_Construct_UClass_UParPlayer();
	DARTSUNREAL_API UClass* Z_Construct_UClass_UParPlayer_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	UPackage* Z_Construct_UPackage__Script_DartsUnreal();
// End Cross Module References
	DEFINE_FUNCTION(UParPlayer::execgetTotalScore)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->getTotalScore();
		P_NATIVE_END;
	}
	void UParPlayer::StaticRegisterNativesUParPlayer()
	{
		UClass* Class = UParPlayer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "getTotalScore", &UParPlayer::execgetTotalScore },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UParPlayer_getTotalScore_Statics
	{
		struct ParPlayer_eventgetTotalScore_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UParPlayer_getTotalScore_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ParPlayer_eventgetTotalScore_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UParPlayer_getTotalScore_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParPlayer_getTotalScore_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UParPlayer_getTotalScore_Statics::Function_MetaDataParams[] = {
		{ "Category", "score" },
		{ "ModuleRelativePath", "ParPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UParPlayer_getTotalScore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UParPlayer, nullptr, "getTotalScore", nullptr, nullptr, sizeof(Z_Construct_UFunction_UParPlayer_getTotalScore_Statics::ParPlayer_eventgetTotalScore_Parms), Z_Construct_UFunction_UParPlayer_getTotalScore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UParPlayer_getTotalScore_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UParPlayer_getTotalScore_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UParPlayer_getTotalScore_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UParPlayer_getTotalScore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UParPlayer_getTotalScore_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UParPlayer);
	UClass* Z_Construct_UClass_UParPlayer_NoRegister()
	{
		return UParPlayer::StaticClass();
	}
	struct Z_Construct_UClass_UParPlayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TotalScore_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TotalScore;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Missed_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Missed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaloonDestroyed_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_BaloonDestroyed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UParPlayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_DartsUnreal,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UParPlayer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UParPlayer_getTotalScore, "getTotalScore" }, // 2695622727
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParPlayer_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "ParPlayer.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "ParPlayer.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParPlayer_Statics::NewProp_TotalScore_MetaData[] = {
		{ "Category", "ParPlayer" },
		{ "ModuleRelativePath", "ParPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParPlayer_Statics::NewProp_TotalScore = { "TotalScore", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParPlayer, TotalScore), METADATA_PARAMS(Z_Construct_UClass_UParPlayer_Statics::NewProp_TotalScore_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParPlayer_Statics::NewProp_TotalScore_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParPlayer_Statics::NewProp_Missed_MetaData[] = {
		{ "Category", "ParPlayer" },
		{ "ModuleRelativePath", "ParPlayer.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UParPlayer_Statics::NewProp_Missed = { "Missed", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParPlayer, Missed), METADATA_PARAMS(Z_Construct_UClass_UParPlayer_Statics::NewProp_Missed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParPlayer_Statics::NewProp_Missed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParPlayer_Statics::NewProp_BaloonDestroyed_MetaData[] = {
		{ "Category", "ParPlayer" },
		{ "ModuleRelativePath", "ParPlayer.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UParPlayer_Statics::NewProp_BaloonDestroyed = { "BaloonDestroyed", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParPlayer, BaloonDestroyed), METADATA_PARAMS(Z_Construct_UClass_UParPlayer_Statics::NewProp_BaloonDestroyed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParPlayer_Statics::NewProp_BaloonDestroyed_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParPlayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParPlayer_Statics::NewProp_TotalScore,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParPlayer_Statics::NewProp_Missed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParPlayer_Statics::NewProp_BaloonDestroyed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UParPlayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParPlayer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UParPlayer_Statics::ClassParams = {
		&UParPlayer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UParPlayer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UParPlayer_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UParPlayer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UParPlayer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UParPlayer()
	{
		if (!Z_Registration_Info_UClass_UParPlayer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UParPlayer.OuterSingleton, Z_Construct_UClass_UParPlayer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UParPlayer.OuterSingleton;
	}
	template<> DARTSUNREAL_API UClass* StaticClass<UParPlayer>()
	{
		return UParPlayer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParPlayer);
	UParPlayer::~UParPlayer() {}
	struct Z_CompiledInDeferFile_FID_digital_designer_and_animator_stage_FreccietteAS_DartsUnreal_Source_DartsUnreal_ParPlayer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_digital_designer_and_animator_stage_FreccietteAS_DartsUnreal_Source_DartsUnreal_ParPlayer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UParPlayer, UParPlayer::StaticClass, TEXT("UParPlayer"), &Z_Registration_Info_UClass_UParPlayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UParPlayer), 3468195417U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_digital_designer_and_animator_stage_FreccietteAS_DartsUnreal_Source_DartsUnreal_ParPlayer_h_2403077723(TEXT("/Script/DartsUnreal"),
		Z_CompiledInDeferFile_FID_digital_designer_and_animator_stage_FreccietteAS_DartsUnreal_Source_DartsUnreal_ParPlayer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_digital_designer_and_animator_stage_FreccietteAS_DartsUnreal_Source_DartsUnreal_ParPlayer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
