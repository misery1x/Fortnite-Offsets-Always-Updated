struct FNRot
{
	double a;
	double b;
	double c;
};

camera_position_s camera_class::GetCamera()
{
	camera_position_s camera;

  uintptr_t location_pointer = memory.Read<uintptr_t>(cache.system.UWorld + 0x140);
  uintptr_t rotation_pointer = memory.Read<uintptr_t>(cache.system.UWorld + 0x150);

  FNRot fnrot{};
  fnrot.a = memory.Read<double>(rotation_pointer);
  fnrot.b = memory.Read<double>(rotation_pointer + 0x20);
  fnrot.c = memory.Read<double>(rotation_pointer + 0x1D0);

  camera.location = memory.Read<FVector>(location_pointer);
  camera.rotation.x = asin(fnrot.c) * (180.0 / M_PI);
  camera.rotation.y = ((atan2(fnrot.a * -1, fnrot.b) * (180.0 / M_PI)) * -1) * -1;
  camera.fov = memory.Read<float>(cache.system.PlayerController + 0x3AC) * 90.0f;
  
	return camera;
}
