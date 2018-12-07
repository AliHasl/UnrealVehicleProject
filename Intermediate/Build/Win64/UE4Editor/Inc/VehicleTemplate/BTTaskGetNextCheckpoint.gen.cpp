// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "BTTaskGetNextCheckpoint.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTaskGetNextCheckpoint() {}
// Cross Module References
	VEHICLETEMPLATE_API UClass* Z_Construct_UClass_UBTTaskGetNextCheckpoint_NoRegister();
	VEHICLETEMPLATE_API UClass* Z_Construct_UClass_UBTTaskGetNextCheckpoint();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
	UPackage* Z_Construct_UPackage__Script_VehicleTemplate();
// End Cross Module References
	void UBTTaskGetNextCheckpoint::StaticRegisterNativesUBTTaskGetNextCheckpoint()
	{
	}
	UClass* Z_Construct_UClass_UBTTaskGetNextCheckpoint_NoRegister()
	{
		return UBTTaskGetNextCheckpoint::StaticClass();
	}
	UClass* Z_Construct_UClass_UBTTaskGetNextCheckpoint()
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
				{ "IncludePath", "BTTaskGetNextCheckpoint.h" },
				{ "ModuleRelativePath", "BTTaskGetNextCheckpoint.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UBTTaskGetNextCheckpoint>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UBTTaskGetNextCheckpoint::StaticClass,
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
	IMPLEMENT_CLASS(UBTTaskGetNextCheckpoint, 849936749);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTTaskGetNextCheckpoint(Z_Construct_UClass_UBTTaskGetNextCheckpoint, &UBTTaskGetNextCheckpoint::StaticClass, TEXT("/Script/VehicleTemplate"), TEXT("UBTTaskGetNextCheckpoint"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTaskGetNextCheckpoint);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
