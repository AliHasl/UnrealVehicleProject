// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "MyCustomGameStateBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyCustomGameStateBase() {}
// Cross Module References
	VEHICLETEMPLATE_API UClass* Z_Construct_UClass_AMyCustomGameStateBase_NoRegister();
	VEHICLETEMPLATE_API UClass* Z_Construct_UClass_AMyCustomGameStateBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameStateBase();
	UPackage* Z_Construct_UPackage__Script_VehicleTemplate();
	VEHICLETEMPLATE_API UClass* Z_Construct_UClass_APhysicsTriggerActor_NoRegister();
// End Cross Module References
	void AMyCustomGameStateBase::StaticRegisterNativesAMyCustomGameStateBase()
	{
	}
	UClass* Z_Construct_UClass_AMyCustomGameStateBase_NoRegister()
	{
		return AMyCustomGameStateBase::StaticClass();
	}
	UClass* Z_Construct_UClass_AMyCustomGameStateBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AGameStateBase,
				(UObject* (*)())Z_Construct_UPackage__Script_VehicleTemplate,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Input Movement Collision Rendering Utilities|Transformation" },
				{ "IncludePath", "MyCustomGameStateBase.h" },
				{ "ModuleRelativePath", "MyCustomGameStateBase.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_checkpoints_MetaData[] = {
				{ "Category", "MyCustomGameStateBase" },
				{ "ModuleRelativePath", "MyCustomGameStateBase.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_checkpoints = { UE4CodeGen_Private::EPropertyClass::Object, "checkpoints", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AMyCustomGameStateBase, checkpoints), Z_Construct_UClass_APhysicsTriggerActor_NoRegister, METADATA_PARAMS(NewProp_checkpoints_MetaData, ARRAY_COUNT(NewProp_checkpoints_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_checkpoints,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AMyCustomGameStateBase>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AMyCustomGameStateBase::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900280u,
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
	IMPLEMENT_CLASS(AMyCustomGameStateBase, 1166119424);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyCustomGameStateBase(Z_Construct_UClass_AMyCustomGameStateBase, &AMyCustomGameStateBase::StaticClass, TEXT("/Script/VehicleTemplate"), TEXT("AMyCustomGameStateBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyCustomGameStateBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
