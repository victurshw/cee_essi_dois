### shww

```cpp
// Module: client.dll
struct client_dll {
    uintptr_t dwCSGOInput                           = 0x2569E30;
    uintptr_t dwEntityList                          = 0x2709010;
    uintptr_t dwGameEntitySystem                    = 0x2709010;
    uintptr_t dwGameEntitySystem_highestEntityIndex =    0x2120;
    uintptr_t dwGameRules                           = 0x25537E8;
    uintptr_t dwGlobalVars                          = 0x2221AB8;
    uintptr_t dwGlowManager                         = 0x2550500;
    uintptr_t dwLocalPlayerController               = 0x252B0C8;
    uintptr_t dwLocalPlayerPawn                     = 0x2553D38;
    uintptr_t dwPlantedC4                           = 0x24B9B90;
    uintptr_t dwPrediction                          = 0x2553C40;
    uintptr_t dwViewAngles                          = 0x256A4B8;
    uintptr_t dwViewMatrix                          = 0x2559640;
    uintptr_t dwViewRender                          = 0x255A008;
    uintptr_t dwWeaponC4                            = 0x24B83B0;
};
```

### engine2.dll

```cpp
// Module: engine2.dll
struct engine2_dll {
    uintptr_t dwBuildNumber                       = 0x6B2D18;
    uintptr_t dwNetworkGameClient                 = 0x9AFB30;
    uintptr_t dwNetworkGameClient_clientTickCount =    0x398;
    uintptr_t dwNetworkGameClient_deltaTick       =    0x24C;
    uintptr_t dwNetworkGameClient_isBackgroundMap = 0x2C143F;
    uintptr_t dwNetworkGameClient_localPlayer     =     0xF8;
    uintptr_t dwNetworkGameClient_maxClients      =    0x240;
    uintptr_t dwNetworkGameClient_serverTickCount =    0x24C;
    uintptr_t dwNetworkGameClient_signOnState     =    0x230;
    uintptr_t dwWindowHeight                      = 0x9B4294;
    uintptr_t dwWindowWidth                       = 0x9B4290;
};
```

### inputsystem.dll

```cpp
// Module: inputsystem.dll
struct inputsystem_dll {
    uintptr_t dwInputSystem = 0x46BC0;
};
```

### matchmaking.dll

```cpp
// Module: matchmaking.dll
struct matchmaking_dll {
    uintptr_t dwGameTypes = 0x1AEFC0;
};
```

### soundsystem.dll

```cpp
// Module: soundsystem.dll
struct soundsystem_dll {
    uintptr_t dwSoundSystem = 0x532470;
};
```

## Buttons

```cpp
// client.dll buttons
struct buttons {
    uintptr_t attack       = 0x2225900;
    uintptr_t attack2      = 0x2225990;
    uintptr_t back         = 0x2225BD0;
    uintptr_t duck         = 0x2225EA0;
    uintptr_t forward      = 0x2225B40;
    uintptr_t jump         = 0x2225E10;
    uintptr_t left         = 0x2225C60;
    uintptr_t lookatweapon = 0x2569D50;
    uintptr_t reload       = 0x2225870;
    uintptr_t right        = 0x2225CF0;
    uintptr_t showscores   = 0x2569C30;
    uintptr_t sprint       = 0x22257E0;
    uintptr_t turnleft     = 0x2225A20;
    uintptr_t turnright    = 0x2225AB0;
    uintptr_t use          = 0x2225D80;
    uintptr_t zoom         = 0x2569CC0;
};
```

## Essential client schemas

### C_BaseEntity

```cpp
struct C_BaseEntity {
    uintptr_t m_pGameSceneNode                             = 0x330;
    uintptr_t m_iHealth                                    = 0x34C;
    uintptr_t m_iMaxHealth                                 = 0x348;
    uintptr_t m_lifeState                                  = 0x354;
    uintptr_t m_iTeamNum                                   = 0x3E7;
    uintptr_t m_fFlags                                     = 0x3F4;
    uintptr_t m_vecAbsVelocity                             = 0x3F8;
    uintptr_t m_vecBaseVelocity                            = 0x510;
    uintptr_t m_hOwnerEntity                               = 0x520;
    uintptr_t m_flSimulationTime                           = 0x3B8;
    uintptr_t m_nSubclassID                                = 0x380;
    uintptr_t m_CBodyComponent                             =  0x30;
    uintptr_t m_NetworkTransmitComponent                   =  0x38;
    uintptr_t m_nLastThinkTick                             = 0x328;
    uintptr_t m_pRenderComponent                           = 0x338;
    uintptr_t m_pCollision                                 = 0x340;
    uintptr_t m_flDamageAccumulator                        = 0x350;
    uintptr_t m_bTakesDamage                               = 0x355;
    uintptr_t m_nTakeDamageFlags                           = 0x358;
    uintptr_t m_nPlatformType                              = 0x360;
    uintptr_t m_ubInterpolationFrame                       = 0x361;
    uintptr_t m_hSceneObjectController                     = 0x364;
    uintptr_t m_nNoInterpolationTick                       = 0x368;
    uintptr_t m_nVisibilityNoInterpolationTick             = 0x36C;
    uintptr_t m_flProxyRandomValue                         = 0x370;
    uintptr_t m_iEFlags                                    = 0x374;
    uintptr_t m_nWaterType                                 = 0x378;
    uintptr_t m_bInterpolateEvenWithNoModel                = 0x379;
    uintptr_t m_bPredictionEligible                        = 0x37A;
    uintptr_t m_bApplyLayerMatchIDToModel                  = 0x37B;
    uintptr_t m_tokLayerMatchID                            = 0x37C;
    uintptr_t m_nSimulationTick                            = 0x390;
    uintptr_t m_iCurrentThinkContext                       = 0x394;
    uintptr_t m_aThinkFunctions                            = 0x398;
    uintptr_t m_bDisabledContextThinks                     = 0x3B0;
    uintptr_t m_flAnimTime                                 = 0x3B4;
    uintptr_t m_nSceneObjectOverrideFlags                  = 0x3BC;
    uintptr_t m_bHasSuccessfullyInterpolated               = 0x3BD;
    uintptr_t m_bHasAddedVarsToInterpolation               = 0x3BE;
    uintptr_t m_bRenderEvenWhenNotSuccessfullyInterpolated = 0x3BF;
    uintptr_t m_nInterpolationLatchDirtyFlags              = 0x3C0;
    uintptr_t m_ListEntry                                  = 0x3C8;
    uintptr_t m_flCreateTime                               = 0x3E0;
    uintptr_t m_EntClientFlags                             = 0x3E4;
    uintptr_t m_bClientSideRagdoll                         = 0x3E6;
    uintptr_t m_spawnflags                                 = 0x3E8;
    uintptr_t m_nNextThinkTick                             = 0x3EC;
    uintptr_t m_vecServerVelocity                          = 0x404;
    uintptr_t m_vecVelocity                                = 0x430;
    uintptr_t m_hEffectEntity                              = 0x51C;
    uintptr_t m_MoveCollide                                = 0x524;
    uintptr_t m_MoveType                                   = 0x525;
    uintptr_t m_nActualMoveType                            = 0x526;
    uintptr_t m_flWaterLevel                               = 0x528;
    uintptr_t m_fEffects                                   = 0x52C;
    uintptr_t m_hGroundEntity                              = 0x530;
    uintptr_t m_nGroundBodyIndex                           = 0x534;
    uintptr_t m_flFriction                                 = 0x538;
    uintptr_t m_flElasticity                               = 0x53C;
    uintptr_t m_flGravityScale                             = 0x540;
    uintptr_t m_flTimeScale                                = 0x544;
    uintptr_t m_bAnimatedEveryTick                         = 0x548;
    uintptr_t m_bGravityDisabled                           = 0x549;
    uintptr_t m_flNavIgnoreUntilTime                       = 0x54C;
    uintptr_t m_hThink                                     = 0x550;
    uintptr_t m_fBBoxVisFlags                              = 0x560;
    uintptr_t m_flActualGravityScale                       = 0x564;
    uintptr_t m_bGravityActuallyDisabled                   = 0x568;
    uintptr_t m_bPredictable                               = 0x569;
    uintptr_t m_bRenderWithViewModels                      = 0x56A;
    uintptr_t m_nFirstPredictableCommand                   = 0x56C;
    uintptr_t m_nLastPredictableCommand                    = 0x570;
    uintptr_t m_hOldMoveParent                             = 0x574;
    uintptr_t m_Particles                                  = 0x578;
    uintptr_t m_vecAngVelocity                             = 0x5A8;
    uintptr_t m_DataChangeEventRef                         = 0x5B4;
    uintptr_t m_dependencies                               = 0x5B8;
    uintptr_t m_nCreationTick                              = 0x5D0;
    uintptr_t m_bAnimTimeChanged                           = 0x5E1;
    uintptr_t m_bSimulationTimeChanged                     = 0x5E2;
    uintptr_t m_sUniqueHammerID                            = 0x5F0;
    uintptr_t m_nBloodType                                 = 0x5F8;
};
```

