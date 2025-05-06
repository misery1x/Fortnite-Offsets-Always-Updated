bool sdk_utility_class::IsEnemyVisible(uintptr_t Mesh)
{
	auto Seconds = memory.read<double>(cache.system.UWorld + 0x168);
	auto LastRenderTime = memory.read<float>(Mesh + 0x32C);
	return Seconds - LastRenderTime <= 0.06f;
}
