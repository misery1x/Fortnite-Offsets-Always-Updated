#pragma once

#define M_PI 3.14159265358979323846

camera_position_s camera_class::GetCamera()
{
	camera_position_s camera;

	auto location_pointer = memory.read<uintptr_t>(cache.system.UWorld + 0x168); // Rotation is always location + 0x10
	auto rotation_pointer = memory.read<uintptr_t>(cache.system.UWorld + 0x178);

	struct FNRot
	{
		double a; //0x0000
		char pad_0008[24]; //0x0008
		double b; //0x0020
		char pad_0028[424]; //0x0028
		double c; //0x01D0
	} fnRot;

	fnRot.a = memory.read<double>(rotation_pointer);
	fnRot.b = memory.read<double>(rotation_pointer + 0x20);
	fnRot.c = memory.read<double>(rotation_pointer + 0x1d0);

	camera.location = memory.read<FVector>(location_pointer);
	camera.rotation.x = asin(fnRot.c) * (180.0 / M_PI);
	camera.rotation.y = ((atan2(fnRot.a * -1, fnRot.b) * (180.0 / M_PI)) * -1) * -1;
	camera.fov = memory.read<float>((uintptr_t)cache.system.PlayerController + 0x3AC) * 90.f;

	return camera;
}