### C_BaseModelEntity

Parent: `C_BaseEntity`

```cpp
// parent: C_BaseEntity
struct C_BaseModelEntity {
    uintptr_t m_CHitboxComponent                                             =  0xB00;
    uintptr_t m_CRenderComponent                                             =  0xAF8;
    uintptr_t m_ClientOverrideTint                                           = 0x1048;
    uintptr_t m_Collision                                                    =  0xD30;
    uintptr_t m_Glow                                                         =  0xDE8;
    uintptr_t m_bAllowFadeInView                                             =  0xC82;
    uintptr_t m_bDestructiblePartInitialStateDestructed0_GenerateBreakpieces =  0xB48;
    uintptr_t m_bDestructiblePartInitialStateDestructed1_GenerateBreakpieces =  0xB49;
    uintptr_t m_bDestructiblePartInitialStateDestructed2_GenerateBreakpieces =  0xB4A;
    uintptr_t m_bDestructiblePartInitialStateDestructed3_GenerateBreakpieces =  0xB4B;
    uintptr_t m_bDestructiblePartInitialStateDestructed4_GenerateBreakpieces =  0xB4C;
    uintptr_t m_bDoingModelEffects                                           =  0xC79;
    uintptr_t m_bExpandRenderBoundsToIncludeCloth                            =  0xD29;
    uintptr_t m_bInitModelEffects                                            =  0xC78;
    uintptr_t m_bNoInterpolate                                               =  0xD2A;
    uintptr_t m_bRenderToCubemaps                                            =  0xD28;
    uintptr_t m_bUseClientOverrideTint                                       = 0x104C;
    uintptr_t m_bodyGroupChoices                                             =  0xF38;
    uintptr_t m_bodyGroupRequests                                            =  0xE60;
    uintptr_t m_bodyGroupTotalRequestCount                                   =  0xE58;
    uintptr_t m_bvDisabledHitGroups                                          = 0x1088;
    uintptr_t m_clrRender                                                    =  0xCA0;
    uintptr_t m_fadeMaxDist                                                  =  0xE48;
    uintptr_t m_fadeMinDist                                                  =  0xE44;
    uintptr_t m_flFadeScale                                                  =  0xE4C;
    uintptr_t m_flGlowBackfaceMult                                           =  0xE40;
    uintptr_t m_flShadowStrength                                             =  0xE50;
    uintptr_t m_iOldHealth                                                   =  0xC7C;
    uintptr_t m_nDestructiblePartInitialStateDestructed0                     =  0xB20;
    uintptr_t m_nDestructiblePartInitialStateDestructed0_PartIndex           =  0xB34;
    uintptr_t m_nDestructiblePartInitialStateDestructed1                     =  0xB24;
    uintptr_t m_nDestructiblePartInitialStateDestructed1_PartIndex           =  0xB38;
    uintptr_t m_nDestructiblePartInitialStateDestructed2                     =  0xB28;
    uintptr_t m_nDestructiblePartInitialStateDestructed2_PartIndex           =  0xB3C;
    uintptr_t m_nDestructiblePartInitialStateDestructed3                     =  0xB2C;
    uintptr_t m_nDestructiblePartInitialStateDestructed3_PartIndex           =  0xB40;
    uintptr_t m_nDestructiblePartInitialStateDestructed4                     =  0xB30;
    uintptr_t m_nDestructiblePartInitialStateDestructed4_PartIndex           =  0xB44;
    uintptr_t m_nObjectCulling                                               =  0xE54;
    uintptr_t m_nRenderFX                                                    =  0xC81;
    uintptr_t m_nRenderMode                                                  =  0xC80;
    uintptr_t m_nRequiredDecalRtEncoding                                     =  0xE55;
    uintptr_t m_pChoreoComponent                                             =  0xB18;
    uintptr_t m_pClientAlphaProperty                                         = 0x1040;
    uintptr_t m_pDestructiblePartsSystemComponent                            =  0xB50;
    uintptr_t m_vecRenderAttributes                                          =  0xCA8;
    uintptr_t m_vecViewOffset                                                =  0xF60;
};
```

### CGameSceneNode

```cpp
struct CGameSceneNode {
    uintptr_t m_angAbsRotation                            =  0xD4;
    uintptr_t m_angRotation                               =  0xB8;
    uintptr_t m_angWrappedLocalRotation                   =  0xF0;
    uintptr_t m_bBoneMergeFlex                            =   0x0;
    uintptr_t m_bDebugAbsOriginChanges                    = 0x102;
    uintptr_t m_bDirtyBoneMergeBoneToRoot                 =   0x0;
    uintptr_t m_bDirtyBoneMergeInfo                       =   0x0;
    uintptr_t m_bDirtyHierarchy                           =   0x0;
    uintptr_t m_bDormant                                  = 0x103;
    uintptr_t m_bForceParentToBeNetworked                 = 0x104;
    uintptr_t m_bNetworkedAnglesChanged                   =   0x0;
    uintptr_t m_bNetworkedPositionChanged                 =   0x0;
    uintptr_t m_bNetworkedScaleChanged                    =   0x0;
    uintptr_t m_bWillBeCallingPostDataUpdate              =   0x0;
    uintptr_t m_flAbsScale                                =  0xE0;
    uintptr_t m_flClientLocalScale                        = 0x124;
    uintptr_t m_flScale                                   =  0xC4;
    uintptr_t m_flWrappedScale                            =  0xFC;
    uintptr_t m_hParent                                   =  0x70;
    uintptr_t m_hierarchyAttachName                       = 0x120;
    uintptr_t m_nDoNotSetAnimTimeInInvalidatePhysicsCount = 0x109;
    uintptr_t m_nHierarchicalDepth                        = 0x107;
    uintptr_t m_nHierarchyType                            = 0x108;
    uintptr_t m_nLatchAbsOrigin                           =   0x0;
    uintptr_t m_nParentAttachmentOrBone                   = 0x100;
    uintptr_t m_name                                      = 0x10C;
    uintptr_t m_nodeToWorld                               =  0x10;
    uintptr_t m_pChild                                    =  0x40;
    uintptr_t m_pNextSibling                              =  0x48;
    uintptr_t m_pOwner                                    =  0x30;
    uintptr_t m_pParent                                   =  0x38;
    uintptr_t m_vecAbsOrigin                              =  0xC8;
    uintptr_t m_vecOrigin                                 =  0x80;
    uintptr_t m_vecWrappedLocalOrigin                     =  0xE4;
};
```

### CSkeletonInstance

Parent: `CGameSceneNode`

```cpp
// parent: CGameSceneNode
struct CSkeletonInstance {
    uintptr_t m_bDirtyMotionType                     = 0x3F2;
    uintptr_t m_bDisableSolidCollisionsForHierarchy  = 0x3F1;
    uintptr_t m_bIsGeneratingLatchedParentSpaceState = 0x3F3;
    uintptr_t m_bUseParentRenderBounds               = 0x3F0;
    uintptr_t m_materialGroup                        = 0x3F8;
    uintptr_t m_modelState                           = 0x140;
    uintptr_t m_nHitboxSet                           = 0x3FC;
};
```

### C_BasePlayerPawn

Parent: `CBaseAnimGraph`

```cpp
// parent: CBaseAnimGraph
struct C_BasePlayerPawn {
    uintptr_t m_ServerViewAngleChanges             = 0x1340;
    uintptr_t m_bIsSwappingToPredictableController = 0x14C4;
    uintptr_t m_flDeathTime                        = 0x1458;
    uintptr_t m_flFOVSensitivityAdjust             = 0x149C;
    uintptr_t m_flLastCameraSetupTime              = 0x1498;
    uintptr_t m_flMouseSensitivity                 = 0x14A0;
    uintptr_t m_flOldSimulationTime                = 0x14B0;
    uintptr_t m_flPredictionErrorTime              = 0x146C;
    uintptr_t m_hController                        = 0x14BC;
    uintptr_t m_hDefaultController                 = 0x14C0;
    uintptr_t m_iHideHUD                           = 0x13C0;
    uintptr_t m_nLastExecutedCommandNumber         = 0x14B4;
    uintptr_t m_nLastExecutedCommandTick           = 0x14B8;
    uintptr_t m_pAutoaimServices                   = 0x1300;
    uintptr_t m_pCameraServices                    = 0x1328;
    uintptr_t m_pFlashlightServices                = 0x1320;
    uintptr_t m_pItemServices                      = 0x12F8;
    uintptr_t m_pMovementServices                  = 0x1330;
    uintptr_t m_pObserverServices                  = 0x1308;
    uintptr_t m_pUseServices                       = 0x1318;
    uintptr_t m_pWaterServices                     = 0x1310;
    uintptr_t m_pWeaponServices                    = 0x12F0;
    uintptr_t m_skybox3d                           = 0x13C8;
    uintptr_t m_vOldOrigin                         = 0x14A4;
    uintptr_t m_vecLastCameraSetupLocalOrigin      = 0x148C;
    uintptr_t m_vecPredictionError                 = 0x1460;
    uintptr_t v_angle                              = 0x13A8;
    uintptr_t v_anglePrevious                      = 0x13B4;
};
```

