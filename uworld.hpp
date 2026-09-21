    inline uintptr_t UWORLD_DECRYPT()
    {
        std::uint64_t encoded = Read<std::uint64_t>(Driver->ProcessBase + 0x1B2C5BA0);
        std::uintptr_t world = static_cast<std::uintptr_t>(0x6501B96661E130DDULL * encoded + 0x79D95BD19230E74DULL);
        return world ? world : 0;
    }
