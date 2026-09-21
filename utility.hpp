#pragma once

bool IsEnemyVisible(uintptr_t MESH)
{
	float LastRenderTime = Read<float>(MESH + 0x530);
	float DeltaTimeSeconds = Read<float>(UWorld + 0x7CC);
	double TimeSeconds = Read<double>(UWorld + 0x7A8);
	return std::fmax(0.06, DeltaTimeSeconds + 0.000099999997) >= TimeSeconds - static_cast<double>(LastRenderTime);
}