### C_CSPlayerPawnBase

Parent: `C_BasePlayerPawn`

```cpp
// parent: C_BasePlayerPawn
struct C_CSPlayerPawnBase {
    uintptr_t m_bDeferStartMusicOnWarmup          = 0x152C;
    uintptr_t m_bFlashBuildUp                     = 0x1508;
    uintptr_t m_bFlashDspHasBeenCleared           = 0x1509;
    uintptr_t m_bFlashScreenshotHasBeenGrabbed    = 0x150A;
    uintptr_t m_bHasMovedSinceSpawn               = 0x14E8;
    uintptr_t m_fNextThinkPushAway                = 0x151C;
    uintptr_t m_flClientDeathTime                 = 0x14F8;
    uintptr_t m_flClientHealthFadeChangeTimestamp = 0x1514;
    uintptr_t m_flCurrentMusicStartTime           = 0x1524;
    uintptr_t m_flFlashBangTime                   = 0x14FC;
    uintptr_t m_flFlashDuration                   = 0x1510;
    uintptr_t m_flFlashMaxAlpha                   = 0x150C;
    uintptr_t m_flFlashOverlayAlpha               = 0x1504;
    uintptr_t m_flFlashScreenshotAlpha            = 0x1500;
    uintptr_t m_flLastSmokeAge                    = 0x1534;
    uintptr_t m_flLastSmokeOverlayAlpha           = 0x1530;
    uintptr_t m_flLastSpawnTimeIndex              = 0x14EC;
    uintptr_t m_flMusicRoundStartTime             = 0x1528;
    uintptr_t m_flProgressBarStartTime            = 0x14F4;
    uintptr_t m_hOriginalController               = 0x1560;
    uintptr_t m_iPlayerState                      = 0x14E4;
    uintptr_t m_iProgressBarDuration              = 0x14F0;
    uintptr_t m_nClientHealthFadeParityValue      = 0x1518;
    uintptr_t m_pPingServices                     = 0x14D8;
    uintptr_t m_previousPlayerState               = 0x14E0;
    uintptr_t m_vLastSmokeOverlayColor            = 0x1538;
};
```

### C_CSPlayerPawn

Parent: `C_CSPlayerPawnBase`

```cpp
// parent: C_CSPlayerPawnBase
struct C_CSPlayerPawn {
    uintptr_t m_ArmorValue                       = 0x1F00;
    uintptr_t m_angEyeAngles                     = 0x3630;
    uintptr_t m_bIsScoped                        = 0x1ED0;
    uintptr_t m_bIsDefusing                      = 0x1ED2;
    uintptr_t m_bIsGrabbingHostage               = 0x1ED3;
    uintptr_t m_bGunGameImmunity                 = 0x3538;
    uintptr_t m_iShotsFired                      = 0x1EE8;
    uintptr_t m_entitySpottedState               = 0x1EB8;
    uintptr_t m_bWaitForNoAttack                 = 0x1EF4;
    uintptr_t m_iIDEntIndex                      = 0x370C;
    uintptr_t m_pBulletServices                  = 0x1570;
    uintptr_t m_pHostageServices                 = 0x1578;
    uintptr_t m_pBuyServices                     = 0x1580;
    uintptr_t m_pGlowServices                    = 0x1588;
    uintptr_t m_pActionTrackingServices          = 0x1590;
    uintptr_t m_pAimPunchServices                = 0x1598;
    uintptr_t m_pDamageReactServices             = 0x15A0;
    uintptr_t m_flHealthShotBoostExpirationTime  = 0x15A8;
    uintptr_t m_flLastFiredWeaponTime            = 0x15AC;
    uintptr_t m_bHasFemaleVoice                  = 0x15B0;
    uintptr_t m_flLandingTimeSeconds             = 0x15B4;
    uintptr_t m_flOldFallVelocity                = 0x15B8;
    uintptr_t m_szLastPlaceName                  = 0x15BC;
    uintptr_t m_bPrevDefuser                     = 0x15CE;
    uintptr_t m_bPrevHelmet                      = 0x15CF;
    uintptr_t m_nPrevArmorVal                    = 0x15D0;
    uintptr_t m_nPrevGrenadeAmmoCount            = 0x15D4;
    uintptr_t m_unPreviousWeaponHash             = 0x15D8;
    uintptr_t m_unWeaponHash                     = 0x15DC;
    uintptr_t m_bInBuyZone                       = 0x15E0;
    uintptr_t m_bPreviouslyInBuyZone             = 0x15E1;
    uintptr_t m_bInLanding                       = 0x15E2;
    uintptr_t m_flLandingStartTime               = 0x15E4;
    uintptr_t m_bInHostageRescueZone             = 0x15E8;
    uintptr_t m_bInBombZone                      = 0x15E9;
    uintptr_t m_bIsBuyMenuOpen                   = 0x15EA;
    uintptr_t m_flTimeOfLastInjury               = 0x15EC;
    uintptr_t m_flNextSprayDecalTime             = 0x15F0;
    uintptr_t m_iRetakesOffering                 = 0x1788;
    uintptr_t m_iRetakesOfferingCard             = 0x178C;
    uintptr_t m_bRetakesHasDefuseKit             = 0x1790;
    uintptr_t m_bRetakesMVPLastRound             = 0x1791;
    uintptr_t m_iRetakesMVPBoostItem             = 0x1794;
    uintptr_t m_RetakesMVPBoostExtraUtility      = 0x1798;
    uintptr_t m_bNeedToReApplyGloves             = 0x179D;
    uintptr_t m_EconGloves                       = 0x17A0;
    uintptr_t m_nEconGlovesChanged               = 0x1D50;
    uintptr_t m_bMustSyncRagdollState            = 0x1D51;
    uintptr_t m_nRagdollDamageBone               = 0x1D54;
    uintptr_t m_vRagdollDamageForce              = 0x1D58;
    uintptr_t m_szRagdollDamageWeaponName        = 0x1D64;
    uintptr_t m_bRagdollDamageHeadshot           = 0x1DA4;
    uintptr_t m_vRagdollServerOrigin             = 0x1DA8;
    uintptr_t m_lastLandTime                     = 0x1DB4;
    uintptr_t m_bOnGroundLastTick                = 0x1DB8;
    uintptr_t m_hHudModelArms                    = 0x1DD8;
    uintptr_t m_qDeathEyeAngles                  = 0x1DDC;
    uintptr_t m_bLeftHanded                      = 0x1DE8;
    uintptr_t m_fSwitchedHandednessTime          = 0x1DEC;
    uintptr_t m_flViewmodelOffsetX               = 0x1DF0;
    uintptr_t m_flViewmodelOffsetY               = 0x1DF4;
    uintptr_t m_flViewmodelOffsetZ               = 0x1DF8;
    uintptr_t m_flViewmodelFOV                   = 0x1DFC;
    uintptr_t m_vecPlayerPatchEconIndices        = 0x1E00;
    uintptr_t m_GunGameImmunityColor             = 0x1E48;
    uintptr_t m_vecBulletHitModels               = 0x1E98;
    uintptr_t m_bIsWalking                       = 0x1EB0;
    uintptr_t m_bResumeZoom                      = 0x1ED1;
    uintptr_t m_iBlockingUseActionInProgress     = 0x1ED4;
    uintptr_t m_flEmitSoundTime                  = 0x1ED8;
    uintptr_t m_flEmitSoundTime_Client           = 0x1EDC;
    uintptr_t m_bInNoDefuseArea                  = 0x1EE0;
    uintptr_t m_nWhichBombZone                   = 0x1EE4;
    uintptr_t m_flFlinchStack                    = 0x1EEC;
    uintptr_t m_flVelocityModifier               = 0x1EF0;
    uintptr_t m_ignoreLadderJumpTime             = 0x1EF8;
    uintptr_t m_bKilledByHeadshot                = 0x1EFD;
    uintptr_t m_unCurrentEquipmentValue          = 0x1F04;
    uintptr_t m_unRoundStartEquipmentValue       = 0x1F06;
    uintptr_t m_unFreezetimeEndEquipmentValue    = 0x1F08;
    uintptr_t m_nLastKillerIndex                 = 0x1F0C;
    uintptr_t m_bOldIsScoped                     = 0x1F10;
    uintptr_t m_bHasDeathInfo                    = 0x1F11;
    uintptr_t m_flDeathInfoTime                  = 0x1F14;
    uintptr_t m_vecDeathInfoOrigin               = 0x1F18;
    uintptr_t m_grenadeParameterStashTime        = 0x1F50;
    uintptr_t m_bGrenadeParametersStashed        = 0x1F54;
    uintptr_t m_angStashedShootAngles            = 0x1F58;
    uintptr_t m_vecStashedGrenadeThrowPosition   = 0x1F64;
    uintptr_t m_vecStashedGrenadeThrowPawnCenter = 0x1F70;
    uintptr_t m_vecStashedVelocity               = 0x1F7C;
    uintptr_t m_flInterpolatedInaccuracy         = 0x1F88;
    uintptr_t m_bShouldAutobuyDMWeapons          = 0x3530;
    uintptr_t m_fImmuneToGunGameDamageTime       = 0x3534;
    uintptr_t m_fImmuneToGunGameDamageTimeLast   = 0x353C;
    uintptr_t m_flBigHeadScale                   = 0x3540;
    uintptr_t m_fMolotovDamageTime               = 0x3544;
    uintptr_t m_nPlayerInfernoBodyFx             = 0x35B8;
    uintptr_t m_arrOldEyeAnglesTimes             = 0x36C0;
    uintptr_t m_arrOldEyeAngles                  = 0x36D0;
    uintptr_t m_angEyeAnglesVelocity             = 0x3700;
    uintptr_t m_delayTargetIDTimer               = 0x3710;
    uintptr_t m_iTargetItemEntIdx                = 0x3728;
    uintptr_t m_iOldIDEntIndex                   = 0x372C;
    uintptr_t m_holdTargetIDTimer                = 0x3730;
};
```

