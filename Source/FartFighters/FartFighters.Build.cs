// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class FartFighters : ModuleRules
{
	public FartFighters(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
