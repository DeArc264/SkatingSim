// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "JOAO_BGS_TASK/Obstacle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeObstacle() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	JOAO_BGS_TASK_API UClass* Z_Construct_UClass_AObstacle();
	JOAO_BGS_TASK_API UClass* Z_Construct_UClass_AObstacle_NoRegister();
	UPackage* Z_Construct_UPackage__Script_JOAO_BGS_TASK();
// End Cross Module References
	void AObstacle::StaticRegisterNativesAObstacle()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AObstacle);
	UClass* Z_Construct_UClass_AObstacle_NoRegister()
	{
		return AObstacle::StaticClass();
	}
	struct Z_Construct_UClass_AObstacle_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Slider_MetaData[];
#endif
		static void NewProp_Slider_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Slider;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AObstacle_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_JOAO_BGS_TASK,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AObstacle_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Obstacle.h" },
		{ "ModuleRelativePath", "Obstacle.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AObstacle_Statics::NewProp_Slider_MetaData[] = {
		{ "Category", "Obstacle" },
		{ "ModuleRelativePath", "Obstacle.h" },
	};
#endif
	void Z_Construct_UClass_AObstacle_Statics::NewProp_Slider_SetBit(void* Obj)
	{
		((AObstacle*)Obj)->Slider = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AObstacle_Statics::NewProp_Slider = { "Slider", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AObstacle), &Z_Construct_UClass_AObstacle_Statics::NewProp_Slider_SetBit, METADATA_PARAMS(Z_Construct_UClass_AObstacle_Statics::NewProp_Slider_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AObstacle_Statics::NewProp_Slider_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AObstacle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AObstacle_Statics::NewProp_Slider,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AObstacle_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AObstacle>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AObstacle_Statics::ClassParams = {
		&AObstacle::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AObstacle_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AObstacle_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AObstacle_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AObstacle_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AObstacle()
	{
		if (!Z_Registration_Info_UClass_AObstacle.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AObstacle.OuterSingleton, Z_Construct_UClass_AObstacle_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AObstacle.OuterSingleton;
	}
	template<> JOAO_BGS_TASK_API UClass* StaticClass<AObstacle>()
	{
		return AObstacle::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AObstacle);
	AObstacle::~AObstacle() {}
	struct Z_CompiledInDeferFile_FID_JOAO_BGS_TASK_Source_JOAO_BGS_TASK_Obstacle_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_JOAO_BGS_TASK_Source_JOAO_BGS_TASK_Obstacle_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AObstacle, AObstacle::StaticClass, TEXT("AObstacle"), &Z_Registration_Info_UClass_AObstacle, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AObstacle), 1043390627U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_JOAO_BGS_TASK_Source_JOAO_BGS_TASK_Obstacle_h_4293031191(TEXT("/Script/JOAO_BGS_TASK"),
		Z_CompiledInDeferFile_FID_JOAO_BGS_TASK_Source_JOAO_BGS_TASK_Obstacle_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_JOAO_BGS_TASK_Source_JOAO_BGS_TASK_Obstacle_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