### CCSPlayerController

Parent: `CBasePlayerController`

```cpp
// parent: CBasePlayerController
struct CCSPlayerController {
    uintptr_t m_hPlayerPawn                         = 0x92C;
    uintptr_t m_hObserverPawn                       = 0x930;
    uintptr_t m_sSanitizedPlayerName                = 0x878;
    uintptr_t m_iPawnHealth                         = 0x938;
    uintptr_t m_iPawnArmor                          = 0x93C;
    uintptr_t m_bPawnIsAlive                        = 0x934;
    uintptr_t m_bPawnHasDefuser                     = 0x940;
    uintptr_t m_bPawnHasHelmet                      = 0x941;
    uintptr_t m_iPing                               = 0x838;
    uintptr_t m_iCompetitiveRanking                 = 0x8A0;
    uintptr_t m_iCompetitiveWins                    = 0x8A4;
    uintptr_t m_bControllingBot                     = 0x920;
    uintptr_t m_pInGameMoneyServices                = 0x818;
    uintptr_t m_pActionTrackingServices             = 0x828;
    uintptr_t m_pInventoryServices                  = 0x820;
    uintptr_t m_pDamageServices                     = 0x830;
    uintptr_t m_bHasCommunicationAbuseMute          = 0x83C;
    uintptr_t m_uiCommunicationMuteFlags            = 0x840;
    uintptr_t m_szCrosshairCodes                    = 0x848;
    uintptr_t m_iPendingTeamNum                     = 0x850;
    uintptr_t m_flForceTeamTime                     = 0x854;
    uintptr_t m_iCompTeammateColor                  = 0x858;
    uintptr_t m_bEverPlayedOnTeam                   = 0x85C;
    uintptr_t m_flPreviousForceJoinTeamTime         = 0x860;
    uintptr_t m_szClan                              = 0x868;
    uintptr_t m_unClanId32bit                       = 0x870;
    uintptr_t m_sSanitizedClanTag                   = 0x880;
    uintptr_t m_iCoachingTeam                       = 0x888;
    uintptr_t m_nPlayerDominated                    = 0x890;
    uintptr_t m_nPlayerDominatingMe                 = 0x898;
    uintptr_t m_iCompetitiveRankType                = 0x8A8;
    uintptr_t m_iCompetitiveRankingPredicted_Win    = 0x8AC;
    uintptr_t m_iCompetitiveRankingPredicted_Loss   = 0x8B0;
    uintptr_t m_iCompetitiveRankingPredicted_Tie    = 0x8B4;
    uintptr_t m_nEndMatchNextMapVote                = 0x8B8;
    uintptr_t m_unActiveQuestId                     = 0x8BC;
    uintptr_t m_rtActiveMissionPeriod               = 0x8C0;
    uintptr_t m_nQuestProgressReason                = 0x8C4;
    uintptr_t m_unPlayerTvControlFlags              = 0x8C8;
    uintptr_t m_iDraftIndex                         = 0x8F8;
    uintptr_t m_msQueuedModeDisconnectionTimestamp  = 0x8FC;
    uintptr_t m_uiAbandonRecordedReason             = 0x900;
    uintptr_t m_eNetworkDisconnectionReason         = 0x904;
    uintptr_t m_bCannotBeKicked                     = 0x908;
    uintptr_t m_bEverFullyConnected                 = 0x909;
    uintptr_t m_bAbandonAllowsSurrender             = 0x90A;
    uintptr_t m_bAbandonOffersInstantSurrender      = 0x90B;
    uintptr_t m_bDisconnection1MinWarningPrinted    = 0x90C;
    uintptr_t m_bScoreReported                      = 0x90D;
    uintptr_t m_nDisconnectionTick                  = 0x910;
    uintptr_t m_bHasControlledBotThisRound          = 0x921;
    uintptr_t m_bHasBeenControlledByPlayerThisRound = 0x922;
    uintptr_t m_nBotsControlledThisRound            = 0x924;
    uintptr_t m_bCanControlObservedBot              = 0x928;
    uintptr_t m_nPawnCharacterDefIndex              = 0x942;
    uintptr_t m_iPawnLifetimeStart                  = 0x944;
    uintptr_t m_iPawnLifetimeEnd                    = 0x948;
    uintptr_t m_iPawnBotDifficulty                  = 0x94C;
    uintptr_t m_hOriginalControllerOfCurrentPawn    = 0x950;
    uintptr_t m_iScore                              = 0x954;
    uintptr_t m_recentKillQueue                     = 0x958;
    uintptr_t m_nFirstKill                          = 0x960;
    uintptr_t m_nKillCount                          = 0x961;
    uintptr_t m_bMvpNoMusic                         = 0x962;
    uintptr_t m_eMvpReason                          = 0x964;
    uintptr_t m_iMusicKitID                         = 0x968;
    uintptr_t m_iMusicKitMVPs                       = 0x96C;
    uintptr_t m_iMVPs                               = 0x970;
    uintptr_t m_bIsPlayerNameDirty                  = 0x974;
    uintptr_t m_bFireBulletsSeedSynchronized        = 0x97C;
};
```

### CBasePlayerController

Parent: `C_BaseEntity`

```cpp
// parent: C_BaseEntity
struct CBasePlayerController {
    uintptr_t m_CommandContext            = 0x608;
    uintptr_t m_bIsHLTV                   = 0x6F0;
    uintptr_t m_bIsLocalPlayerController  = 0x790;
    uintptr_t m_bKnownTeamMismatch        = 0x6C0;
    uintptr_t m_bNoClipEnabled            = 0x791;
    uintptr_t m_hPawn                     = 0x6BC;
    uintptr_t m_hPredictedPawn            = 0x6C4;
    uintptr_t m_hSplitOwner               = 0x6D0;
    uintptr_t m_hSplitScreenPlayers       = 0x6D8;
    uintptr_t m_iConnected                = 0x6F4;
    uintptr_t m_iDesiredFOV               = 0x794;
    uintptr_t m_iMostConnected            = 0x6F8;
    uintptr_t m_iszPlayerName             = 0x6FC;
    uintptr_t m_nInButtonsWhichAreToggles = 0x6B0;
    uintptr_t m_nSplitScreenSlot          = 0x6CC;
    uintptr_t m_nTickBase                 = 0x6B8;
    uintptr_t m_steamID                   = 0x788;
};
```

### CPlayer_WeaponServices

```cpp
struct CPlayer_WeaponServices {
    uintptr_t m_hActiveWeapon = 0x60;
    uintptr_t m_hLastWeapon   = 0x64;
    uintptr_t m_hMyWeapons    = 0x48;
    uintptr_t m_iAmmo         = 0x68;
};
```

### CPlayer_ObserverServices

```cpp
struct CPlayer_ObserverServices {
    uintptr_t m_bForcedObserverMode             = 0x54;
    uintptr_t m_flObserverChaseDistance         = 0x58;
    uintptr_t m_flObserverChaseDistanceCalcTime = 0x5C;
    uintptr_t m_hObserverTarget                 = 0x4C;
    uintptr_t m_iObserverLastMode               = 0x50;
    uintptr_t m_iObserverMode                   = 0x48;
};
```

### CPlayer_CameraServices

Parent: `CPlayerPawnComponent`

```cpp
// parent: CPlayerPawnComponent
struct CPlayer_CameraServices {
    uintptr_t m_CurrentFog                  = 0x148;
    uintptr_t m_OverrideFogColor            = 0x1BC;
    uintptr_t m_PlayerFog                   =  0x60;
    uintptr_t m_PostProcessingVolumes       = 0x128;
    uintptr_t m_angDemoViewAngles           = 0x208;
    uintptr_t m_audio                       =  0xB0;
    uintptr_t m_bOverrideFogColor           = 0x1B4;
    uintptr_t m_bOverrideFogStartEnd        = 0x1D0;
    uintptr_t m_fOverrideFogEnd             = 0x1EC;
    uintptr_t m_fOverrideFogStart           = 0x1D8;
    uintptr_t m_flCsViewPunchAngleTickRatio =  0x58;
    uintptr_t m_flOldPlayerViewOffsetZ      = 0x144;
    uintptr_t m_flOldPlayerZ                = 0x140;
    uintptr_t m_hActivePostProcessingVolume = 0x200;
    uintptr_t m_hColorCorrectionCtrl        =  0xA0;
    uintptr_t m_hOldFogController           = 0x1B0;
    uintptr_t m_hTonemapController          =  0xA8;
    uintptr_t m_hViewEntity                 =  0xA4;
    uintptr_t m_nCsViewPunchAngleTick       =  0x54;
    uintptr_t m_vecCsViewPunchAngle         =  0x48;
};
```

