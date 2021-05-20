// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class ATTPermissionRequest : ModuleRules
{
	public ATTPermissionRequest(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
