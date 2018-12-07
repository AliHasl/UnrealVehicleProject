// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "BTTaskSteerVehicle.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTaskSteerVehicle() {}
// Cross Module References
	VEHICLETEMPLATE_API UClass* Z_Construct_UClass_UBTTaskSteerVehicle_NoRegister();
	VEHICLETEMPLATE_API UClass* Z_Construct_UClass_UBTTaskSteerVehicle();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
	UPackage* Z_Construct_UPackage__Script_VehicleTemplate();
// End Cross Module References
	void UBTTaskSteerVehicle::StaticRegisterNativesUBTTaskSteerVehicle()
	{
	}
	UClass* Z_Construct_UClass_UBTTaskSteerVehicle_NoRegister()
	{
		return UBTTaskSteerVehicle::StaticClass();
	}
	UClass* Z_Construct_UClass_UBTTaskSteerVehicle()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
				(UObject* (*)())Z_Construct_UPackage__Script_VehicleTemplate,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "BTTaskSteerVehicle.h" },
				{ "ModuleRelativePath", "BTTaskSteerVehicle.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UBTTaskSteerVehicle>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UBTTaskSteerVehicle::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100080u,
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
	IMPLEMENT_CLASS(UBTTaskSteerVehicle, 2220959955);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTTaskSteerVehicle(Z_Construct_UClass_UBTTaskSteerVehicle, &UBTTaskSteerVehicle::StaticClass, TEXT("/Script/VehicleTemplate"), TEXT("UBTTaskSteerVehicle"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTaskSteerVehicle);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
