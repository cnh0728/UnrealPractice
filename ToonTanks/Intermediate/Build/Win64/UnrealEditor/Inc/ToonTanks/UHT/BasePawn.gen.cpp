// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ToonTanks/BasePawn.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBasePawn() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_APawn();
ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
TOONTANKS_API UClass* Z_Construct_UClass_ABasePawn();
TOONTANKS_API UClass* Z_Construct_UClass_ABasePawn_NoRegister();
TOONTANKS_API UClass* Z_Construct_UClass_AProjectile_NoRegister();
UPackage* Z_Construct_UPackage__Script_ToonTanks();
// End Cross Module References

// Begin Class ABasePawn
void ABasePawn::StaticRegisterNativesABasePawn()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABasePawn);
UClass* Z_Construct_UClass_ABasePawn_NoRegister()
{
	return ABasePawn::StaticClass();
}
struct Z_Construct_UClass_ABasePawn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "BasePawn.h" },
		{ "ModuleRelativePath", "BasePawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CapsuleComp_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BasePawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseMesh_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BasePawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TurretMesh_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BasePawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileSpawnPoint_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BasePawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TurretRotateSpeed_MetaData[] = {
		{ "Category", "BasePawn" },
		{ "ModuleRelativePath", "BasePawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileClass_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "BasePawn.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CapsuleComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BaseMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TurretMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ProjectileSpawnPoint;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TurretRotateSpeed;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ProjectileClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABasePawn>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABasePawn_Statics::NewProp_CapsuleComp = { "CapsuleComp", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABasePawn, CapsuleComp), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CapsuleComp_MetaData), NewProp_CapsuleComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABasePawn_Statics::NewProp_BaseMesh = { "BaseMesh", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABasePawn, BaseMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseMesh_MetaData), NewProp_BaseMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABasePawn_Statics::NewProp_TurretMesh = { "TurretMesh", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABasePawn, TurretMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TurretMesh_MetaData), NewProp_TurretMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABasePawn_Statics::NewProp_ProjectileSpawnPoint = { "ProjectileSpawnPoint", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABasePawn, ProjectileSpawnPoint), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectileSpawnPoint_MetaData), NewProp_ProjectileSpawnPoint_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABasePawn_Statics::NewProp_TurretRotateSpeed = { "TurretRotateSpeed", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABasePawn, TurretRotateSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TurretRotateSpeed_MetaData), NewProp_TurretRotateSpeed_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ABasePawn_Statics::NewProp_ProjectileClass = { "ProjectileClass", nullptr, (EPropertyFlags)0x0044000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABasePawn, ProjectileClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AProjectile_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectileClass_MetaData), NewProp_ProjectileClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABasePawn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasePawn_Statics::NewProp_CapsuleComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasePawn_Statics::NewProp_BaseMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasePawn_Statics::NewProp_TurretMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasePawn_Statics::NewProp_ProjectileSpawnPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasePawn_Statics::NewProp_TurretRotateSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasePawn_Statics::NewProp_ProjectileClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABasePawn_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABasePawn_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APawn,
	(UObject* (*)())Z_Construct_UPackage__Script_ToonTanks,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABasePawn_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABasePawn_Statics::ClassParams = {
	&ABasePawn::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ABasePawn_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ABasePawn_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABasePawn_Statics::Class_MetaDataParams), Z_Construct_UClass_ABasePawn_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABasePawn()
{
	if (!Z_Registration_Info_UClass_ABasePawn.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABasePawn.OuterSingleton, Z_Construct_UClass_ABasePawn_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABasePawn.OuterSingleton;
}
template<> TOONTANKS_API UClass* StaticClass<ABasePawn>()
{
	return ABasePawn::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABasePawn);
ABasePawn::~ABasePawn() {}
// End Class ABasePawn

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_User_Downloads_workspace_unreal_UnrealPractice_ToonTanks_Source_ToonTanks_BasePawn_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABasePawn, ABasePawn::StaticClass, TEXT("ABasePawn"), &Z_Registration_Info_UClass_ABasePawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABasePawn), 3549470521U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_Downloads_workspace_unreal_UnrealPractice_ToonTanks_Source_ToonTanks_BasePawn_h_2383676366(TEXT("/Script/ToonTanks"),
	Z_CompiledInDeferFile_FID_Users_User_Downloads_workspace_unreal_UnrealPractice_ToonTanks_Source_ToonTanks_BasePawn_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_User_Downloads_workspace_unreal_UnrealPractice_ToonTanks_Source_ToonTanks_BasePawn_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
