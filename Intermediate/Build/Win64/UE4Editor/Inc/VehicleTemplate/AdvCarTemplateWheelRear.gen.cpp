// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "AdvCarTemplateWheelRear.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdvCarTemplateWheelRear() {}
// Cross Module References
	VEHICLETEMPLATE_API UClass* Z_Construct_UClass_UAdvCarTemplateWheelRear_NoRegister();
	VEHICLETEMPLATE_API UClass* Z_Construct_UClass_UAdvCarTemplateWheelRear();
	PHYSXVEHICLES_API UClass* Z_Construct_UClass_UVehicleWheel();
	UPackage* Z_Construct_UPackage__Script_VehicleTemplate();
// End Cross Module References
	void UAdvCarTemplateWheelRear::StaticRegisterNativesUAdvCarTemplateWheelRear()
	{
	}
	UClass* Z_Construct_UClass_UAdvCarTemplateWheelRear_NoRegister()
	{
		return UAdvCarTemplateWheelRear::StaticClass();
	}
	UClass* Z_Construct_UClass_UAdvCarTemplateWheelRear()
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
				{ "IncludePath", "AdvCarTemplateWheelRear.h" },
				{ "ModuleRelativePath", "AdvCarTemplateWheelRear.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UAdvCarTemplateWheelRear>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UAdvCarTemplateWheelRear::StaticClass,
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
	IMPLEMENT_CLASS(UAdvCarTemplateWheelRear, 3640145877);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAdvCarTemplateWheelRear(Z_Construct_UClass_UAdvCarTemplateWheelRear, &UAdvCarTemplateWheelRear::StaticClass, TEXT("/Script/VehicleTemplate"), TEXT("UAdvCarTemplateWheelRear"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAdvCarTemplateWheelRear);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
