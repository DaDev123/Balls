#pragma once

#include <cstddef>
#include <cstdint>
#include "crc32.h"
#include "sead/basis/seadTypes.h"

namespace PlayerAnims {

    enum class Type : s16 {
        Unknown = -1,
        // Action Names
        ChairSitDown,
        DamageDown,
        DamageDownSwim,
        DamageDownSwimSurface,
        DemoWorldMoveForwardFirst,
        DemoWorldMoveForwardNormal,
        MotorcycleRide,
        MotorcycleRideClash,
        MotorcycleRideJump,
        MotorcycleRideLand,
        MotorcycleRideRunStart,
        Move,
        MoveMoon,
        ExitPictureDown,
        NoDamageDown,
        NoDamageDownSwim,
        NoDamageDownSwimSurface,
        RestartSpinJumpL,
        RestartSpinJumpR,
        JumpCapCatch,
        JumpCapCatchAir,
        SandWait,
        SandWalk,
        StartSpinJumpL,
        StartSpinJumpR,
        SwimSurfaceNormal,
        SwimSurfaceCarry,
        DemoGetShineGrandStartNormal,
        DemoGetShineGrandStartEmpty,
        DemoCapOffWait,
        // Anim Names
        AreaWait64,
        AreaWaitAloha,
        AreaWaitBalance,
        AreaWaitBeach,
        AreaWaitCold,
        AreaWaitDance01,
        AreaWaitDance02,
        AreaWaitDance03,
        AreaWaitFight,
        AreaWaitGetwarm,
        AreaWaitGuitar,
        AreaWaitHeatGround,
        AreaWaitHot,
        AreaWaitJog,
        AreaWaitLookUp,
        AreaWaitSayCheese,
        AreaWaitScared,
        AreaWaitSearch,
        AreaWaitSigh,
        AreaWaitSitDown,
        AreaWaitSleepy,
        AreaWaitSmell,
        AreaWaitStink,
        AreaWaitStretch,
        AreaWaitView,
        AreaWaitWaterfall,
        AreaWaitWonder,
        ArrowShoot,
        ArrowShootStart,
        BallToss,
        BallTossGround,
        BattleWait,
        BedSleep,
        BedSleepStart,
        BedSnooze,
        BedSnoozeStart,
        BikeRide,
        Bind,
        Brake,
        BubbleJump,
        BubbleStart,
        BubbleWait,
        CanoeDamage,
        CanoeDamageEnd,
        CanoeDamageStart,
        CanoePaddle,
        CanoeTurnL,
        CanoeTurnR,
        CanoeWait,
        Carry,
        CarryFront,
        CarryFrontStart,
        CarryFrontThrow,
        CarryUp,
        CarryUpStart,
        CarryUpThrow,
        CatapultStart,
        CatchCap,
        CatchCapJump,
        CatchCapJumpParts,
        CatchCapJumpPartsReverse,
        CatchCapParts,
        CatchKoopaCap,
        ClashWorldStandUp,
        ClimbTreeHandStandWait,
        Damage,
        DamageLand,
        DamageSwim,
        DamageSwimSurface,
        DamageSwimSurfaceLand,
        DamageWait,
        Dash,
        DashBrake,
        DashFast,
        DashTurn,
        Dead,
        Dead01,
        Dead02,
        Dead03,
        Dead04,
        DeadFall,
        DeadFire,
        DeadIce,
        DeadPoison,
        DeadSand,
        DeadWallow,
        DeadWater,
        DemoAppearFromHome,
        DemoBattleEndGiantWanderBoss,
        DemoBattleStartBossKnuckle,
        DemoBattleStartBreeda,
        DemoBattleStartBreedaFirst,
        DemoBattleStartGolemClimb,
        DemoBossRaidAttack,
        DemoCrashHome,
        DemoCrashHomeFall,
        DemoEnding01,
        DemoEnding02,
        DemoEnding03,
        DemoEnding04,
        DemoEnterChurch,
        DemoGetShine,
        DemoGetShineCloseUp,
        DemoGetShineEnd,
        DemoGetShineGrandCloseUp,
        DemoGetShineGrandCloseUpEnd,
        DemoGetShineGrandEnd,
        DemoGetShineGrandStart,
        DemoGetShineLand,
        DemoGetShinePaper,
        DemoGetShineRock,
        DemoGetShineScissors,
        DemoGetShineStart,
        DemoHackFirst,
        DemoHackKoopa01,
        DemoHackKoopa02,
        DemoJangoCapSearch,
        DemoJangoGetUp,
        DemoJangoLookAround,
        DemoJangoStolen,
        DemoJangoStolenLoop,
        DemoMeetCapNpcC01,
        DemoMeetCapNpcC01TalkWait,
        DemoMeetCapNpcC02,
        DemoMeetCapNpcC02ATalkWait,
        DemoMeetCapNpcC02BTalkWait,
        DemoMeetCapNpcC03,
        DemoMeetCapNpcC04TalkWait,
        DemoMeetCapNpcC06TalkWait,
        DemoMeetCapNpcC07TalkWait,
        DemoMeetCapNpcC08TalkWait,
        DemoMeetCapNpcC10A,
        DemoMeetCapNpcC10ATalkWait,
        DemoMeetCapNpcC10B,
        DemoMeetCapNpcC10BTalkWait,
        DemoOpening01,
        DemoOpeningCap,
        DemoOpeningDown,
        DemoPayToHome,
        DemoReset,
        DemoReturnToHome,
        DemoSitDownTalk,
        DemoSitDownWaitFirst,
        DemoStartJango,
        DemoStartJango2,
        DemoStartUpHome,
        DemoStartUpHomeSky,
        DemoStartWaterfall,
        DemoTakeOffKoopaForMoon,
        DemoTalkCapManHeroAppear,
        DemoTalkCapManHeroWalk,
        DemoWarpEnd,
        DemoWarpStart,
        DemoWorldLavaScenario1End,
        DemoWorldMoveBackward,
        DemoWorldMoveBackward1,
        DemoWorldMoveBackward2,
        DemoWorldMoveBackward3,
        DemoWorldMoveForward,
        DemoWorldMoveForwardArrive,
        DemoWorldMoveForwardNormal1,
        DemoWorldMoveForwardNormal2,
        DemoWorldMoveForwardNormal3,
        DemoWorldMoveMoonBackward,
        DemoWorldMoveMoonForward,
        DemoWorldMoveMoonForwardFirst,
        DemoWorldTakeoff,
        DemoWorldTakeoffEast,
        DemoWorldTakeoffForMoon,
        DemoWorldTakeoffForMoonFirst,
        DemoWorldTakeoffForMoonFirstTuxedo,
        DemoWorldTakeoffWest,
        DemoWorldWarpHole01,
        DemoWorldWarpHole02,
        DemoWorldWarpHole03,
        Dive,
        DiveInWater,
        DokanIn,
        DokanInHome,
        DokanInUpsideDown,
        DokanJump,
        DokanOut,
        DokanOutUpsideDown,
        DokanReady,
        DokanReadyHome,
        DokanSideIn,
        DokanSideOut,
        DoorIn,
        DoorOut,
        DoorStart,
        Fall,
        Fire,
        FireRun,
        FireRunStart,
        GetShine,
        GetShineCity,
        GetShineEmpty,
        GetShineGrand,
        GetShineSub,
        GrabCeilJump,
        GrabCeilStart,
        GrabCeilSwing,
        GrabCeilWait,
        Hack,
        HeadSliding,
        HeadSlidingStart,
        HipDrop,
        HipDropLand,
        HipDropReaction,
        HipDropStart,
        HomeCapManHeroAppear,
        Jump,
        Jump2,
        Jump3,
        JumpBack,
        JumpBroad,
        JumpBroad2,
        JumpBroad3,
        JumpBroad4,
        JumpBroad5,
        JumpBroad6,
        JumpBroad7,
        JumpBroad8,
        JumpBroad9,
        JumpCapCatchCommon,
        JumpCapLeapFrog,
        JumpDashFast,
        JumpEndHack,
        JumpFlap,
        JumpHipDrop,
        JumpInterp,
        JumpNpcTrample,
        JumpObjectReaction,
        JumpReverse,
        JumpReverseInterp,
        JumpTurn,
        Kick,
        KoopaCapPunchFinishL,
        KoopaCapPunchFinishLStart,
        KoopaCapPunchFinishR,
        KoopaCapPunchFinishRStart,
        KoopaCapPunchL,
        KoopaCapPunchLStart,
        KoopaCapPunchR,
        KoopaCapPunchRStart,
        KoopaDemoBattleStartChurchFirstLv2,
        KoopaDemoBattleStartChurchLv2,
        KoopaDemoBattleStartChurchSecondLv2,
        KoopaDemoBattleStartFirstLv1,
        KoopaDemoBattleStartFirstLv2,
        KoopaDemoBattleStartSecondLv1,
        KoopaDemoBattleStartSecondLv2,
        KoopaDemoBattleStartTalkBlendLv1,
        KoopaDemoClashBasement,
        Land,
        LandDownFall,
        LandJump3,
        LandRolling,
        LandStiffen,
        LandTurn,
        MainScenarioCameraWait,
        MofumofuDemoOpening1,
        MofumofuDemoOpening2,
        MotorcycleRideC,
        MotorcycleRideClashC,
        MotorcycleRideClashL,
        MotorcycleRideClashR,
        MotorcycleRideJumpC,
        MotorcycleRideJumpL,
        MotorcycleRideJumpR,
        MotorcycleRideL,
        MotorcycleRideLandC,
        MotorcycleRideLandL,
        MotorcycleRideLandR,
        MotorcycleRideOn,
        MotorcycleRideR,
        MotorcycleRideRunStartC,
        MotorcycleRideRunStartL,
        MotorcycleRideRunStartR,
        MotorcycleRideStart,
        MotorcycleRideStartL,
        MotorcycleRideStartR,
        MotorcycleWait,
        OpeningStandUp,
        PauseMenu2Player,
        PauseMenuContinue,
        PauseMenuContinueEnd,
        PauseMenuData,
        PauseMenuHelp,
        PauseMenuNewGame,
        PauseMenuSave,
        PauseMenuStart,
        PauseMenuWait,
        PoleCatch,
        PoleClimb,
        PoleFall,
        PoleHandStandEnd,
        PoleHandStandJump,
        PoleHandStandStart,
        PoleHandStandTurn,
        PoleHandStandWait,
        PoleTurn,
        PoleWait,
        Punch,
        Push,
        RabbitGet,
        RaceManHack,
        RaceManHackEnd,
        RaceManHackStart,
        RaceManJumpEnd,
        RaceManJumpStart,
        RaceManResultLose,
        RaceManResultWin,
        RaceResultLose,
        RaceResultWin,
        ReactionCapOn,
        Rolling,
        RollingEnd,
        RollingEndBackUp,
        RollingJump,
        RollingLand,
        RollingStandUp,
        RollingStart,
        RoswellPut,
        RoswellRun,
        RoswellThrow,
        RoswellWait,
        Run,
        RunMoon,
        RunStart,
        SandWaitNormal,
        SandWaitStrong,
        SandWalkNormal,
        SandWalkStrong,
        SitDown,
        SitDownEnd,
        SitDownLand,
        SitDownSleep,
        SitDownSleepEnd,
        SitDownSleepStart,
        SitDownStart,
        Sleep,
        SleepStart,
        Slide,
        SlopeSlide,
        SlopeSlideBack,
        Snooze,
        SnoozeStart,
        SphinxRideClash,
        SphinxRideFall,
        SphinxRideGetOn,
        SphinxRideJump,
        SphinxRideJumpStart,
        SphinxRideOn,
        SphinxRideRide,
        SphinxRideRideOn,
        SphinxRideRideStartL,
        SphinxRideRideStartR,
        SphinxRideRunSlow,
        SphinxRideStop,
        SphinxRideStopStart,
        SpinCap,
        SpinCapAirStart,
        SpinCapAirStartCapCatch,
        SpinCapAirStartDoubleDown,
        SpinCapAirStartDoubleLeft,
        SpinCapAirStartDoubleRight,
        SpinCapAirStartDoubleUp,
        SpinCapAirStartLeft,
        SpinCapAirStartLong,
        SpinCapAirStartRight,
        SpinCapEnd,
        SpinCapJumpStart,
        SpinCapStart,
        SpinCapStart2Left,
        SpinCapStart2Right,
        SpinCapStart3Left,
        SpinCapStart3Right,
        SpinCapStartCapCatch,
        SpinCapStartDoubleDown,
        SpinCapStartDoubleLeft,
        SpinCapStartDoubleRight,
        SpinCapStartDoubleUp,
        SpinCapStartLeft,
        SpinCapStartLong,
        SpinCapStartRight,
        SpinCapStartRolling,
        SpinCapWait,
        SpinGroundL,
        SpinGroundR,
        SpinJump,
        SpinJumpDownFall,
        SpinJumpDownFallL,
        SpinJumpDownFallR,
        SpinJumpL,
        SpinJumpLoop,
        SpinJumpR,
        SpinJumpStart,
        SpinSeparate,
        SpinSeparateSwim,
        SquatEnd,
        SquatLand,
        SquatStart,
        SquatWait,
        SquatWalk,
        StabStart,
        StabUndarWait,
        StabUnderStart,
        StabWait,
        StabWallWait,
        SwimDieOver,
        SwimDive,
        SwimFallIn,
        SwimHeadSliding,
        SwimHeadSlidingEnd,
        SwimHeadSlidingIn,
        SwimHeadSlidingStart,
        SwimHipDrop,
        SwimHipDropLand,
        SwimHipDropStart,
        SwimJumpHipDrop,
        SwimLand,
        SwimSpinCapStart,
        SwimSpinCapStartDoubleDown,
        SwimSpinCapStartDoubleLeft,
        SwimSpinCapStartDoubleRight,
        SwimSpinCapStartDoubleUp,
        SwimSpinCapStartLeft,
        SwimSpinCapStartRight,
        SwimSquat,
        SwimSquatWalk,
        SwimStand,
        SwimStandMove,
        SwimStandSurface,
        SwimStandWait,
        SwimSurface,
        SwimTalkWait,
        SwimTrample,
        SwimTrampoline,
        SwimWait,
        SwimWalk,
        TalkEnd,
        TalkTurn,
        TalkTurnL90,
        TalkTurnR90,
        TalkWait,
        TestDemoDiverA,
        TestDemoDiverB,
        TestDemoE3001,
        TestRunBack,
        TestRunFront,
        TestRunLeft,
        TestRunRight,
        TestRunWait,
        ThrowCap,
        ThrowCapJump,
        ThrowCapJumpParts,
        ThrowCapParts,
        TouchJump,
        TouchJumpLong,
        TouchJumpLongSign,
        TractorBubbleEmd,
        TractorBubbleEnd,
        TractorBubbleStart,
        TractorBubbleWait,
        TreeClimb,
        TreeFall,
        Turn,
        TurnPoint,
        TurnStep,
        Wait,
        WaitCold,
        WaitDemo,
        WaitDigPoint,
        WaitHot,
        WaitRelax,
        WaitRelaxStart,
        WaitVeryCold,
        Walk,
        WalkDemo,
        WalkSoft,
        WallCatch,
        WallCatchEnd,
        WallCatchEndFast,
        WallCatchEndJump,
        WallCatchMoveL,
        WallCatchMoveR,
        WallCatchStart,
        WallJump,
        WallKeep,
        WallKeepReverse,
        WallLand,
        WallSlideL,
        WallSlideR,
        WarpIn,
        WarpOut,
        WarpWait,
        WaterRoadMove,
        WearEnd,
        WhipAttackEnd,
        WhipAttackStart,
        WhipAttackWait,
        WhipWait,
        WorldWarpBind,
        WorldWarpBindStart,
        WorldWarpIn,
        WorldWarpOut,
        // Capture Anims
        BubbleCannonJump,
        Down,
        HackCancelJump,
        HackHighJump,
        HackJump,
        HackStart,
        HackStartDown,
        HackWait,
        HackWaitSpeedy,
        LandFrontDown,
        LandFrontUp,
        MoveSpeedy,
        Up,
        Angry,
        AppearSign,
        AppearStart,
        AttackSuccess,
        Blow,
        BlowDown,
        Clash,
        Coverd,
        DamageCap,
        Find,
        HackCharge,
        HackChargeFull,
        HackChargeTurn,
        HackRunCoverd,
        PressDown,
        RunCoverd,
        RunNaked,
        Swoon,
        SwoonEnd,
        SwoonStart,
        Trampled,
        TrampledEnd,
        TurnCoverd,
        TurnNaked,
        BlowEnd,
        BlowSign,
        BlowStart,
        BlowWide,
        Reaction,
        Charge,
        ChargeStart,
        Dummy,
        Idle,
        ReactionCap,
        ReactionCapSand,
        ReactionJump,
        ReactionJumpSand,
        RunHack,
        RunStartHack,
        WaitHack,
        Attack,
        AttackHit,
        AttackSecond,
        AttackSecondSign,
        AttackSign,
        HackAttack,
        HackAttackJump,
        HackAttackMiss,
        HackAttackQuick,
        HackJumpEnd,
        HackJumpHigh,
        JumpEnd,
        JumpStart,
        PressDownBlow,
        PressDownPress,
        SwoonStartLand,
        HighFall,
        HighJump,
        LandSwim,
        NpcFall,
        NpcJump,
        NpcJumpStart,
        RunFast,
        RunSlow,
        RunStay,
        Swim,
        SwimHackStart,
        SwimReaction,
        SwimSwoon,
        SwimSwoonEnd,
        SwimSwoonStart,
        SwimSwoonStartLand,
        SwoonStartFall,
        UpperPunch,
        Appear,
        Shot,
        SwoonTrampled,
        AttackEnd,
        AttackStart,
        MoveEnd,
        MoveStart,
        Recover,
        Trample,
        Expand,
        ExpandAir,
        ExpandEnemy,
        ExpandSign,
        ExpandSignEnemy,
        ExpandWait,
        ExpandWaitEnd,
        Hold,
        Shrink,
        ShrinkAir,
        ShrinkReactionHead,
        ShrinkReactionHip,
        TurnEnemy,
        TurnHack,
        WaitAir,
        FallNormal,
        Glide,
        GlideDrop,
        GlideL,
        GlideLStart,
        GlideR,
        GlideRStart,
        GlideRise,
        GlideStart,
        HackEnd,
        HackEndFly,
        JumpEndNormal,
        ReactionTrampled,
        Talk,
        WaitNormal,
        WaitSandSink,
        AttackTrample,
        AttackUp,
        Break,
        BreakGroundHit,
        BreakReaction,
        BreakWait,
        FallFly,
        Fly,
        FlyChase,
        FlyWait,
        RecoverSign,
        Boost,
        BoostStart,
        Explosion,
        FallDown,
        FlyWaitStart,
        Standby,
        Turbo,
        AttackTower,
        DashTower,
        DashTowerBottom,
        FallTower,
        FindTower,
        HackEndTower,
        JumpTower,
        LandTower,
        Miss,
        MissTower,
        PressDownTower,
        Reset,
        RideOn,
        RideOnTower,
        RunTower,
        RunTowerBottom,
        SandGeyser,
        SandGeyserTower,
        SandWaitTower,
        SandWalkTower,
        SlideTower,
        SwoonLoop,
        WaitTower,
        WalkTower,
        WalkTowerBottom,
        EnemyRun,
        HackRun,
        Choke,
        ChokeEnd,
        ChokeStart,
        HackStartChoke,
        Look,
        Swallow,
        SwoonChoke,
        SwoonEndChoke,
        SwoonStartChoke,
        Vomit,
        WaitChoke,
        DashR,
        FishingUp,
        FishingUpGold,
        JumpGround,
        ReactionWall,
        RollingRail,
        RollingRailReverse,
        RollingReverse,
        SwimStart,
        SwimSurfaceEnemy,
        SwimWaitStart,
        TurnPlayer,
        WaitGround,
        AdlibWait,
        Generate,
        JumpEndHigh,
        JumpEndLow,
        Stretch,
        StretchFall,
        StretchRun,
        StretchWait,
        UpperObjStart,
        UpperObjWait,
        BlowDownCommon,
        PressDownCommon,
        Reload,
        Shoot,
        SwoonReaction,
        AttackMove,
        AttackMoveForest,
        AttackWaitL,
        AttackWaitR,
        DashAfterL,
        DashAfterR,
        DashL,
        EnemyAttack,
        EnemyAttackL,
        EnemyAttackLEnd,
        EnemyAttackLStart,
        EnemyAttackR,
        EnemyAttackREnd,
        EnemyAttackRStart,
        EnemyAttackSign,
        EnemyFall,
        EnemyFallStart,
        EnemyLand,
        EnemyRunStart,
        FindMario,
        FootHoldJumpL,
        FootHoldJumpR,
        FootHoldL,
        FootHoldR,
        HackStartShort,
        HackStartWithTurn,
        ListPose,
        Lost,
        MoveTouch,
        NoticeSniff,
        ReactionSeaOfTrees,
        RunAfterL,
        RunAfterR,
        RunL,
        RunR,
        RunStartL,
        RunStartR,
        SleepReactionHipDrop,
        SleepSeaOfTrees,
        SwoonStartDashClash,
        TurnEndL,
        TurnEndR,
        TurnL180,
        TurnL90,
        TurnR180,
        TurnR90,
        WaitL,
        WaitR,
        WaitSniff,
        WakeUpSwoonStart,
        WalkAfterL,
        WalkAfterR,
        WalkEndL,
        WalkEndR,
        WalkGroundL,
        WalkGroundR,
        WalkL,
        WalkR,
        WalkStart,
        WalkStartL,
        WalkStartR,
        AppearBall,
        JumpStick,
        SpinL,
        SpinR,
        SpinThrustL,
        SpinThrustR,
        Stick,
        StickBendHorizontal,
        StickBendVertical,
        Thrust,
        ThrustCancel,
        ThrustEnd,
        ThrustSign,
        ThrustWait,
        TrampleDown,
        AttackPull,
        Back,
        BackEnd,
        BackReturn,
        HackDash,
        HackDashPull,
        HackMove,
        HackPull,
        HackPullStart,
        HitAction,
        HitEnd,
        HoleIn,
        Return,
        Bubble,
        // All Capture Actions
        Bull,
        Byugo,
        BlowStartEnemy,
        BlowStartHack,
        IdleHack,
        Stop,
        FireBros,
        Frog,
        HackLand,
        HackOff,
        HackOn,
        NpcLand,
        HammerBros,
        Imomu,
        ExpandAirEnemy,
        ExpandAirHack,
        ExpandHack,
        ExpandSignHack,
        ShrinkAirHack,
        ShrinkEnemy,
        ShrinkHack,
        ShrinkReactionHeadEnemy,
        ShrinkReactionHeadHack,
        ShrinkReactionHipEnemy,
        ShrinkReactionHipHack,
        Kakku,
        FallHack,
        KaronWing,
        EnemyFly,
        HackFly,
        Killer,
        Default,
        SignExplosion,
        Kuribo,
        KuriboWing,
        PackunFire,
        ChokeDefault,
        ChokeCap,
        Eat,
        VomitCap,
        VomitDefault,
        PackunPoison,
        EatDown,
        Pukupuku,
        DashRSurface,
        DashRWater,
        RollingRSurface,
        RollingRWater,
        RollingLSurface,
        RollingLWater,
        SwimStartSurface,
        SwimStartWater,
        SwimWaitStartSurface,
        SwimWaitStartWater,
        SwimWaitSurface,
        SwimWaitWater,
        SwimWaitWaterHack,
        SwimWater,
        WaitMove,
        AdlibWaitMove,
        RunMove,
        FallMove,
        JumpEndEnemy,
        JumpEndLowHack,
        JumpEndHighHack,
        Tank,
        BlowDownCaptureParade,
        PressDownCaptureParade,
        MoveL,
        MoveR,
        MoveAfterL,
        MoveAfterR,
        MoveStartL,
        MoveStartR,
        Tsukkun,
        StickBend,
        ThrustEnemy,
        ThrustHack,
        ThrustWaitEnemy,
        ThrustWaitHack,
        Wanwan,
        BackChain,
        BackDirect,
        WanwanBig,
        End
    };

