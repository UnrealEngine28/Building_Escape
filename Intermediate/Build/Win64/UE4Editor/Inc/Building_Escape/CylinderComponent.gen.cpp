// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Building_Escape/CylinderComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCylinderComponent() {}
// Cross Module References
	BUILDING_ESCAPE_API UClass* Z_Construct_UClass_UCylinderComponent_NoRegister();
	BUILDING_ESCAPE_API UClass* Z_Construct_UClass_UCylinderComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Building_Escape();
// End Cross Module References
	void UCylinderComponent::StaticRegisterNativesUCylinderComponent()
	{
	}
	UClass* Z_Construct_UClass_UCylinderComponent_NoRegister()
	{
		return UCylinderComponent::StaticClass();
	}
	struct Z_Construct_UClass_UCylinderComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCylinderComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Building_Escape,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCylinderComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "CylinderComponent.h" },
		{ "ModuleRelativePath", "CylinderComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCylinderComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCylinderComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCylinderComponent_Statics::ClassParams = {
		&UCylinderComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UCylinderComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCylinderComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCylinderComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCylinderComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCylinderComponent, 1472985983);
	template<> BUILDING_ESCAPE_API UClass* StaticClass<UCylinderComponent>()
	{
		return UCylinderComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCylinderComponent(Z_Construct_UClass_UCylinderComponent, &UCylinderComponent::StaticClass, TEXT("/Script/Building_Escape"), TEXT("UCylinderComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCylinderComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