### CCSPlayerController_InGameMoneyServices

```cpp
struct CCSPlayerController_InGameMoneyServices {
    uintptr_t m_iAccount            = 0x40;
    uintptr_t m_iCashSpentThisRound = 0x4C;
    uintptr_t m_iStartAccount       = 0x44;
    uintptr_t m_iTotalCashSpent     = 0x48;
};
```

### CCSPlayerController_ActionTrackingServices

```cpp
struct CCSPlayerController_ActionTrackingServices {
    uintptr_t m_flTotalRoundDamageDealt = 0x130;
    uintptr_t m_iNumRoundKills          = 0x128;
    uintptr_t m_iNumRoundKillsHeadshots = 0x12C;
    uintptr_t m_matchStats              =  0xA8;
    uintptr_t m_perRoundStats           =  0x40;
};
```

### EntitySpottedState_t

```cpp
struct EntitySpottedState_t {
    uintptr_t m_bSpotted       = 0x8;
    uintptr_t m_bSpottedByMask = 0xC;
};
```

### C_CSWeaponBase

Parent: `C_BasePlayerWeapon`

```cpp
// parent: C_BasePlayerWeapon
struct C_CSWeaponBase {
    uintptr_t m_IronSightController                  = 0x1C10;
    uintptr_t m_OnPlayerPickup                       = 0x1A28;
    uintptr_t m_bBurstMode                           = 0x1A6C;
    uintptr_t m_bCanBePickedUp                       = 0x1B70;
    uintptr_t m_bClearWeaponIdentifyingUGC           = 0x1B60;
    uintptr_t m_bDroppedNearBuyZone                  = 0x1AB0;
    uintptr_t m_bFireOnEmpty                         = 0x1A24;
    uintptr_t m_bInReload                            = 0x1A7C;
    uintptr_t m_bInSilentReloadSection               = 0x1A99;
    uintptr_t m_bInspectPending                      = 0x19F4;
    uintptr_t m_bInspectShouldLoop                   = 0x19F5;
    uintptr_t m_bIsHauledBack                        = 0x1A90;
    uintptr_t m_bIsInStealthReload                   = 0x1A98;
    uintptr_t m_bReloadHeldSinceStart                = 0x1AA0;
    uintptr_t m_bSilencerOn                          = 0x1A91;
    uintptr_t m_bUIWeapon                            = 0x1B62;
    uintptr_t m_bVisualsDataSet                      = 0x1B61;
    uintptr_t m_bWasActiveWeaponWhenDropped          = 0x1B80;
    uintptr_t m_bWasOwnedByCT                        = 0x1BAC;
    uintptr_t m_bWasOwnedByTerrorist                 = 0x1BAD;
    uintptr_t m_donated                              = 0x1BA4;
    uintptr_t m_fAccuracyPenalty                     = 0x1A58;
    uintptr_t m_fAccuracySmoothedForZoom             = 0x1A60;
    uintptr_t m_fLastShotTime                        = 0x1BA8;
    uintptr_t m_flAttackHoldStartTime                = 0x1A84;
    uintptr_t m_flDroppedAtTime                      = 0x1A88;
    uintptr_t m_flInspectCancelCompleteTime          = 0x19F0;
    uintptr_t m_flLastAccuracyUpdateTime             = 0x1A5C;
    uintptr_t m_flLastBurstModeChangeTime            = 0x1A70;
    uintptr_t m_flLastLOSTraceFailureTime            = 0x1D38;
    uintptr_t m_flLastShakeTime                      = 0x1DAC;
    uintptr_t m_flNextAttackRenderTimeOffset         = 0x1AB4;
    uintptr_t m_flNextClientFireBulletTime           = 0x1BB0;
    uintptr_t m_flNextClientFireBulletTime_Repredict = 0x1BB4;
    uintptr_t m_flPostponeFireReadyFrac              = 0x1A78;
    uintptr_t m_flRecoilIndex                        = 0x1A68;
    uintptr_t m_flStealthReloadHoldStartTime         = 0x1A9C;
    uintptr_t m_flTimeSilencerSwitchComplete         = 0x1A94;
    uintptr_t m_flTurningInaccuracy                  = 0x1A54;
    uintptr_t m_flTurningInaccuracyDelta             = 0x1A44;
    uintptr_t m_flWatTickOffset                      = 0x1D98;
    uintptr_t m_flWeaponActionPlaybackRate           = 0x1AA4;
    uintptr_t m_flWeaponGameplayAnimStateTimestamp   = 0x19EC;
    uintptr_t m_hPrevOwner                           = 0x1B78;
    uintptr_t m_iIronSightMode                       = 0x1CC0;
    uintptr_t m_iMostRecentTeamNumber                = 0x1AAC;
    uintptr_t m_iOriginalTeamNumber                  = 0x1AA8;
    uintptr_t m_iRecoilIndex                         = 0x1A64;
    uintptr_t m_iWeaponGameplayAnimState             = 0x19E8;
    uintptr_t m_nCustomEconReloadEventId             = 0x1B64;
    uintptr_t m_nDeployTick                          = 0x1A80;
    uintptr_t m_nDropTick                            = 0x1B7C;
    uintptr_t m_nLastEmptySoundCmdNum                = 0x1A20;
    uintptr_t m_nPostponeFireReadyTicks              = 0x1A74;
    uintptr_t m_nextPrevOwnerUseTime                 = 0x1B74;
    uintptr_t m_vecTurningInaccuracyEyeDirLast       = 0x1A48;
    uintptr_t m_weaponMode                           = 0x1A40;
};
```

### C_CSWeaponBaseGun

```cpp
struct C_CSWeaponBaseGun {
    uintptr_t m_bNeedsBoltAction     = 0x1F7D;
    uintptr_t m_iBurstShotsRemaining = 0x1F64;
    uintptr_t m_iSilencerBodygroup   = 0x1F68;
    uintptr_t m_inPrecache           = 0x1F7C;
    uintptr_t m_nRevolverCylinderIdx = 0x1F80;
    uintptr_t m_silencedModelIndex   = 0x1F78;
    uintptr_t m_zoomLevel            = 0x1F60;
};
```

### C_AttributeContainer

```cpp
struct C_AttributeContainer {
    uintptr_t m_Item                                 =  0x50;
    uintptr_t m_iExternalItemProviderRegisteredToken = 0x600;
    uintptr_t m_ullRegisteredAsItemID                = 0x608;
};
```

### C_EconItemView

```cpp
struct C_EconItemView {
    uintptr_t m_AttributeList                       = 0x208;
    uintptr_t m_NetworkedDynamicAttributes          = 0x280;
    uintptr_t m_bDisallowSOC                        = 0x1E9;
    uintptr_t m_bInitialized                        = 0x1E8;
    uintptr_t m_bInitializedTags                    = 0x5A8;
    uintptr_t m_bInventoryImageRgbaRequested        =  0x60;
    uintptr_t m_bInventoryImageTriedCache           =  0x61;
    uintptr_t m_bIsStoreItem                        = 0x1EA;
    uintptr_t m_bIsTradeItem                        = 0x1EB;
    uintptr_t m_bRestoreCustomMaterialAfterPrecache = 0x1B8;
    uintptr_t m_iAccountID                          = 0x1D8;
    uintptr_t m_iEntityLevel                        = 0x1C0;
    uintptr_t m_iEntityQuality                      = 0x1BC;
    uintptr_t m_iEntityQuantity                     = 0x1EC;
    uintptr_t m_iInventoryPosition                  = 0x1DC;
    uintptr_t m_iItemDefinitionIndex                = 0x1BA;
    uintptr_t m_iItemID                             = 0x1C8;
    uintptr_t m_iItemIDHigh                         = 0x1D0;
    uintptr_t m_iItemIDLow                          = 0x1D4;
    uintptr_t m_iOriginOverride                     = 0x1F8;
    uintptr_t m_iQualityOverride                    = 0x1F4;
    uintptr_t m_iRarityOverride                     = 0x1F0;
    uintptr_t m_nInventoryImageRgbaHeight           =  0x84;
    uintptr_t m_nInventoryImageRgbaWidth            =  0x80;
    uintptr_t m_szCurrentLoadCachedFileName         =  0x88;
    uintptr_t m_szCustomName                        = 0x2F8;
    uintptr_t m_szCustomNameOverride                = 0x399;
    uintptr_t m_szCustomNameOverride2               = 0x43A;
    uintptr_t m_szCustomNameOverride3               = 0x4DB;
    uintptr_t m_ubStyleOverride                     = 0x1FC;
    uintptr_t m_unClientFlags                       = 0x1FD;
};
```

