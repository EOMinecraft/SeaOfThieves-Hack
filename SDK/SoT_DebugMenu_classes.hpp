#pragma once

// Sea of Thieves (1.2.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_DebugMenu_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class DebugMenu.DebugMenuComponent
// 0x0050 (0x0128 - 0x00D8)
class UDebugMenuComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x00D8(0x0028) MISSED OFFSET
	class ADebugMenu*                                  DebugMenuInstance;                                        // 0x0100(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x20];                                      // 0x0108(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class DebugMenu.DebugMenuComponent");
		return ptr;
	}

};


// Class DebugMenu.DebugMenuEntryGenerator
// 0x0000 (0x0028 - 0x0028)
class UDebugMenuEntryGenerator : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class DebugMenu.DebugMenuEntryGenerator");
		return ptr;
	}

};


// Class DebugMenu.DebugMenuDataAsset
// 0x0040 (0x0068 - 0x0028)
class UDebugMenuDataAsset : public UDataAsset
{
public:
	TArray<class UDebugMenuDataAsset*>                 DataAssets;                                               // 0x0028(0x0010) (Edit, ZeroConstructor)
	TArray<struct FDebugMenuDataAssetEntry>            MenuEntires;                                              // 0x0038(0x0010) (Edit, ZeroConstructor)
	TArray<struct FDebugMenuButtonShortcut>            ButtonShortcuts;                                          // 0x0048(0x0010) (Edit, ZeroConstructor)
	TArray<class UDebugMenuEntryGenerator*>            MenuEntryGenerators;                                      // 0x0058(0x0010) (Edit, ExportObject, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class DebugMenu.DebugMenuDataAsset");
		return ptr;
	}

};


// Class DebugMenu.DebugMenu
// 0x0060 (0x04F0 - 0x0490)
class ADebugMenu : public AActor
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0490(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class DebugMenu.DebugMenu");
		return ptr;
	}

};


// Class DebugMenu.DebugMenuComponentMock
// 0x0008 (0x0130 - 0x0128)
class UDebugMenuComponentMock : public UDebugMenuComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0128(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class DebugMenu.DebugMenuComponentMock");
		return ptr;
	}

};


// Class DebugMenu.DebugMenuTestFunctions
// 0x0000 (0x0028 - 0x0028)
class UDebugMenuTestFunctions : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class DebugMenu.DebugMenuTestFunctions");
		return ptr;
	}


	bool STATIC_IsDebugMenuReady(class UObject* WorldContextObject);
	bool STATIC_IsDebugMenuOpen(class UObject* WorldContextObject);
	bool STATIC_IsDebugMenuAvailable();
	struct FKey STATIC_GetDebugMenuToggleKeyComboBetaKeyboard();
	struct FKey STATIC_GetDebugMenuToggleKeyComboAlphaKeyboard();
	struct FKey STATIC_GetDebugMenuToggleButtonComboBetaGamepad();
	struct FKey STATIC_GetDebugMenuToggleButtonComboAlphaGamepad();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
