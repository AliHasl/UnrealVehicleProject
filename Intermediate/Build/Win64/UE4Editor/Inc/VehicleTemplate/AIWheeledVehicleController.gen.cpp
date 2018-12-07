// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "AIWheeledVehicleController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAIWheeledVehicleController() {}
// Cross Module References
	VEHICLETEMPLATE_API UClass* Z_Construct_UClass_AAIWheeledVehicleController_NoRegister();
	VEHICLETEMPLATE_API UClass* Z_Construct_UClass_AAIWheeledVehicleController();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	UPackage* Z_Construct_UPackage__Script_VehicleTemplate();
// End Cross Module References
	void AAIWheeledVehicleController::StaticRegisterNativesAAIWheeledVehicleController()
	{
	}
	UClass* Z_Construct_UClass_AAIWheeledVehicleController_NoRegister()
	{
		return AAIWheeledVehicleController::StaticClass();
	}
	UClass* Z_Construct_UClass_AAIWheeledVehicleController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AAIController,
				(UObject* (*)())Z_Construct_UPackage__Script_VehicleTemplate,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Collision Rendering Utilities|Transformation" },
				{ "IncludePath", "AIWheeledVehicleController.h" },
				{ "ModuleRelativePath", "AIWheeledVehicleController.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AAIWheeledVehicleController>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AAIWheeledVehicleController::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900280u,
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
	IMPLEMENT_CLASS(AAIWheeledVehicleController, 202420580);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAIWheeledVehicleController(Z_Construct_UClass_AAIWheeledVehicleController, &AAIWheeledVehicleController::StaticClass, TEXT("/Script/VehicleTemplate"), TEXT("AAIWheeledVehicleController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAIWheeledVehicleController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
