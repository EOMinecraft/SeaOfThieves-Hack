#pragma once

// Sea of Thieves (1.2.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Liv_Eye_ColorClothingCategory_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Liv_Eye_ColorClothingCategory.Liv_Eye_ColorClothingCategory_C
// 0x0000 (0x00A0 - 0x00A0)
class ULiv_Eye_ColorClothingCategory_C : public UClothingCategory
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass Liv_Eye_ColorClothingCategory.Liv_Eye_ColorClothingCategory_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
