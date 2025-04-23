#pragma once

#include <windows.h>

namespace offsets
{
	// Cache
	inline uintptr_t UWorld = 0x1782D0B8;
	inline uintptr_t OwningGameInstance = 0x220;
	inline uintptr_t LocalPlayers = 0x38;
	inline uintptr_t PlayerController = 0x30;
	inline uintptr_t AcknowledgedPawn = 0x350;
	inline uintptr_t Mesh = 0x328;
	inline uintptr_t PlayerState = 0x2c8;
	inline uintptr_t TeamIndex = 0x1259;
	inline uintptr_t RootComponent = 0x1B0;
	inline uintptr_t GameState = 0x1A8;
	inline uintptr_t PlayerArray = 0x2C0;
	inline uintptr_t PawnPrivate = 0x320;
	
	// Camera
	inline uintptr_t RelativeLocation = 0x148;
	inline uintptr_t RelativeRotation = 0x158;

	// Getbone
	inline uintptr_t BoneArray = 0x5c8;
	inline uintptr_t BoneCache = 0x5D8;
	inline uintptr_t ComponentToWorld = 0x1e0;

	// Visible chec
	inline uintptr_t fLastSubmitTime = 0x2E8;
	inline uintptr_t fLastRenderTimeOnScreen = 0x2F0;

	// Prediction
	inline uintptr_t ProjectileSpeed = 0x1af8;
	inline uintptr_t ProjectileGravityScale = 0x2210;
	inline uintptr_t Velocity = 0x180;

	// Weapon decryption
	inline uintptr_t CurrentWeapon = 0xa80;
	inline uintptr_t WeaponData = 0x588;
	inline uintptr_t AmmoCount = 0xf34;
	inline uintptr_t ItemName = 0x40;
	inline uintptr_t Tier = 0xa2;
	inline uintptr_t WeaponAmmoClipSize = 0x148;
	inline uintptr_t WeaponReloadSpeed = 0x120;

	// Platform decryption
	inline uintptr_t Platform = 0x430;

	// Rank decryption
	inline uintptr_t HabaneroComponent = 0xa48;
	inline uintptr_t RankedProgress = 0xd0;
	
	// Playername
	inline uintptr_t PlayerName = 0xb08;


	// Triggerbot
	inline uintptr_t TargetedFortPawn = 0x1980;
	
	// Visible Check
	Seconds: 0x168
}
