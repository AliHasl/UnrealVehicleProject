// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "AIWheeledVehicle.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAIWheeledVehicle() {}
// Cross Module References
	VEHICLETEMPLATE_API UClass* Z_Construct_UClass_AAIWheeledVehicle_NoRegister();
	VEHICLETEMPLATE_API UClass* Z_Construct_UClass_AAIWheeledVehicle();
	PHYSXVEHICLES_API UClass* Z_Construct_UClass_AWheeledVehicle();
	UPackage* Z_Construct_UPackage__Script_VehicleTemplate();
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree_NoRegister();
// End Cross Module References
	void AAIWheeledVehicle::StaticRegisterNativesAAIWheeledVehicle()
	{
	}
	UClass* Z_Construct_UClass_AAIWheeledVehicle_NoRegister()
	{
		return AAIWheeledVehicle::StaticClass();
	}
	UClass* Z_Construct_UClass_AAIWheeledVehicle()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AWheeledVehicle,
				(UObject* (*)())Z_Construct_UPackage__Script_VehicleTemplate,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Navigation" },
				{ "IncludePath", "AIWheeledVehicle.h" },
				{ "ModuleRelativePath", "AIWheeledVehicle.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BehaviorTree_MetaData[] = {
				{ "Category", "AI" },
				{ "ModuleRelativePath", "AIWheeledVehicle.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BehaviorTree = { UE4CodeGen_Private::EPropertyClass::Object, "BehaviorTree", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AAIWheeledVehicle, BehaviorTree), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(NewProp_BehaviorTree_MetaData, ARRAY_COUNT(NewProp_BehaviorTree_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BehaviorTree,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AAIWheeledVehicle>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AAIWheeledVehicle::StaticClass,
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
	IMPLEMENT_CLASS(AAIWheeledVehicle, 2774417367);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAIWheeledVehicle(Z_Construct_UClass_AAIWheeledVehicle, &AAIWheeledVehicle::StaticClass, TEXT("/Script/VehicleTemplate"), TEXT("AAIWheeledVehicle"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAIWheeledVehicle);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
