FVector2D w2s_class::ProjectWorldToScreen(FVector WorldLocation)
{
	camera_postion = camera.GetCamera();

	if (WorldLocation.x == 0) return FVector2D(0, 0);

	_MATRIX tempMatrix = matrix.Matrix(camera_postion.rotation);
	FVector vAxisX = FVector(tempMatrix.m[0][0], tempMatrix.m[0][1], tempMatrix.m[0][2]);
	FVector vAxisY = FVector(tempMatrix.m[1][0], tempMatrix.m[1][1], tempMatrix.m[1][2]);
	FVector vAxisZ = FVector(tempMatrix.m[2][0], tempMatrix.m[2][1], tempMatrix.m[2][2]);
	FVector vDelta = WorldLocation - camera_postion.location;
	FVector vTransformed = FVector(vDelta.Dot(vAxisY), vDelta.Dot(vAxisZ), vDelta.Dot(vAxisX));

	if (vTransformed.z < 1.f) vTransformed.z = 1.f;

	return FVector2D((RelicTM.ScreenWidth / 2.0f) + vTransformed.x * (((RelicTM.ScreenWidth / 2.0f) / tanf(camera_postion.fov * (float)M_PI / 360.f))) / vTransformed.z, (RelicTM.ScreenHeight / 2.0f) - vTransformed.y * (((RelicTM.ScreenWidth / 2.0f) / tanf(camera_postion.fov * (float)M_PI / 360.f))) / vTransformed.z);
}

