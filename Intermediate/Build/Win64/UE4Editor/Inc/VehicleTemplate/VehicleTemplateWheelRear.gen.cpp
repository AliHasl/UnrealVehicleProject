// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "VehicleTemplateWheelRear.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVehicleTemplateWheelRear() {}
// Cross Module References
	VEHICLETEMPLATE_API UClass* Z_Construct_UClass_UVehicleTemplateWheelRear_NoRegister();
	VEHICLETEMPLATE_API UClass* Z_Construct_UClass_UVehicleTemplateWheelRear();
	PHYSXVEHICLES_API UClass* Z_Construct_UClass_UVehicleWheel();
	UPackage* Z_Construct_UPackage__Script_VehicleTemplate();
// End Cross Module References
	void UVehicleTemplateWheelRear::StaticRegisterNativesUVehicleTemplateWheelRear()
	{
	}
	UClass* Z_Construct_UClass_UVehicleTemplateWheelRear_NoRegister()
	{
		return UVehicleTemplateWheelRear::StaticClass();
	}
	UClass* Z_Construct_UClass_UVehicleTemplateWheelRear()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UVehicleWheel,
				(UObject* (*)())Z_Construct_UPackage__Script_VehicleTemplate,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "VehicleTemplateWheelRear.h" },
				{ "ModuleRelativePath", "VehicleTemplateWheelRear.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UVehicleTemplateWheelRear>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UVehicleTemplateWheelRear::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00800080u,
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
	IMPLEMENT_CLASS(UVehicleTemplateWheelRear, 2539442206);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVehicleTemplateWheelRear(Z_Construct_UClass_UVehicleTemplateWheelRear, &UVehicleTemplateWheelRear::StaticClass, TEXT("/Script/VehicleTemplate"), TEXT("UVehicleTemplateWheelRear"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVehicleTemplateWheelRear);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
