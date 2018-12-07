// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "MyCustomPlayerState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyCustomPlayerState() {}
// Cross Module References
	VEHICLETEMPLATE_API UClass* Z_Construct_UClass_AMyCustomPlayerState_NoRegister();
	VEHICLETEMPLATE_API UClass* Z_Construct_UClass_AMyCustomPlayerState();
	ENGINE_API UClass* Z_Construct_UClass_APlayerState();
	UPackage* Z_Construct_UPackage__Script_VehicleTemplate();
// End Cross Module References
	void AMyCustomPlayerState::StaticRegisterNativesAMyCustomPlayerState()
	{
	}
	UClass* Z_Construct_UClass_AMyCustomPlayerState_NoRegister()
	{
		return AMyCustomPlayerState::StaticClass();
	}
	UClass* Z_Construct_UClass_AMyCustomPlayerState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_APlayerState,
				(UObject* (*)())Z_Construct_UPackage__Script_VehicleTemplate,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Input Movement Collision Rendering Utilities|Transformation" },
				{ "IncludePath", "MyCustomPlayerState.h" },
				{ "ModuleRelativePath", "MyCustomPlayerState.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AMyCustomPlayerState>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AMyCustomPlayerState::StaticClass,
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
	IMPLEMENT_CLASS(AMyCustomPlayerState, 4051254488);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyCustomPlayerState(Z_Construct_UClass_AMyCustomPlayerState, &AMyCustomPlayerState::StaticClass, TEXT("/Script/VehicleTemplate"), TEXT("AMyCustomPlayerState"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyCustomPlayerState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
