#pragma once

// Sea of Thieves (1.2.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_MerchantCrate_SnakeBasket_Desc_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_MerchantCrate_SnakeBasket_Desc.BP_MerchantCrate_SnakeBasket_Desc_C
// 0x0000 (0x0120 - 0x0120)
class UBP_MerchantCrate_SnakeBasket_Desc_C : public UBootyItemDesc
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_MerchantCrate_SnakeBasket_Desc.BP_MerchantCrate_SnakeBasket_Desc_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