    static constexpr size_t ToValue(Type type) { return static_cast<std::uint16_t>(type); }

    static constexpr Type ToType(std::uint16_t value) {return static_cast<Type>(value);}

    static constexpr std::array<const char*, ToValue(Type::End)> s_Strs {
        // Action Names
        "ChairSitDown", "DamageDown", "DamageDownSwim", "DamageDownSwimSurface",
            "DemoWorldMoveForwardFirst", "DemoWorldMoveForwardNormal", "MotorcycleRide",
            "MotorcycleRideClash", "MotorcycleRideJump", "MotorcycleRideLand",
            "MotorcycleRideRunStart", "Move", "MoveMoon", "ExitPictureDown", "NoDamageDown",
            "NoDamageDownSwim", "NoDamageDownSwimSurface", "RestartSpinJumpL", "RestartSpinJumpR",
            "JumpCapCatch", "JumpCapCatchAir", "SandWait", "SandWalk", "StartSpinJumpL",
            "StartSpinJumpR", "SwimSurfaceNormal", "SwimSurfaceCarry",
            "DemoGetShineGrandStartNormal", "DemoGetShineGrandStartEmpty", "DemoCapOffWait",
            // Anim Names
            "AreaWait64", "AreaWaitAloha", "AreaWaitBalance", "AreaWaitBeach", "AreaWaitCold",
            "AreaWaitDance01", "AreaWaitDance02", "AreaWaitDance03", "AreaWaitFight",
            "AreaWaitGetwarm", "AreaWaitGuitar", "AreaWaitHeatGround", "AreaWaitHot", "AreaWaitJog",
            "AreaWaitLookUp", "AreaWaitSayCheese", "AreaWaitScared", "AreaWaitSearch",
            "AreaWaitSigh", "AreaWaitSitDown", "AreaWaitSleepy", "AreaWaitSmell", "AreaWaitStink",
            "AreaWaitStretch", "AreaWaitView", "AreaWaitWaterfall", "AreaWaitWonder", "ArrowShoot",
            "ArrowShootStart", "BallToss", "BallTossGround", "BattleWait", "BedSleep",
            "BedSleepStart", "BedSnooze", "BedSnoozeStart", "BikeRide", "Bind", "Brake",
            "BubbleJump", "BubbleStart", "BubbleWait", "CanoeDamage", "CanoeDamageEnd",
            "CanoeDamageStart", "CanoePaddle", "CanoeTurnL", "CanoeTurnR", "CanoeWait", "Carry",
            "CarryFront", "CarryFrontStart", "CarryFrontThrow", "CarryUp", "CarryUpStart",
            "CarryUpThrow", "CatapultStart", "CatchCap", "CatchCapJump", "CatchCapJumpParts",
            "CatchCapJumpPartsReverse", "CatchCapParts", "CatchKoopaCap", "ClashWorldStandUp",
            "ClimbTreeHandStandWait", "Damage", "DamageLand", "DamageSwim", "DamageSwimSurface",
            "DamageSwimSurfaceLand", "DamageWait", "Dash", "DashBrake", "DashFast", "DashTurn",
            "Dead", "Dead01", "Dead02", "Dead03", "Dead04", "DeadFall", "DeadFire", "DeadIce",
            "DeadPoison", "DeadSand", "DeadWallow", "DeadWater", "DemoAppearFromHome",
            "DemoBattleEndGiantWanderBoss", "DemoBattleStartBossKnuckle", "DemoBattleStartBreeda",
            "DemoBattleStartBreedaFirst", "DemoBattleStartGolemClimb", "DemoBossRaidAttack",
            "DemoCrashHome", "DemoCrashHomeFall", "DemoEnding01", "DemoEnding02", "DemoEnding03",
            "DemoEnding04", "DemoEnterChurch", "DemoGetShine", "DemoGetShineCloseUp",
            "DemoGetShineEnd", "DemoGetShineGrandCloseUp", "DemoGetShineGrandCloseUpEnd",
            "DemoGetShineGrandEnd", "DemoGetShineGrandStart", "DemoGetShineLand",
            "DemoGetShinePaper", "DemoGetShineRock", "DemoGetShineScissors", "DemoGetShineStart",
            "DemoHackFirst", "DemoHackKoopa01", "DemoHackKoopa02", "DemoJangoCapSearch",
            "DemoJangoGetUp", "DemoJangoLookAround", "DemoJangoStolen", "DemoJangoStolenLoop",
            "DemoMeetCapNpcC01", "DemoMeetCapNpcC01TalkWait", "DemoMeetCapNpcC02",
            "DemoMeetCapNpcC02ATalkWait", "DemoMeetCapNpcC02BTalkWait", "DemoMeetCapNpcC03",
            "DemoMeetCapNpcC04TalkWait", "DemoMeetCapNpcC06TalkWait", "DemoMeetCapNpcC07TalkWait",
            "DemoMeetCapNpcC08TalkWait", "DemoMeetCapNpcC10A", "DemoMeetCapNpcC10ATalkWait",
            "DemoMeetCapNpcC10B", "DemoMeetCapNpcC10BTalkWait", "DemoOpening01", "DemoOpeningCap",
            "DemoOpeningDown", "DemoPayToHome", "DemoReset", "DemoReturnToHome", "DemoSitDownTalk",
            "DemoSitDownWaitFirst", "DemoStartJango", "DemoStartJango2", "DemoStartUpHome",
            "DemoStartUpHomeSky", "DemoStartWaterfall", "DemoTakeOffKoopaForMoon",
            "DemoTalkCapManHeroAppear", "DemoTalkCapManHeroWalk", "DemoWarpEnd", "DemoWarpStart",
            "DemoWorldLavaScenario1End", "DemoWorldMoveBackward", "DemoWorldMoveBackward1",
            "DemoWorldMoveBackward2", "DemoWorldMoveBackward3", "DemoWorldMoveForward",
            "DemoWorldMoveForwardArrive", "DemoWorldMoveForwardNormal1",
            "DemoWorldMoveForwardNormal2", "DemoWorldMoveForwardNormal3",
            "DemoWorldMoveMoonBackward", "DemoWorldMoveMoonForward",
            "DemoWorldMoveMoonForwardFirst", "DemoWorldTakeoff", "DemoWorldTakeoffEast",
            "DemoWorldTakeoffForMoon", "DemoWorldTakeoffForMoonFirst",
            "DemoWorldTakeoffForMoonFirstTuxedo", "DemoWorldTakeoffWest", "DemoWorldWarpHole01",
            "DemoWorldWarpHole02", "DemoWorldWarpHole03", "Dive", "DiveInWater", "DokanIn",
            "DokanInHome", "DokanInUpsideDown", "DokanJump", "DokanOut", "DokanOutUpsideDown",
            "DokanReady", "DokanReadyHome", "DokanSideIn", "DokanSideOut", "DoorIn", "DoorOut",
            "DoorStart", "Fall", "Fire", "FireRun", "FireRunStart", "GetShine", "GetShineCity",
            "GetShineEmpty", "GetShineGrand", "GetShineSub", "GrabCeilJump", "GrabCeilStart",
            "GrabCeilSwing", "GrabCeilWait", "Hack", "HeadSliding", "HeadSlidingStart", "HipDrop",
            "HipDropLand", "HipDropReaction", "HipDropStart", "HomeCapManHeroAppear", "Jump",
            "Jump2", "Jump3", "JumpBack", "JumpBroad", "JumpBroad2", "JumpBroad3", "JumpBroad4",
            "JumpBroad5", "JumpBroad6", "JumpBroad7", "JumpBroad8", "JumpBroad9",
            "JumpCapCatchCommon", "JumpCapLeapFrog", "JumpDashFast", "JumpEndHack", "JumpFlap",
            "JumpHipDrop", "JumpInterp", "JumpNpcTrample", "JumpObjectReaction", "JumpReverse",
            "JumpReverseInterp", "JumpTurn", "Kick", "KoopaCapPunchFinishL",
            "KoopaCapPunchFinishLStart", "KoopaCapPunchFinishR", "KoopaCapPunchFinishRStart",
            "KoopaCapPunchL", "KoopaCapPunchLStart", "KoopaCapPunchR", "KoopaCapPunchRStart",
            "KoopaDemoBattleStartChurchFirstLv2", "KoopaDemoBattleStartChurchLv2",
            "KoopaDemoBattleStartChurchSecondLv2", "KoopaDemoBattleStartFirstLv1",
            "KoopaDemoBattleStartFirstLv2", "KoopaDemoBattleStartSecondLv1",
            "KoopaDemoBattleStartSecondLv2", "KoopaDemoBattleStartTalkBlendLv1",
            "KoopaDemoClashBasement", "Land", "LandDownFall", "LandJump3", "LandRolling",
            "LandStiffen", "LandTurn", "MainScenarioCameraWait", "MofumofuDemoOpening1",
            "MofumofuDemoOpening2", "MotorcycleRideC", "MotorcycleRideClashC",
            "MotorcycleRideClashL", "MotorcycleRideClashR", "MotorcycleRideJumpC",
            "MotorcycleRideJumpL", "MotorcycleRideJumpR", "MotorcycleRideL", "MotorcycleRideLandC",
            "MotorcycleRideLandL", "MotorcycleRideLandR", "MotorcycleRideOn", "MotorcycleRideR",
            "MotorcycleRideRunStartC", "MotorcycleRideRunStartL", "MotorcycleRideRunStartR",
            "MotorcycleRideStart", "MotorcycleRideStartL", "MotorcycleRideStartR", "MotorcycleWait",
            "OpeningStandUp", "PauseMenu2Player", "PauseMenuContinue", "PauseMenuContinueEnd",
            "PauseMenuData", "PauseMenuHelp", "PauseMenuNewGame", "PauseMenuSave", "PauseMenuStart",
            "PauseMenuWait", "PoleCatch", "PoleClimb", "PoleFall", "PoleHandStandEnd",
            "PoleHandStandJump", "PoleHandStandStart", "PoleHandStandTurn", "PoleHandStandWait",
            "PoleTurn", "PoleWait", "Punch", "Push", "RabbitGet", "RaceManHack", "RaceManHackEnd",
            "RaceManHackStart", "RaceManJumpEnd", "RaceManJumpStart", "RaceManResultLose",
            "RaceManResultWin", "RaceResultLose", "RaceResultWin", "ReactionCapOn", "Rolling",
            "RollingEnd", "RollingEndBackUp", "RollingJump", "RollingLand", "RollingStandUp",
            "RollingStart", "RoswellPut", "RoswellRun", "RoswellThrow", "RoswellWait", "Run",
            "RunMoon", "RunStart", "SandWaitNormal", "SandWaitStrong", "SandWalkNormal",
            "SandWalkStrong", "SitDown", "SitDownEnd", "SitDownLand", "SitDownSleep",
            "SitDownSleepEnd", "SitDownSleepStart", "SitDownStart", "Sleep", "SleepStart", "Slide",
            "SlopeSlide", "SlopeSlideBack", "Snooze", "SnoozeStart", "SphinxRideClash",
            "SphinxRideFall", "SphinxRideGetOn", "SphinxRideJump", "SphinxRideJumpStart",
            "SphinxRideOn", "SphinxRideRide", "SphinxRideRideOn", "SphinxRideRideStartL",
            "SphinxRideRideStartR", "SphinxRideRunSlow", "SphinxRideStop", "SphinxRideStopStart",
            "SpinCap", "SpinCapAirStart", "SpinCapAirStartCapCatch", "SpinCapAirStartDoubleDown",
            "SpinCapAirStartDoubleLeft", "SpinCapAirStartDoubleRight", "SpinCapAirStartDoubleUp",
            "SpinCapAirStartLeft", "SpinCapAirStartLong", "SpinCapAirStartRight", "SpinCapEnd",
            "SpinCapJumpStart", "SpinCapStart", "SpinCapStart2Left", "SpinCapStart2Right",
            "SpinCapStart3Left", "SpinCapStart3Right", "SpinCapStartCapCatch",
            "SpinCapStartDoubleDown", "SpinCapStartDoubleLeft", "SpinCapStartDoubleRight",
            "SpinCapStartDoubleUp", "SpinCapStartLeft", "SpinCapStartLong", "SpinCapStartRight",
            "SpinCapStartRolling", "SpinCapWait", "SpinGroundL", "SpinGroundR", "SpinJump",
            "SpinJumpDownFall", "SpinJumpDownFallL", "SpinJumpDownFallR", "SpinJumpL",
            "SpinJumpLoop", "SpinJumpR", "SpinJumpStart", "SpinSeparate", "SpinSeparateSwim",
            "SquatEnd", "SquatLand", "SquatStart", "SquatWait", "SquatWalk", "StabStart",
            "StabUndarWait", "StabUnderStart", "StabWait", "StabWallWait", "SwimDieOver",
            "SwimDive", "SwimFallIn", "SwimHeadSliding", "SwimHeadSlidingEnd", "SwimHeadSlidingIn",
            "SwimHeadSlidingStart", "SwimHipDrop", "SwimHipDropLand", "SwimHipDropStart",
            "SwimJumpHipDrop", "SwimLand", "SwimSpinCapStart", "SwimSpinCapStartDoubleDown",
            "SwimSpinCapStartDoubleLeft", "SwimSpinCapStartDoubleRight", "SwimSpinCapStartDoubleUp",
            "SwimSpinCapStartLeft", "SwimSpinCapStartRight", "SwimSquat", "SwimSquatWalk",
            "SwimStand", "SwimStandMove", "SwimStandSurface", "SwimStandWait", "SwimSurface",
            "SwimTalkWait", "SwimTrample", "SwimTrampoline", "SwimWait", "SwimWalk", "TalkEnd",
            "TalkTurn", "TalkTurnL90", "TalkTurnR90", "TalkWait", "TestDemoDiverA",
            "TestDemoDiverB", "TestDemoE3001", "TestRunBack", "TestRunFront", "TestRunLeft",
            "TestRunRight", "TestRunWait", "ThrowCap", "ThrowCapJump", "ThrowCapJumpParts",
            "ThrowCapParts", "TouchJump", "TouchJumpLong", "TouchJumpLongSign", "TractorBubbleEmd",
            "TractorBubbleEnd", "TractorBubbleStart", "TractorBubbleWait", "TreeClimb", "TreeFall",
            "Turn", "TurnPoint", "TurnStep", "Wait", "WaitCold", "WaitDemo", "WaitDigPoint",
            "WaitHot", "WaitRelax", "WaitRelaxStart", "WaitVeryCold", "Walk", "WalkDemo",
            "WalkSoft", "WallCatch", "WallCatchEnd", "WallCatchEndFast", "WallCatchEndJump",
            "WallCatchMoveL", "WallCatchMoveR", "WallCatchStart", "WallJump", "WallKeep",
            "WallKeepReverse", "WallLand", "WallSlideL", "WallSlideR", "WarpIn", "WarpOut",
            "WarpWait", "WaterRoadMove", "WearEnd", "WhipAttackEnd", "WhipAttackStart",
            "WhipAttackWait", "WhipWait", "WorldWarpBind", "WorldWarpBindStart", "WorldWarpIn",
            "WorldWarpOut",
            // Capture Anims
            "BubbleCannonJump", "Down", "HackCancelJump", "HackHighJump", "HackJump", "HackStart",
            "HackStartDown", "HackWait", "HackWaitSpeedy", "LandFrontDown", "LandFrontUp",
            "MoveSpeedy", "Up", "Angry", "AppearSign", "AppearStart", "AttackSuccess", "Blow",
            "BlowDown", "Clash", "Coverd", "DamageCap", "Find", "HackCharge", "HackChargeFull",
            "HackChargeTurn", "HackRunCoverd", "PressDown", "RunCoverd", "RunNaked", "Swoon",
            "SwoonEnd", "SwoonStart", "Trampled", "TrampledEnd", "TurnCoverd", "TurnNaked",
            "BlowEnd", "BlowSign", "BlowStart", "BlowWide", "Reaction", "Charge", "ChargeStart",
            "Dummy", "Idle", "ReactionCap", "ReactionCapSand", "ReactionJump", "ReactionJumpSand",
            "RunHack", "RunStartHack", "WaitHack", "Attack", "AttackHit", "AttackSecond",
            "AttackSecondSign", "AttackSign", "HackAttack", "HackAttackJump", "HackAttackMiss",
            "HackAttackQuick", "HackJumpEnd", "HackJumpHigh", "JumpEnd", "JumpStart",
            "PressDownBlow", "PressDownPress", "SwoonStartLand", "HighFall", "HighJump", "LandSwim",
            "NpcFall", "NpcJump", "NpcJumpStart", "RunFast", "RunSlow", "RunStay", "Swim",
            "SwimHackStart", "SwimReaction", "SwimSwoon", "SwimSwoonEnd", "SwimSwoonStart",
            "SwimSwoonStartLand", "SwoonStartFall", "UpperPunch", "Appear", "Shot", "SwoonTrampled",
            "AttackEnd", "AttackStart", "MoveEnd", "MoveStart", "Recover", "Trample", "Expand",
            "ExpandAir", "ExpandEnemy", "ExpandSign", "ExpandSignEnemy", "ExpandWait",
            "ExpandWaitEnd", "Hold", "Shrink", "ShrinkAir", "ShrinkReactionHead",
            "ShrinkReactionHip", "TurnEnemy", "TurnHack", "WaitAir", "FallNormal", "Glide",
            "GlideDrop", "GlideL", "GlideLStart", "GlideR", "GlideRStart", "GlideRise",
            "GlideStart", "HackEnd", "HackEndFly", "JumpEndNormal", "ReactionTrampled", "Talk",
            "WaitNormal", "WaitSandSink", "AttackTrample", "AttackUp", "Break", "BreakGroundHit",
            "BreakReaction", "BreakWait", "FallFly", "Fly", "FlyChase", "FlyWait", "RecoverSign",
            "Boost", "BoostStart", "Explosion", "FallDown", "FlyWaitStart", "Standby", "Turbo",
            "AttackTower", "DashTower", "DashTowerBottom", "FallTower", "FindTower", "HackEndTower",
            "JumpTower", "LandTower", "Miss", "MissTower", "PressDownTower", "Reset", "RideOn",
            "RideOnTower", "RunTower", "RunTowerBottom", "SandGeyser", "SandGeyserTower",
            "SandWaitTower", "SandWalkTower", "SlideTower", "SwoonLoop", "WaitTower", "WalkTower",
            "WalkTowerBottom", "EnemyRun", "HackRun", "Choke", "ChokeEnd", "ChokeStart",
            "HackStartChoke", "Look", "Swallow", "SwoonChoke", "SwoonEndChoke", "SwoonStartChoke",
            "Vomit", "WaitChoke", "DashR", "FishingUp", "FishingUpGold", "JumpGround",
            "ReactionWall", "RollingRail", "RollingRailReverse", "RollingReverse", "SwimStart",
            "SwimSurfaceEnemy", "SwimWaitStart", "TurnPlayer", "WaitGround", "AdlibWait",
            "Generate", "JumpEndHigh", "JumpEndLow", "Stretch", "StretchFall", "StretchRun",
            "StretchWait", "UpperObjStart", "UpperObjWait", "BlowDownCommon", "PressDownCommon",
            "Reload", "Shoot", "SwoonReaction", "AttackMove", "AttackMoveForest", "AttackWaitL",
            "AttackWaitR", "DashAfterL", "DashAfterR", "DashL", "EnemyAttack", "EnemyAttackL",
            "EnemyAttackLEnd", "EnemyAttackLStart", "EnemyAttackR", "EnemyAttackREnd",
            "EnemyAttackRStart", "EnemyAttackSign", "EnemyFall", "EnemyFallStart", "EnemyLand",
            "EnemyRunStart", "FindMario", "FootHoldJumpL", "FootHoldJumpR", "FootHoldL",
            "FootHoldR", "HackStartShort", "HackStartWithTurn", "ListPose", "Lost", "MoveTouch",
            "NoticeSniff", "ReactionSeaOfTrees", "RunAfterL", "RunAfterR", "RunL", "RunR",
            "RunStartL", "RunStartR", "SleepReactionHipDrop", "SleepSeaOfTrees",
            "SwoonStartDashClash", "TurnEndL", "TurnEndR", "TurnL180", "TurnL90", "TurnR180",
            "TurnR90", "WaitL", "WaitR", "WaitSniff", "WakeUpSwoonStart", "WalkAfterL",
            "WalkAfterR", "WalkEndL", "WalkEndR", "WalkGroundL", "WalkGroundR", "WalkL", "WalkR",
            "WalkStart", "WalkStartL", "WalkStartR", "AppearBall", "JumpStick", "SpinL", "SpinR",
            "SpinThrustL", "SpinThrustR", "Stick", "StickBendHorizontal", "StickBendVertical",
            "Thrust", "ThrustCancel", "ThrustEnd", "ThrustSign", "ThrustWait", "TrampleDown",
            "AttackPull", "Back", "BackEnd", "BackReturn", "HackDash", "HackDashPull", "HackMove",
            "HackPull", "HackPullStart", "HitAction", "HitEnd", "HoleIn", "Return",
            // All Capture Actions
            "Bubble", "Bull", "Byugo", "BlowStartEnemy", "BlowStartHack", "IdleHack", "Stop",
            "FireBros", "Frog", "HackLand", "HackOff", "HackOn", "NpcLand", "HammerBros", "Imomu",
            "ExpandAirEnemy", "ExpandAirHack", "ExpandHack", "ExpandSignHack", "ShrinkAirHack",
            "ShrinkEnemy", "ShrinkHack", "ShrinkReactionHeadEnemy", "ShrinkReactionHeadHack",
            "ShrinkReactionHipEnemy", "ShrinkReactionHipHack", "Kakku", "FallHack", "KaronWing",
            "EnemyFly", "HackFly", "Killer", "Default", "SignExplosion", "Kuribo", "KuriboWing",
            "PackunFire", "ChokeDefault", "ChokeCap", "Eat", "VomitCap", "VomitDefault",
            "PackunPoison", "EatDown", "Pukupuku", "DashRSurface", "DashRWater", "RollingRSurface",
            "RollingRWater", "RollingLSurface", "RollingLWater", "SwimStartSurface",
            "SwimStartWater", "SwimWaitStartSurface", "SwimWaitStartWater", "SwimWaitSurface",
            "SwimWaitWater", "SwimWaitWaterHack", "SwimWater", "WaitMove", "AdlibWaitMove",
            "RunMove", "FallMove", "JumpEndEnemy", "JumpEndLowHack", "JumpEndHighHack", "Tank",
            "BlowDownCaptureParade", "PressDownCaptureParade", "MoveL", "MoveR", "MoveAfterL",
            "MoveAfterR", "MoveStartL", "MoveStartR", "Tsukkun", "StickBend", "ThrustEnemy",
            "ThrustHack", "ThrustWaitEnemy", "ThrustWaitHack", "Wanwan", "BackChain", "BackDirect",
            "WanwanBig"
    };

    // these ifdefs are really dumb but it makes clangd happy so /shrug
#ifndef ANALYZER
    static constexpr crc32::HashArray s_Hashes(s_Strs);
#endif

    static constexpr Type FindType(std::string_view const& str) {
#ifndef ANALYZER
        return ToType(s_Hashes.FindIndex(str));
#else
        return Type::Unknown;
#endif
    }

    static constexpr const char *FindStr(Type type) {
        const s16 type_ = (s16)type;
        if (0 <= type_ && type_ < s_Strs.size())
            return s_Strs[type_];
        else
            return "";
    }
}