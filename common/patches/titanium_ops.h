// out-going packets that require an ENCODE translation:
E(OP_Action)
E(OP_BazaarSearch)
E(OP_BecomeTrader)
E(OP_CharInventory)
E(OP_DeleteSpawn)
E(OP_DzCompass)
E(OP_DzExpeditionEndsWarning)
E(OP_DzExpeditionInfo)
E(OP_DzExpeditionList)
E(OP_DzJoinExpeditionConfirm)
E(OP_DzLeaderStatus)
E(OP_DzMemberList)
E(OP_GuildMemberLevelUpdate)
E(OP_GuildMemberList)
E(OP_Illusion)
E(OP_InspectAnswer)
E(OP_InspectRequest)
E(OP_ItemLinkResponse)
E(OP_ItemPacket)
E(OP_LeadershipExpUpdate)
E(OP_LFGuild)
E(OP_OnLevelMessage)
E(OP_PetBuffWindow)
E(OP_PlayerProfile)
E(OP_NewSpawn)
E(OP_ReadBook)
E(OP_RespondAA)
E(OP_SendCharInfo)
E(OP_SendAATable)
E(OP_Track)
E(OP_Trader)
E(OP_TraderBuy)
E(OP_VetRewardsAvaliable)
E(OP_WearChange)
E(OP_ZoneEntry)
E(OP_ZoneServerReady)
E(OP_ZoneSpawns)
// incoming packets that require a DECODE translation:
D(OP_CharacterCreate)
D(OP_FaceChange)
D(OP_InspectAnswer)
D(OP_InspectRequest)
D(OP_ItemLinkClick)
D(OP_LFGuild)
D(OP_ReadBook)
D(OP_SetServerFilter)
D(OP_TraderBuy)
D(OP_WearChange)
D(OP_WhoAllRequest)
#undef E
#undef D
