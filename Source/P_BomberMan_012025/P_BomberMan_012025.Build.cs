// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class P_BomberMan_012025 : ModuleRules
{
	public P_BomberMan_012025(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