### C_PlantedC4

```cpp
struct C_PlantedC4 {
    uintptr_t m_AttributeManager            = 0x12E8;
    uintptr_t m_bBeingDefused               = 0x12C4;
    uintptr_t m_bBombDefused                = 0x12DC;
    uintptr_t m_bBombTicking                = 0x1288;
    uintptr_t m_bC4Activated                = 0x12D0;
    uintptr_t m_bCannotBeDefused            = 0x12BC;
    uintptr_t m_bExplodeWarning             = 0x12CC;
    uintptr_t m_bHasExploded                = 0x12BD;
    uintptr_t m_bRadarFlash                 = 0x1900;
    uintptr_t m_bTenSecWarning              = 0x12D1;
    uintptr_t m_bTriggerWarning             = 0x12C8;
    uintptr_t m_entitySpottedState          = 0x1298;
    uintptr_t m_fLastDefuseTime             = 0x1908;
    uintptr_t m_flC4Blow                    = 0x12B8;
    uintptr_t m_flC4ExplodeSpectateDuration = 0x1930;
    uintptr_t m_flDefuseCountDown           = 0x12D8;
    uintptr_t m_flDefuseLength              = 0x12D4;
    uintptr_t m_flNextBeep                  = 0x12B4;
    uintptr_t m_flNextGlow                  = 0x12B0;
    uintptr_t m_flNextRadarFlashTime        = 0x18FC;
    uintptr_t m_flTimerLength               = 0x12C0;
    uintptr_t m_hBombDefuser                = 0x12E0;
    uintptr_t m_hDefuserMultimeter          = 0x18F8;
    uintptr_t m_nBombSite                   = 0x128C;
    uintptr_t m_nSourceSoundscapeHash       = 0x1290;
    uintptr_t m_pBombDefuser                = 0x1904;
    uintptr_t m_pPredictionOwner            = 0x1910;
    uintptr_t m_vecC4ExplodeSpectateAng     = 0x1924;
    uintptr_t m_vecC4ExplodeSpectatePos     = 0x1918;
};
```

### C_BaseGrenade

Parent: `CBaseAnimGraph`

```cpp
// parent: CBaseAnimGraph
struct C_BaseGrenade {
    uintptr_t m_DmgRadius        = 0x126C;
    uintptr_t m_ExplosionSound   = 0x1288;
    uintptr_t m_bHasWarnedAI     = 0x1268;
    uintptr_t m_bIsLive          = 0x126A;
    uintptr_t m_bIsSmokeGrenade  = 0x1269;
    uintptr_t m_flDamage         = 0x1278;
    uintptr_t m_flDetonateTime   = 0x1270;
    uintptr_t m_flNextAttack     = 0x12A8;
    uintptr_t m_flWarnAITime     = 0x1274;
    uintptr_t m_hOriginalThrower = 0x12AC;
    uintptr_t m_hThrower         = 0x1290;
    uintptr_t m_iszBounceSound   = 0x1280;
};
```

### C_SmokeGrenadeProjectile

```cpp
struct C_SmokeGrenadeProjectile {
    uintptr_t m_VoxelFrameData           = 0x1388;
    uintptr_t m_bDidSmokeEffect          = 0x1364;
    uintptr_t m_bSmokeEffectSpawned      = 0x13AA;
    uintptr_t m_bSmokeVolumeDataReceived = 0x13A9;
    uintptr_t m_nRandomSeed              = 0x1368;
    uintptr_t m_nSmokeEffectTickBegin    = 0x1360;
    uintptr_t m_nSmokeLightProbeRegen    = 0x13A8;
    uintptr_t m_nVoxelFrameDataSize      = 0x13A0;
    uintptr_t m_nVoxelUpdate             = 0x13A4;
    uintptr_t m_vSmokeColor              = 0x136C;
    uintptr_t m_vSmokeDetonationPos      = 0x1378;
};
```

### C_Inferno

```cpp
struct C_Inferno {
    uintptr_t m_BurnNormal                            = 0x1748;
    uintptr_t m_bFireIsBurning                        = 0x1708;
    uintptr_t m_bInPostEffectTime                     = 0x1A54;
    uintptr_t m_blosCheck                             = 0x8664;
    uintptr_t m_drawableCount                         = 0x8660;
    uintptr_t m_fireCount                             = 0x1A48;
    uintptr_t m_fireParentPositions                   = 0x1408;
    uintptr_t m_firePositions                         = 0x1108;
    uintptr_t m_flLastGrassBurnThink                  = 0x868C;
    uintptr_t m_hInfernoClimbingOutlinePointsSnapshot = 0x10F8;
    uintptr_t m_hInfernoDecalsSnapshot                = 0x1100;
    uintptr_t m_hInfernoFillerPointsSnapshot          = 0x10E8;
    uintptr_t m_hInfernoOutlinePointsSnapshot         = 0x10F0;
    uintptr_t m_hInfernoPointsSnapshot                = 0x10E0;
    uintptr_t m_lastFireCount                         = 0x1A58;
    uintptr_t m_maxBounds                             = 0x8680;
    uintptr_t m_maxFireHalfWidth                      = 0x866C;
    uintptr_t m_maxFireHeight                         = 0x8670;
    uintptr_t m_minBounds                             = 0x8674;
    uintptr_t m_nFireEffectTickBegin                  = 0x1A5C;
    uintptr_t m_nFireLifetime                         = 0x1A50;
    uintptr_t m_nInfernoType                          = 0x1A4C;
    uintptr_t m_nfxFireDamageEffect                   = 0x10D8;
    uintptr_t m_nlosperiod                            = 0x8668;
};
```

### C_BaseCSGrenade

```cpp
struct C_BaseCSGrenade {
    uintptr_t m_bClientPredictDelete      = 0x1F60;
    uintptr_t m_bIsHeldByPlayer           = 0x1F62;
    uintptr_t m_bJumpThrow                = 0x1F64;
    uintptr_t m_bJustPulledPin            = 0x1FF0;
    uintptr_t m_bPinPulled                = 0x1F63;
    uintptr_t m_bRedraw                   = 0x1F61;
    uintptr_t m_bThrowAnimating           = 0x1F65;
    uintptr_t m_fDropTime                 = 0x1FE8;
    uintptr_t m_fPinPullTime              = 0x1FEC;
    uintptr_t m_fThrowTime                = 0x1F68;
    uintptr_t m_flNextHoldFrac            = 0x1FF8;
    uintptr_t m_flThrowStrength           = 0x1F70;
    uintptr_t m_hSwitchToWeaponAfterThrow = 0x1FFC;
    uintptr_t m_nNextHoldTick             = 0x1FF4;
};
```

### C_Team

Parent: `C_BaseEntity`

```cpp
// parent: C_BaseEntity
struct C_Team {
    uintptr_t m_aPlayerControllers = 0x600;
    uintptr_t m_aPlayers           = 0x618;
    uintptr_t m_iScore             = 0x630;
    uintptr_t m_szTeamname         = 0x634;
};
```

### C_CSGameRules

