// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class AI_TestTask : ModuleRules
{
	public AI_TestTask(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "EnhancedInput" });
		
		PublicIncludePaths.AddRange(new string[]
		{
			"AI_TestTask/Public"
		});
	}
}
