// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "BTCheckpointChaser.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTCheckpointChaser() {}
// Cross Module References
	VEHICLETEMPLATE_API UClass* Z_Construct_UClass_UBTCheckpointChaser_NoRegister();
	VEHICLETEMPLATE_API UClass* Z_Construct_UClass_UBTCheckpointChaser();
	AIMODULE_API UClass* Z_Construct_UClass_UBTService();
	UPackage* Z_Construct_UPackage__Script_VehicleTemplate();
// End Cross Module References
	void UBTCheckpointChaser::StaticRegisterNativesUBTCheckpointChaser()
	{
	}
	UClass* Z_Construct_UClass_UBTCheckpointChaser_NoRegister()
	{
		return UBTCheckpointChaser::StaticClass();
	}
	UClass* Z_Construct_UClass_UBTCheckpointChaser()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UBTService,
				(UObject* (*)())Z_Construct_UPackage__Script_VehicleTemplate,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "BTCheckpointChaser.h" },
				{ "ModuleRelativePath", "BTCheckpointChaser.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UBTCheckpointChaser>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UBTCheckpointChaser::StaticClass,
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
	IMPLEMENT_CLASS(UBTCheckpointChaser, 2931154621);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTCheckpointChaser(Z_Construct_UClass_UBTCheckpointChaser, &UBTCheckpointChaser::StaticClass, TEXT("/Script/VehicleTemplate"), TEXT("UBTCheckpointChaser"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTCheckpointChaser);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
