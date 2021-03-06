#pragma once

// Sea of Thieves (1.2.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_ClothingShopkeeper_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_ClothingShopkeeper.BP_ClothingShopkeeper_C
// 0x0008 (0x0548 - 0x0540)
class ABP_ClothingShopkeeper_C : public AShopkeeperInteractionProxy
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0540(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_ClothingShopkeeper.BP_ClothingShopkeeper_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
