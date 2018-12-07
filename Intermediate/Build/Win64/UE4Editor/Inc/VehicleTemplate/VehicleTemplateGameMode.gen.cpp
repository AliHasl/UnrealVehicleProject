// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "VehicleTemplateGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVehicleTemplateGameMode() {}
// Cross Module References
	VEHICLETEMPLATE_API UClass* Z_Construct_UClass_AVehicleTemplateGameMode_NoRegister();
	VEHICLETEMPLATE_API UClass* Z_Construct_UClass_AVehicleTemplateGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_VehicleTemplate();
// End Cross Module References
	void AVehicleTemplateGameMode::StaticRegisterNativesAVehicleTemplateGameMode()
	{
	}
	UClass* Z_Construct_UClass_AVehicleTemplateGameMode_NoRegister()
	{
		return AVehicleTemplateGameMode::StaticClass();
	}
	UClass* Z_Construct_UClass_AVehicleTemplateGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AGameModeBase,
				(UObject* (*)())Z_Construct_UPackage__Script_VehicleTemplate,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
				{ "IncludePath", "VehicleTemplateGameMode.h" },
				{ "ModuleRelativePath", "VehicleTemplateGameMode.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AVehicleTemplateGameMode>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AVehicleTemplateGameMode::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00880288u,
				nullptr, 0,
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
	IMPLEMENT_CLASS(AVehicleTemplateGameMode, 2218095260);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AVehicleTemplateGameMode(Z_Construct_UClass_AVehicleTemplateGameMode, &AVehicleTemplateGameMode::StaticClass, TEXT("/Script/VehicleTemplate"), TEXT("AVehicleTemplateGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVehicleTemplateGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
