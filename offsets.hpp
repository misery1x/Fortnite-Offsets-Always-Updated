#pragma once

#include <windows.h>

namespace offsets
{
	inline uintptr_t UWorld = 0x17CDE608;
	inline uintptr_t OwningGameInstance = 0x240;
	inline uintptr_t LocalPlayers = 0x38;
	inline uintptr_t PlayerController = 0x30;
	inline uintptr_t AcknowledgedPawn = 0x350;
	inline uintptr_t Mesh = 0x328;
	inline uintptr_t PlayerState = 0x2C8;
	inline uintptr_t TeamIndex = 0x12C1;
	inline uintptr_t RootComponent = 0x1B0;
	inline uintptr_t GameState = 0x1C8;
	inline uintptr_t PlayerArray = 0x2C0;
	inline uintptr_t PawnPrivate = 0x320;

	inline uintptr_t BoneArray = 0x5E8;
	inline uintptr_t BoneCache = 0x5D8;
	inline uintptr_t ComponentToWorld = 0x1e0;

	inline uintptr_t fLastSubmitTime = 0x2E8;
	inline uintptr_t fLastRenderTimeOnScreen = 0x2F0;

	inline uintptr_t Velocity = 0x180;

	inline uintptr_t CurrentWeapon = 0x990;
	inline uintptr_t WeaponData = 0x570;
	inline uintptr_t AmmoCount = 0x120C;
	inline uintptr_t ItemName = 0x40;
	inline uintptr_t Tier = 0xA2; // EFortRarity  Rarity

	inline uintptr_t Platform = 0x430;

	// Rank
	inline uintptr_t HabaneroComponent = 0xA88;
	inline uintptr_t RankedProgress = 0xB48;
}
	// World
	inline uintptr_t GName = 0x17114EC0;
	inline uintptr_t TargetedFortPawn = 0x1980;
}


