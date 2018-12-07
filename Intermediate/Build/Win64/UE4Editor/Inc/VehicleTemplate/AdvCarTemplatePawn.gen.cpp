// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "AdvCarTemplatePawn.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdvCarTemplatePawn() {}
// Cross Module References
	VEHICLETEMPLATE_API UClass* Z_Construct_UClass_AAdvCarTemplatePawn_NoRegister();
	VEHICLETEMPLATE_API UClass* Z_Construct_UClass_AAdvCarTemplatePawn();
	PHYSXVEHICLES_API UClass* Z_Construct_UClass_AWheeledVehicle();
	UPackage* Z_Construct_UPackage__Script_VehicleTemplate();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTextRenderComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
// End Cross Module References
	void AAdvCarTemplatePawn::StaticRegisterNativesAAdvCarTemplatePawn()
	{
	}
	UClass* Z_Construct_UClass_AAdvCarTemplatePawn_NoRegister()
	{
		return AAdvCarTemplatePawn::StaticClass();
	}
	UClass* Z_Construct_UClass_AAdvCarTemplatePawn()
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
				{ "IncludePath", "AdvCarTemplatePawn.h" },
				{ "ModuleRelativePath", "AdvCarTemplatePawn.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInReverseGear_MetaData[] = {
				{ "Category", "Camera" },
				{ "ModuleRelativePath", "AdvCarTemplatePawn.h" },
				{ "ToolTip", "Are we in reverse gear" },
			};
