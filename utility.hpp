bool sdk_utility_class::IsEnemyVisible(uintptr_t Mesh)
{
	auto Seconds = memory.Read<double>(cache.system.UWorld + 0x160);
	auto LastRenderTime = memory.Read<float>(Mesh + 0x32C);
	return Seconds - LastRenderTime <= 0.06f;
}
