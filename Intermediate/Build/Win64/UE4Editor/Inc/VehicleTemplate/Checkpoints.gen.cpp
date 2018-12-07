// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Checkpoints.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCheckpoints() {}
// Cross Module References
	VEHICLETEMPLATE_API UClass* Z_Construct_UClass_ACheckpoints_NoRegister();
	VEHICLETEMPLATE_API UClass* Z_Construct_UClass_ACheckpoints();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_VehicleTemplate();
	VEHICLETEMPLATE_API UClass* Z_Construct_UClass_APhysicsTriggerActor_NoRegister();
// End Cross Module References
	void ACheckpoints::StaticRegisterNativesACheckpoints()
	{
	}
	UClass* Z_Construct_UClass_ACheckpoints_NoRegister()
	{
		return ACheckpoints::StaticClass();
	}
	UClass* Z_Construct_UClass_ACheckpoints()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AActor,
				(UObject* (*)())Z_Construct_UPackage__Script_VehicleTemplate,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Checkpoints.h" },
				{ "ModuleRelativePath", "Checkpoints.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_checkpoints_MetaData[] = {
				{ "Category", "Checkpoints" },
				{ "ModuleRelativePath", "Checkpoints.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_checkpoints = { UE4CodeGen_Private::EPropertyClass::Object, "checkpoints", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, CPP_ARRAY_DIM(checkpoints, ACheckpoints), nullptr, STRUCT_OFFSET(ACheckpoints, checkpoints), Z_Construct_UClass_APhysicsTriggerActor_NoRegister, METADATA_PARAMS(NewProp_checkpoints_MetaData, ARRAY_COUNT(NewProp_checkpoints_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_checkpoints,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ACheckpoints>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ACheckpoints::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
				nullptr, 0,
				PropPointers, ARRAY_COUNT(PropPointers),
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACheckpoints, 1126257476);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACheckpoints(Z_Construct_UClass_ACheckpoints, &ACheckpoints::StaticClass, TEXT("/Script/VehicleTemplate"), TEXT("ACheckpoints"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACheckpoints);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