```cpp
struct C_CSGameRules {
    uintptr_t m_MatchDevice                       =   0xAC;
    uintptr_t m_MinimapVerticalSectionHeights     =  0xC3C;
    uintptr_t m_RetakeRules                       =  0xDA8;
    uintptr_t m_TeamRespawnWaveTimes              =  0xB20;
    uintptr_t m_arrProhibitedItemIndices          =  0x8C8;
    uintptr_t m_arrTournamentActiveCasterAccounts =  0x990;
    uintptr_t m_bAnyHostageReached                =   0x98;
    uintptr_t m_bBombDropped                      =  0x9A8;
    uintptr_t m_bBombPlanted                      =  0x8C7;
    uintptr_t m_bCTCantBuy                        =  0x9B5;
    uintptr_t m_bCTTimeOutActive                  =   0x4D;
    uintptr_t m_bFreezePeriod                     =   0x40;
    uintptr_t m_bGameRestart                      =   0x78;
    uintptr_t m_bHasMatchStarted                  =   0xB0;
    uintptr_t m_bHasTriggeredRoundStartMusic      =  0xD84;
    uintptr_t m_bIsDroppingItems                  =  0x8C4;
    uintptr_t m_bIsHltvActive                     =  0x8C6;
    uintptr_t m_bIsQuestEligible                  =  0x8C5;
    uintptr_t m_bIsQueuedMatchmaking              =   0x9C;
    uintptr_t m_bIsValveDS                        =   0xA4;
    uintptr_t m_bLogoMap                          =   0xA5;
    uintptr_t m_bMapHasBombTarget                 =   0x99;
    uintptr_t m_bMapHasBuyZone                    =   0x9B;
    uintptr_t m_bMapHasRescueZone                 =   0x9A;
    uintptr_t m_bMatchWaitingForResume            =   0x61;
    uintptr_t m_bPlayAllStepSoundsOnServer        =   0xA6;
    uintptr_t m_bRoundEndNoMusic                  =  0xF44;
    uintptr_t m_bRoundEndShowTimerDefend          =  0xF18;
    uintptr_t m_bSwitchingTeamsAtRoundReset       =  0xD85;
    uintptr_t m_bTCantBuy                         =  0x9B4;
    uintptr_t m_bTeamIntroPeriod                  =  0xF0C;
    uintptr_t m_bTechnicalTimeOut                 =   0x60;
    uintptr_t m_bTerroristTimeOutActive           =   0x4C;
    uintptr_t m_bWarmupPeriod                     =   0x41;
    uintptr_t m_eRoundEndReason                   =  0xF14;
    uintptr_t m_eRoundWinReason                   =  0x9B0;
    uintptr_t m_fMatchStartTime                   =   0x6C;
    uintptr_t m_fRoundStartTime                   =   0x70;
    uintptr_t m_fWarmupPeriodEnd                  =   0x44;
    uintptr_t m_fWarmupPeriodStart                =   0x48;
    uintptr_t m_flCMMItemDropRevealEndTime        =  0x8C0;
    uintptr_t m_flCMMItemDropRevealStartTime      =  0x8BC;
    uintptr_t m_flCTTimeOutRemaining              =   0x54;
    uintptr_t m_flGameStartTime                   =   0x7C;
    uintptr_t m_flLastPerfSampleTime              = 0x4F60;
    uintptr_t m_flNextRespawnWave                 =  0xBA4;
    uintptr_t m_flRestartRoundTime                =   0x74;
    uintptr_t m_flTerroristTimeOutRemaining       =   0x50;
    uintptr_t m_gamePhase                         =   0x84;
    uintptr_t m_iFreezeTime                       =   0x64;
    uintptr_t m_iHostagesRemaining                =   0x94;
    uintptr_t m_iMatchStats_PlayersAlive_CT       =  0xA30;
    uintptr_t m_iMatchStats_PlayersAlive_T        =  0xAA8;
    uintptr_t m_iMatchStats_RoundResults          =  0x9B8;
    uintptr_t m_iNumConsecutiveCTLoses            =  0xCBC;
    uintptr_t m_iNumConsecutiveTerroristLoses     =  0xCC0;
    uintptr_t m_iRoundEndFunFactData1             =  0xF2C;
    uintptr_t m_iRoundEndFunFactData2             =  0xF30;
    uintptr_t m_iRoundEndFunFactData3             =  0xF34;
    uintptr_t m_iRoundEndFunFactPlayerSlot        =  0xF28;
    uintptr_t m_iRoundEndLegacy                   =  0xF48;
    uintptr_t m_iRoundEndPlayerCount              =  0xF40;
    uintptr_t m_iRoundEndTimerTime                =  0xF1C;
    uintptr_t m_iRoundEndWinnerTeam               =  0xF10;
    uintptr_t m_iRoundStartRoundNumber            =  0xF50;
    uintptr_t m_iRoundTime                        =   0x68;
    uintptr_t m_iRoundWinStatus                   =  0x9AC;
    uintptr_t m_iSpectatorSlotCount               =   0xA8;
    uintptr_t m_nActiveMutators                   =  0xBA0;
    uintptr_t m_nCTTeamIntroVariant               =  0xF08;
    uintptr_t m_nCTTimeOuts                       =   0x5C;
    uintptr_t m_nEndMatchMapGroupVoteOptions      =  0xC90;
    uintptr_t m_nEndMatchMapGroupVoteTypes        =  0xC68;
    uintptr_t m_nEndMatchMapVoteWinner            =  0xCB8;
    uintptr_t m_nHalloweenMaskListSeed            =  0x9A4;
    uintptr_t m_nMatchAbortedEarlyReason          =  0xD80;
    uintptr_t m_nMatchEndCount                    =  0xF00;
    uintptr_t m_nNextMapInMapgroup                =   0xB4;
    uintptr_t m_nOvertimePlaying                  =   0x90;
    uintptr_t m_nQueuedMatchmakingMode            =   0xA0;
    uintptr_t m_nRoundEndCount                    =  0xF4C;
    uintptr_t m_nRoundStartCount                  =  0xF54;
    uintptr_t m_nRoundsPlayedThisPhase            =   0x8C;
    uintptr_t m_nTTeamIntroVariant                =  0xF04;
    uintptr_t m_nTerroristTimeOuts                =   0x58;
    uintptr_t m_nTournamentPredictionsPct         =  0x8B8;
    uintptr_t m_numBestOfMaps                     =  0x9A0;
    uintptr_t m_pGameModeRules                    =  0xDA0;
    uintptr_t m_sRoundEndFunFactToken             =  0xF20;
    uintptr_t m_sRoundEndMessage                  =  0xF38;
    uintptr_t m_szMatchStatTxt                    =  0x4B8;
    uintptr_t m_szTournamentEventName             =   0xB8;
    uintptr_t m_szTournamentEventStage            =  0x2B8;
    uintptr_t m_szTournamentPredictionsTxt        =  0x6B8;
    uintptr_t m_timeUntilNextPhaseStarts          =   0x80;
    uintptr_t m_totalRoundsPlayed                 =   0x88;
    uintptr_t m_ullLocalMatchID                   =  0xC60;
    uintptr_t m_vMinimapMaxs                      =  0xC30;
    uintptr_t m_vMinimapMins                      =  0xC24;
};
```

## Interfaces

### animationsystem.dll

```cpp
// interfaces — animationsystem.dll
struct animationsystem_dll_interfaces {
    uintptr_t AnimationSystemUtils_001 = 0x83F6D8;
    uintptr_t AnimationSystem_001      = 0x8375F8;
};
```

### client.dll

```cpp
// interfaces — client.dll
struct client_dll_interfaces {
    uintptr_t ClientBugBugServic001_Client = 0x2225110;
    uintptr_t ClientToolsInfo_001          = 0x22250E0;
    uintptr_t EmptyWorldService001_Client  = 0x2208E20;
    uintptr_t GameClientExports001         = 0x2221D88;
    uintptr_t LegacyGameUI001              = 0x2231AC0;
    uintptr_t Source2Client002             = 0x254D9F0;
    uintptr_t Source2ClientConfig001       = 0x24AA330;
    uintptr_t Source2ClientPrediction001   = 0x2553C40;
    uintptr_t Source2ClientUI001           = 0x2230220;
};
```

### engine2.dll

```cpp
// interfaces — engine2.dll
struct engine2_dll_interfaces {
    uintptr_t BenchmarkService001                 = 0x6B89D0;
    uintptr_t BugBugService001                    = 0x6B8AD0;
    uintptr_t BugService001                       = 0x970360;
    uintptr_t ClientServerEngineLoopService_001   = 0x9B1D80;
    uintptr_t ClientServerSharedHandleSystem001   = 0x9B1370;
    uintptr_t EngineGameUI001                     = 0x6B6430;
    uintptr_t EngineServiceMgr001                 = 0x9B1620;
    uintptr_t GameEventSystemClientV001           = 0x9B1910;
    uintptr_t GameEventSystemServerV001           = 0x9B1A40;
    uintptr_t GameResourceServiceClientV001       = 0x6B8B10;
    uintptr_t GameResourceServiceServerV001       = 0x6B8B70;
    uintptr_t GameUIService_001                   = 0x9707B0;
    uintptr_t HostStateMgr001                     = 0x6B8FB0;
    uintptr_t INETSUPPORT_001                     = 0x6B1980;
    uintptr_t InputService_001                    = 0x970A90;
    uintptr_t KeyValueCache001                    = 0x6B9060;
    uintptr_t MapListService_001                  = 0x9AF900;
    uintptr_t NetworkClientService_001            = 0x9AFA90;
    uintptr_t NetworkP2PService_001               = 0x9AFDD0;
    uintptr_t NetworkServerService_001            = 0x9AFF80;
    uintptr_t NetworkService_001                  = 0x6B8CE0;
    uintptr_t RenderService_001                   = 0x9B01F0;
    uintptr_t ScreenshotService001                = 0x9B04C0;
    uintptr_t SimpleEngineLoopService_001         = 0x6B90C0;
    uintptr_t SoundService_001                    = 0x9B0670;
    uintptr_t Source2EngineToClient001            = 0x6B5D40;
    uintptr_t Source2EngineToClientStringTable001 = 0x6B5DA0;
    uintptr_t Source2EngineToServer001            = 0x6B5E18;
    uintptr_t Source2EngineToServerStringTable001 = 0x6B5E40;
    uintptr_t SplitScreenService_001              = 0x6B8D20;
    uintptr_t StatsService_001                    = 0x9B0BB0;
    uintptr_t ToolService_001                     = 0x6B8E20;
    uintptr_t VENGINE_GAMEUIFUNCS_VERSION005      = 0x6B64C0;
    uintptr_t VProfService_001                    = 0x6B8E60;
};
```

### filesystem_stdio.dll

