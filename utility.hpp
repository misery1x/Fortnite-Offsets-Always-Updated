#pragma once

bool sdk_utility_class::IsEnemyVisible(uintptr_t Mesh_MJ)
{
	auto Seconds = memory.read<double>(cache.system.UWorld + 0x190);
	auto LastRenderTime = memory.read<float>(Mesh_MJ + 0x32C);
	return Seconds - LastRenderTime <= 0.06f;
}

