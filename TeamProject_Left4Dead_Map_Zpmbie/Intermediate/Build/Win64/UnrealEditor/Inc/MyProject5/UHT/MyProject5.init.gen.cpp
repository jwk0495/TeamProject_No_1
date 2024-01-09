// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyProject5_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_MyProject5;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_MyProject5()
	{
		if (!Z_Registration_Info_UPackage__Script_MyProject5.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/MyProject5",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0xFB015FD3,
				0xAFD4D036,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_MyProject5.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_MyProject5.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_MyProject5(Z_Construct_UPackage__Script_MyProject5, TEXT("/Script/MyProject5"), Z_Registration_Info_UPackage__Script_MyProject5, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xFB015FD3, 0xAFD4D036));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
