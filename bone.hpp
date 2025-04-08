FVector sdk_bones_class::GetBoneLocation(uintptr_t Mesh, int bone_index)
{
	uintptr_t bone_array = memory.Read<uintptr_t>(Mesh + offsets::BoneArray);
	if (bone_array == 0) bone_array = memory.Read<uintptr_t>(Mesh + offsets::BoneCache);
	FTransform bone = memory.Read<FTransform>(bone_array + (bone_index * 0x60));
	FTransform component_to_world = memory.Read<FTransform>(Mesh + offsets::ComponentToWorld);
	D3DMATRIX Matrix = matrix.MatrixMultiplication(bone.ToMatrixWithScale(), component_to_world.ToMatrixWithScale());
	return FVector(Matrix._41, Matrix._42, Matrix._43);
}
