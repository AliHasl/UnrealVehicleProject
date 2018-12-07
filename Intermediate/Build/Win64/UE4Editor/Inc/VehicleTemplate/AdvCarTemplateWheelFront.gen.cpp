// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "AdvCarTemplateWheelFront.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdvCarTemplateWheelFront() {}
// Cross Module References
	VEHICLETEMPLATE_API UClass* Z_Construct_UClass_UAdvCarTemplateWheelFront_NoRegister();
	VEHICLETEMPLATE_API UClass* Z_Construct_UClass_UAdvCarTemplateWheelFront();
	PHYSXVEHICLES_API UClass* Z_Construct_UClass_UVehicleWheel();
	UPackage* Z_Construct_UPackage__Script_VehicleTemplate();
// End Cross Module References
	void UAdvCarTemplateWheelFront::StaticRegisterNativesUAdvCarTemplateWheelFront()
	{
	}
	UClass* Z_Construct_UClass_UAdvCarTemplateWheelFront_NoRegister()
	{
		return UAdvCarTemplateWheelFront::StaticClass();
	}
	UClass* Z_Construct_UClass_UAdvCarTemplateWheelFront()
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
				{ "IncludePath", "AdvCarTemplateWheelFront.h" },
				{ "ModuleRelativePath", "AdvCarTemplateWheelFront.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UAdvCarTemplateWheelFront>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UAdvCarTemplateWheelFront::StaticClass,
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
	IMPLEMENT_CLASS(UAdvCarTemplateWheelFront, 3751524436);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAdvCarTemplateWheelFront(Z_Construct_UClass_UAdvCarTemplateWheelFront, &UAdvCarTemplateWheelFront::StaticClass, TEXT("/Script/VehicleTemplate"), TEXT("UAdvCarTemplateWheelFront"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAdvCarTemplateWheelFront);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
