#pragma once

// Sea of Thieves (1.2.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_RareEngine_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function RareEngine.HitchDiagnosisBlueprintFunctionLibrary.SetHitchThreshold
struct UHitchDiagnosisBlueprintFunctionLibrary_SetHitchThreshold_Params
{
	int                                                InThreshold;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function RareEngine.HitchDiagnosisBlueprintFunctionLibrary.GetMaxHitchNameThisFrame
struct UHitchDiagnosisBlueprintFunctionLibrary_GetMaxHitchNameThisFrame_Params
{
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function RareEngine.HitchDiagnosisBlueprintFunctionLibrary.GetMaxHitchLengthThisFrameMs
struct UHitchDiagnosisBlueprintFunctionLibrary_GetMaxHitchLengthThisFrameMs_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function RareEngine.HitchDiagnosisBlueprintFunctionLibrary.DumpThisFramesHitchesToLog
struct UHitchDiagnosisBlueprintFunctionLibrary_DumpThisFramesHitchesToLog_Params
{
};

// Function RareEngine.HitchDiagnosisBlueprintFunctionLibrary.DidHitchOccurThisFrame
struct UHitchDiagnosisBlueprintFunctionLibrary_DidHitchOccurThisFrame_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function RareEngine.StallDetector.Deactivate
struct UStallDetector_Deactivate_Params
{
};

// Function RareEngine.StallDetector.CreateStallDetector
struct UStallDetector_CreateStallDetector_Params
{
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CreateActive;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UStallDetector*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function RareEngine.StallDetector.Activate
struct UStallDetector_Activate_Params
{
};

// Function RareEngine.StaticMeshActorBlueprintLibrary.FindAllStaticMeshComponents
struct UStaticMeshActorBlueprintLibrary_FindAllStaticMeshComponents_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UStaticMesh*>                         MeshFilter;                                               // (ConstParm, Parm, ZeroConstructor)
	TArray<struct FStaticMeshComponentList>            OutComponentLists;                                        // (Parm, OutParm, ZeroConstructor)
	class ULevel*                                      RestrictToLevel;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function RareEngine.StaticMeshActorBlueprintLibrary.FindAllStaticMeshActors
struct UStaticMeshActorBlueprintLibrary_FindAllStaticMeshActors_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UStaticMesh*>                         MeshFilter;                                               // (ConstParm, Parm, ZeroConstructor)
	TArray<struct FStaticMeshActorList>                OutActorLists;                                            // (Parm, OutParm, ZeroConstructor)
	class ULevel*                                      RestrictToLevel;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
