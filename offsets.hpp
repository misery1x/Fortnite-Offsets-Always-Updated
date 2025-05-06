#pragma once

#include <windows.h>

namespace offsets
{
	inline uintptr_t UWorld = 0x17AA2698;
	inline uintptr_t OwningGameInstance = 0x238;
	inline uintptr_t LocalPlayers = 0x38;
	inline uintptr_t PlayerController = 0x30;
	inline uintptr_t AcknowledgedPawn = 0x350;
	inline uintptr_t Mesh = 0x328;
	inline uintptr_t PlayerState = 0x2B0;
	inline uintptr_t TeamIndex = 0x1259;
	inline uintptr_t RootComponent = 0x1B0;
	inline uintptr_t GameState = 0x1C0;
	inline uintptr_t PlayerArray = 0x2c0;
	inline uintptr_t PawnPrivate = 0x320;

	inline uintptr_t BoneArray = 0x5E8;
	inline uintptr_t BoneCache = 0x5F8;
	inline uintptr_t ComponentToWorld = 0x1e0;

	inline uintptr_t fLastSubmitTime = 0x2E8;
	inline uintptr_t fLastRenderTimeOnScreen = 0x2F0;

	inline uintptr_t Velocity = 0x180;

	inline uintptr_t CurrentWeapon = 0xaa8;
	inline uintptr_t WeaponData = 0x618;
	inline uintptr_t AmmoCount = 0x1244;
	inline uintptr_t ItemName = 0x40;
	inline uintptr_t Tier = 0xa2;
	inline uintptr_t WeaponAmmoClipSize = 0x148;
	inline uintptr_t WeaponReloadSpeed = 0x120;

	inline uintptr_t Platform = 0x430;

	inline uintptr_t HabaneroComponent = 0xa48;
	inline uintptr_t RankedProgress = 0xd0;

	inline unitptr_t ProjectileSpeed = 0x1d30;
	inline uintptr_t ProjectileGravityScale = 0x1fbc;
}