```cpp
// interfaces — filesystem_stdio.dll
struct filesystem_stdio_dll_interfaces {
    uintptr_t VAsyncFileSystem2_001 = 0x214610;
    uintptr_t VFileSystem017        = 0x2143D0;
};
```

### host.dll

```cpp
// interfaces — host.dll
struct host_dll_interfaces {
    uintptr_t DebugDrawQueueManager001    = 0x13FF70;
    uintptr_t GameModelInfo001            = 0x13FFB0;
    uintptr_t GameSystem2HostHook         = 0x13FFF0;
    uintptr_t HostUtils001                = 0x14F900;
    uintptr_t PredictionDiffManager001    = 0x140100;
    uintptr_t SaveRestoreDataVersion001   = 0x140230;
    uintptr_t SinglePlayerSharedMemory001 = 0x140260;
    uintptr_t Source2Host001              = 0x1402D0;
};
```

### imemanager.dll

```cpp
// interfaces — imemanager.dll
struct imemanager_dll_interfaces {
    uintptr_t IMEManager001 = 0x37AA0;
};
```

### inputsystem.dll

```cpp
// interfaces — inputsystem.dll
struct inputsystem_dll_interfaces {
    uintptr_t InputStackSystemVersion001 = 0x44E90;
    uintptr_t InputSystemVersion001      = 0x46BC0;
};
```

### localize.dll

```cpp
// interfaces — localize.dll
struct localize_dll_interfaces {
    uintptr_t Localize_001 = 0x59120;
};
```

### matchmaking.dll

```cpp
// interfaces — matchmaking.dll
struct matchmaking_dll_interfaces {
    uintptr_t GameTypes001       = 0x1AEFC0;
    uintptr_t MATCHFRAMEWORK_001 = 0x1B7080;
};
```

### materialsystem2.dll

```cpp
// interfaces — materialsystem2.dll
struct materialsystem2_dll_interfaces {
    uintptr_t FontManager_001          = 0x1638E0;
    uintptr_t MaterialUtils_001        = 0x14BD30;
    uintptr_t PostProcessingSystem_001 = 0x14BC60;
    uintptr_t TextLayout_001           = 0x14BCC0;
    uintptr_t VMaterialSystem2_001     = 0x163530;
};
```

### meshsystem.dll

```cpp
// interfaces — meshsystem.dll
struct meshsystem_dll_interfaces {
    uintptr_t MeshSystem001 = 0x180AB0;
};
```

### navsystem.dll

```cpp
// interfaces — navsystem.dll
struct navsystem_dll_interfaces {
    uintptr_t NavSystem001 = 0x12C000;
};
```

### networksystem.dll

```cpp
// interfaces — networksystem.dll
struct networksystem_dll_interfaces {
    uintptr_t FlattenedSerializersVersion001 = 0x272A30;
    uintptr_t NetworkMessagesVersion001      = 0x29EE00;
    uintptr_t NetworkSystemVersion001        = 0x28C450;
    uintptr_t SerializedEntitiesVersion001   = 0x28C530;
};
```

### panorama.dll

```cpp
// interfaces — panorama.dll
struct panorama_dll_interfaces {
    uintptr_t PanoramaUIEngine001 = 0x5895F0;
};
```

### panorama_text_pango.dll

```cpp
// interfaces — panorama_text_pango.dll
struct panorama_text_pango_dll_interfaces {
    uintptr_t PanoramaTextServices001 = 0x2BA9D0;
};
```

### panoramauiclient.dll

```cpp
// interfaces — panoramauiclient.dll
struct panoramauiclient_dll_interfaces {
    uintptr_t PanoramaUIClient001 = 0x270710;
};
```

### particles.dll

```cpp
// interfaces — particles.dll
struct particles_dll_interfaces {
    uintptr_t ParticleSystemMgr003 = 0x65AEE0;
};
```

### pulse_system.dll

```cpp
// interfaces — pulse_system.dll
struct pulse_system_dll_interfaces {
    uintptr_t IPulseSystem_001 = 0x238120;
};
```

### rendersystemdx11.dll

```cpp
// interfaces — rendersystemdx11.dll
struct rendersystemdx11_dll_interfaces {
    uintptr_t RenderDeviceMgr001          = 0x4342F0;
    uintptr_t RenderUtils_001             = 0x434BD0;
    uintptr_t VRenderDeviceMgrBackdoor001 = 0x434390;
};
```

### resourcesystem.dll

```cpp
// interfaces — resourcesystem.dll
struct resourcesystem_dll_interfaces {
    uintptr_t ResourceSystem013 = 0x89230;
};
```

### scenefilecache.dll

```cpp
// interfaces — scenefilecache.dll
struct scenefilecache_dll_interfaces {
    uintptr_t ResponseRulesCache001 = 0x11D350;
    uintptr_t SceneFileCache002     = 0x11D478;
};
```

### scenesystem.dll

```cpp
// interfaces — scenesystem.dll
struct scenesystem_dll_interfaces {
    uintptr_t RenderingPipelines_001 = 0x675A00;
    uintptr_t SceneSystem_002        = 0x91FB20;
    uintptr_t SceneUtils_001         = 0x676760;
};
```

### schemasystem.dll

```cpp
// interfaces — schemasystem.dll
struct schemasystem_dll_interfaces {
    uintptr_t SchemaSystem_001 = 0x76710;
};
```

### server.dll

```cpp
// interfaces — server.dll
struct server_dll_interfaces {
    uintptr_t EmptyWorldService001_Server = 0x1DF2E10;
    uintptr_t EntitySubclassUtilsV001     = 0x1DA2B40;
    uintptr_t NavGameTest001              = 0x1E3A808;
    uintptr_t ServerToolsInfo_001         = 0x1E19738;
    uintptr_t Source2GameClients001       = 0x1E18C60;
    uintptr_t Source2GameDirector001      = 0x1F7F820;
    uintptr_t Source2GameEntities001      = 0x1E18EE0;
    uintptr_t Source2Server001            = 0x1E18D20;
    uintptr_t Source2ServerConfig001      = 0x20FB328;
    uintptr_t customnavsystem001          = 0x1D904A8;
};
```

### soundsystem.dll

```cpp
// interfaces — soundsystem.dll
struct soundsystem_dll_interfaces {
    uintptr_t SoundBugBugService001_Client =  0x532C90;
    uintptr_t SoundOpSystem001             =  0x532B70;
    uintptr_t SoundOpSystemEdit001         =  0x532A80;
    uintptr_t SoundSystem001               =  0x532470;
    uintptr_t VMixEditTool001              = 0x5941BBF;
};
```

### steamaudio.dll

```cpp
// interfaces — steamaudio.dll
struct steamaudio_dll_interfaces {
    uintptr_t SteamAudio001 = 0x35C1A0;
};
```

### tier0.dll

```cpp
// interfaces — tier0.dll
struct tier0_dll_interfaces {
    uintptr_t TestScriptMgr001      = 0x3A1960;
    uintptr_t VEngineCvar007        = 0x3AC670;
    uintptr_t VProcessUtils002      = 0x3A1820;
    uintptr_t VStringTokenSystem001 = 0x3D3300;
};
```

### v8system.dll

```cpp
// interfaces — v8system.dll
struct v8system_dll_interfaces {
    uintptr_t Source2V8System001 = 0x34790;
};
```

### vphysics2.dll

```cpp
// interfaces — vphysics2.dll
struct vphysics2_dll_interfaces {
    uintptr_t VPhysics2_Interface_001 = 0x460E60;
};
```

### vscript.dll

```cpp
// interfaces — vscript.dll
struct vscript_dll_interfaces {
    uintptr_t VScriptManager010 = 0x13E430;
};
```

### worldrenderer.dll

```cpp
// interfaces — worldrenderer.dll
struct worldrenderer_dll_interfaces {
    uintptr_t WorldRendererMgr001 = 0x236D40;
};
```

## Quick copy — globals

```cpp
// client.dll
struct client {
    uintptr_t dwEntityList             = 0x2709010;
    uintptr_t dwLocalPlayerPawn        = 0x2553D38;
    uintptr_t dwLocalPlayerController  = 0x252B0C8;
    uintptr_t dwViewMatrix             = 0x2559640;
    uintptr_t dwViewAngles             = 0x256A4B8;
    uintptr_t dwGlobalVars             = 0x2221AB8;
    uintptr_t dwGameRules              = 0x25537E8;
    uintptr_t dwPlantedC4              = 0x24B9B90;
    uintptr_t dwGlowManager            = 0x2550500;
    uintptr_t dwCSGOInput              = 0x2569E30;
    uintptr_t dwSensitivity            = 0x0;
    uintptr_t dwSensitivity_sensitivity = 0x0;
};

// engine2.dll
struct engine2 {
    uintptr_t dwBuildNumber            = 0x6B2D18;
    uintptr_t dwNetworkGameClient      = 0x9AFB30;
    uintptr_t dwWindowWidth            = 0x9B4290;
    uintptr_t dwWindowHeight           = 0x9B4294;
};
```
