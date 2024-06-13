// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "JOAO_BGS_TASK/SkateHUD.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSkateHUD() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	ENGINE_API UClass* Z_Construct_UClass_UFont_NoRegister();
	JOAO_BGS_TASK_API UClass* Z_Construct_UClass_ASkateHUD();
	JOAO_BGS_TASK_API UClass* Z_Construct_UClass_ASkateHUD_NoRegister();
	UPackage* Z_Construct_UPackage__Script_JOAO_BGS_TASK();
// End Cross Module References
	void ASkateHUD::StaticRegisterNativesASkateHUD()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASkateHUD);
	UClass* Z_Construct_UClass_ASkateHUD_NoRegister()
	{
		return ASkateHUD::StaticClass();
	}
	struct Z_Construct_UClass_ASkateHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HUDFont_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HUDFont;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASkateHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_JOAO_BGS_TASK,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASkateHUD_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "SkateHUD.h" },
		{ "ModuleRelativePath", "SkateHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASkateHUD_Statics::NewProp_HUDFont_MetaData[] = {
		{ "Category", "HUD" },
		{ "Comment", "//Font for text\n" },
		{ "ModuleRelativePath", "SkateHUD.h" },
		{ "ToolTip", "Font for text" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASkateHUD_Statics::NewProp_HUDFont = { "HUDFont", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASkateHUD, HUDFont), Z_Construct_UClass_UFont_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASkateHUD_Statics::NewProp_HUDFont_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASkateHUD_Statics::NewProp_HUDFont_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASkateHUD_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASkateHUD_Statics::NewProp_HUDFont,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASkateHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASkateHUD>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASkateHUD_Statics::ClassParams = {
		&ASkateHUD::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASkateHUD_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASkateHUD_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ASkateHUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASkateHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASkateHUD()
	{
		if (!Z_Registration_Info_UClass_ASkateHUD.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASkateHUD.OuterSingleton, Z_Construct_UClass_ASkateHUD_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASkateHUD.OuterSingleton;
	}
	template<> JOAO_BGS_TASK_API UClass* StaticClass<ASkateHUD>()
	{
		return ASkateHUD::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASkateHUD);
	ASkateHUD::~ASkateHUD() {}
	struct Z_CompiledInDeferFile_FID_JOAO_BGS_TASK_Source_JOAO_BGS_TASK_SkateHUD_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_JOAO_BGS_TASK_Source_JOAO_BGS_TASK_SkateHUD_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASkateHUD, ASkateHUD::StaticClass, TEXT("ASkateHUD"), &Z_Registration_Info_UClass_ASkateHUD, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASkateHUD), 488312995U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_JOAO_BGS_TASK_Source_JOAO_BGS_TASK_SkateHUD_h_2773256398(TEXT("/Script/JOAO_BGS_TASK"),
		Z_CompiledInDeferFile_FID_JOAO_BGS_TASK_Source_JOAO_BGS_TASK_SkateHUD_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_JOAO_BGS_TASK_Source_JOAO_BGS_TASK_SkateHUD_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
