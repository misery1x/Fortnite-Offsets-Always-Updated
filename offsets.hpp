#pragma once

#include <windows.h>

namespace offsets
{
	inline uintptr_t UWorld = 0x1B2C5BA0;
	inline uintptr_t OwningGameInstance = 0x238;
	inline uintptr_t LocalPlayers = 0x38;
	inline uintptr_t PlayerController = 0x30;
	inline uintptr_t AcknowledgedPawn = 0x318;
	inline uintptr_t Mesh = 0x2F0;
	inline uintptr_t PlayerState = 0x290;
	inline uintptr_t TeamIndex = 0xF69;
	inline uintptr_t RootComponent = 0x1B0;
	inline uintptr_t GameState = 0x1C0;
	inline uintptr_t PlayerArray = 0x288;
	inline uintptr_t PawnPrivate = 0x2E8;
	inline uintptr_t RarityStruct = 0x1873E5D8;

	inline uintptr_t BoneArray = 0x660;
	inline uintptr_t BoneCache = 0x670;
	inline uintptr_t ComponentToWorld = 0x1E0;

	inline uintptr_t ProjectileSpeed = 0x2608;
	inline uintptr_t ProjectileGravityScale = 0x260c;
	inline uintptr_t Velocity = 0x188;

	inline uintptr_t CurrentWeapon = 0x9a0;
	inline uintptr_t WeaponData = 0x638;
	inline uintptr_t AmmoCount = 0x1100;
	inline uintptr_t ItemName = 0x40;
	inline uintptr_t Tier = 0AA; // EFortRarity  Rarity

	inline uintptr_t Platform = 0x400;

	// Rank
	inline uintptr_t HabaneroComponent = 0x918;
	inline uintptr_t RankedProgress = 0xd8;
}