#endif
			auto NewProp_bInReverseGear_SetBit = [](void* Obj){ ((AAdvCarTemplatePawn*)Obj)->bInReverseGear = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInReverseGear = { UE4CodeGen_Private::EPropertyClass::Bool, "bInReverseGear", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000030015, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AAdvCarTemplatePawn), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bInReverseGear_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bInReverseGear_MetaData, ARRAY_COUNT(NewProp_bInReverseGear_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInCarCameraActive_MetaData[] = {
				{ "Category", "Camera" },
				{ "ModuleRelativePath", "AdvCarTemplatePawn.h" },
				{ "ToolTip", "Are we using incar camera" },
			};
#endif
			auto NewProp_bInCarCameraActive_SetBit = [](void* Obj){ ((AAdvCarTemplatePawn*)Obj)->bInCarCameraActive = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInCarCameraActive = { UE4CodeGen_Private::EPropertyClass::Bool, "bInCarCameraActive", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000030015, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AAdvCarTemplatePawn), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bInCarCameraActive_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bInCarCameraActive_MetaData, ARRAY_COUNT(NewProp_bInCarCameraActive_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GearDisplayReverseColor_MetaData[] = {
				{ "Category", "Display" },
				{ "ModuleRelativePath", "AdvCarTemplatePawn.h" },
				{ "ToolTip", "The color of the incar gear text when in reverse" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_GearDisplayReverseColor = { UE4CodeGen_Private::EPropertyClass::Struct, "GearDisplayReverseColor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000030015, 1, nullptr, STRUCT_OFFSET(AAdvCarTemplatePawn, GearDisplayReverseColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(NewProp_GearDisplayReverseColor_MetaData, ARRAY_COUNT(NewProp_GearDisplayReverseColor_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GearDisplayColor_MetaData[] = {
				{ "Category", "Display" },
				{ "ModuleRelativePath", "AdvCarTemplatePawn.h" },
				{ "ToolTip", "The color of the incar gear text in forward gears" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_GearDisplayColor = { UE4CodeGen_Private::EPropertyClass::Struct, "GearDisplayColor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000030015, 1, nullptr, STRUCT_OFFSET(AAdvCarTemplatePawn, GearDisplayColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(NewProp_GearDisplayColor_MetaData, ARRAY_COUNT(NewProp_GearDisplayColor_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GearDisplayString_MetaData[] = {
				{ "Category", "Display" },
				{ "ModuleRelativePath", "AdvCarTemplatePawn.h" },
				{ "ToolTip", "The current gear as a string (R,N, 1,2 etc)" },
			};
#endif
			static const UE4CodeGen_Private::FTextPropertyParams NewProp_GearDisplayString = { UE4CodeGen_Private::EPropertyClass::Text, "GearDisplayString", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000030015, 1, nullptr, STRUCT_OFFSET(AAdvCarTemplatePawn, GearDisplayString), METADATA_PARAMS(NewProp_GearDisplayString_MetaData, ARRAY_COUNT(NewProp_GearDisplayString_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpeedDisplayString_MetaData[] = {
				{ "Category", "Display" },
				{ "ModuleRelativePath", "AdvCarTemplatePawn.h" },
				{ "ToolTip", "The current speed as a string eg 10 km/h" },
			};
#endif
			static const UE4CodeGen_Private::FTextPropertyParams NewProp_SpeedDisplayString = { UE4CodeGen_Private::EPropertyClass::Text, "SpeedDisplayString", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000030015, 1, nullptr, STRUCT_OFFSET(AAdvCarTemplatePawn, SpeedDisplayString), METADATA_PARAMS(NewProp_SpeedDisplayString_MetaData, ARRAY_COUNT(NewProp_SpeedDisplayString_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EngineSoundComponent_MetaData[] = {
				{ "AllowPrivateAccess", "true" },
				{ "Category", "Display" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "AdvCarTemplatePawn.h" },
				{ "ToolTip", "Audio component for the engine sound" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EngineSoundComponent = { UE4CodeGen_Private::EPropertyClass::Object, "EngineSoundComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x00400000000b001d, 1, nullptr, STRUCT_OFFSET(AAdvCarTemplatePawn, EngineSoundComponent), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(NewProp_EngineSoundComponent_MetaData, ARRAY_COUNT(NewProp_EngineSoundComponent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InCarGear_MetaData[] = {
				{ "AllowPrivateAccess", "true" },
				{ "Category", "Display" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "AdvCarTemplatePawn.h" },
				{ "ToolTip", "Text component for the In-Car gear" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InCarGear = { UE4CodeGen_Private::EPropertyClass::Object, "InCarGear", RF_Public|RF_Transient|RF_MarkAsNative, 0x00400000000b001d, 1, nullptr, STRUCT_OFFSET(AAdvCarTemplatePawn, InCarGear), Z_Construct_UClass_UTextRenderComponent_NoRegister, METADATA_PARAMS(NewProp_InCarGear_MetaData, ARRAY_COUNT(NewProp_InCarGear_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InCarSpeed_MetaData[] = {
				{ "AllowPrivateAccess", "true" },
				{ "Category", "Display" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "AdvCarTemplatePawn.h" },
				{ "ToolTip", "Text component for the In-Car speed" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InCarSpeed = { UE4CodeGen_Private::EPropertyClass::Object, "InCarSpeed", RF_Public|RF_Transient|RF_MarkAsNative, 0x00400000000b001d, 1, nullptr, STRUCT_OFFSET(AAdvCarTemplatePawn, InCarSpeed), Z_Construct_UClass_UTextRenderComponent_NoRegister, METADATA_PARAMS(NewProp_InCarSpeed_MetaData, ARRAY_COUNT(NewProp_InCarSpeed_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InternalCamera_MetaData[] = {
				{ "AllowPrivateAccess", "true" },
				{ "Category", "Camera" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "AdvCarTemplatePawn.h" },
				{ "ToolTip", "Camera component for the In-Car view" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InternalCamera = { UE4CodeGen_Private::EPropertyClass::Object, "InternalCamera", RF_Public|RF_Transient|RF_MarkAsNative, 0x00400000000b001d, 1, nullptr, STRUCT_OFFSET(AAdvCarTemplatePawn, InternalCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(NewProp_InternalCamera_MetaData, ARRAY_COUNT(NewProp_InternalCamera_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InternalCameraBase_MetaData[] = {
				{ "AllowPrivateAccess", "true" },
				{ "Category", "Camera" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "AdvCarTemplatePawn.h" },
				{ "ToolTip", "SCene component for the In-Car view origin" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InternalCameraBase = { UE4CodeGen_Private::EPropertyClass::Object, "InternalCameraBase", RF_Public|RF_Transient|RF_MarkAsNative, 0x00400000000b001d, 1, nullptr, STRUCT_OFFSET(AAdvCarTemplatePawn, InternalCameraBase), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(NewProp_InternalCameraBase_MetaData, ARRAY_COUNT(NewProp_InternalCameraBase_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[] = {
				{ "AllowPrivateAccess", "true" },
				{ "Category", "Camera" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "AdvCarTemplatePawn.h" },
				{ "ToolTip", "Camera component that will be our viewpoint" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Camera = { UE4CodeGen_Private::EPropertyClass::Object, "Camera", RF_Public|RF_Transient|RF_MarkAsNative, 0x00400000000b001d, 1, nullptr, STRUCT_OFFSET(AAdvCarTemplatePawn, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(NewProp_Camera_MetaData, ARRAY_COUNT(NewProp_Camera_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpringArm_MetaData[] = {
				{ "AllowPrivateAccess", "true" },
				{ "Category", "Camera" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "AdvCarTemplatePawn.h" },
				{ "ToolTip", "Spring arm that will offset the camera" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpringArm = { UE4CodeGen_Private::EPropertyClass::Object, "SpringArm", RF_Public|RF_Transient|RF_MarkAsNative, 0x00400000000b001d, 1, nullptr, STRUCT_OFFSET(AAdvCarTemplatePawn, SpringArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(NewProp_SpringArm_MetaData, ARRAY_COUNT(NewProp_SpringArm_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bInReverseGear,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bInCarCameraActive,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GearDisplayReverseColor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GearDisplayColor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GearDisplayString,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SpeedDisplayString,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EngineSoundComponent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InCarGear,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InCarSpeed,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InternalCamera,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InternalCameraBase,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Camera,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SpringArm,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AAdvCarTemplatePawn>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AAdvCarTemplatePawn::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00800080u,
				nullptr, 0,
				PropPointers, ARRAY_COUNT(PropPointers),
				"Game",
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAdvCarTemplatePawn, 1035731283);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAdvCarTemplatePawn(Z_Construct_UClass_AAdvCarTemplatePawn, &AAdvCarTemplatePawn::StaticClass, TEXT("/Script/VehicleTemplate"), TEXT("AAdvCarTemplatePawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAdvCarTemplatePawn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
