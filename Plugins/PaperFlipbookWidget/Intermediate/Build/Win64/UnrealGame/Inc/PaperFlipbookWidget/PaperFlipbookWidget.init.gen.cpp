// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePaperFlipbookWidget_init() {}
	PAPERFLIPBOOKWIDGET_API UFunction* Z_Construct_UDelegateFunction_PaperFlipbookWidget_OnFlipbookFinishedPlayingEvent__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_PaperFlipbookWidget;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_PaperFlipbookWidget()
	{
		if (!Z_Registration_Info_UPackage__Script_PaperFlipbookWidget.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_PaperFlipbookWidget_OnFlipbookFinishedPlayingEvent__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/PaperFlipbookWidget",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x07506898,
				0xCD20FFC9,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_PaperFlipbookWidget.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_PaperFlipbookWidget.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_PaperFlipbookWidget(Z_Construct_UPackage__Script_PaperFlipbookWidget, TEXT("/Script/PaperFlipbookWidget"), Z_Registration_Info_UPackage__Script_PaperFlipbookWidget, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x07506898, 0xCD20FFC9));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
