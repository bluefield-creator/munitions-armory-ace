class cfgAmmo
{
    class Default;
    class MissileBase;
    class MissileCore; // External class reference
    class M_PG_AT;
    class DAGR_ammo_Switchblade : M_PG_AT
    {
        manualControl = 0; // Turn off vanilla crosshair guidance
        class ace_missileguidance
        {
            enabled = 1; // Explicit enabling of the system

            pitchRate = 40; // How many degrees/second the missile can pitch
            yawRate = 40;   // Ho   w many degrees/second this missile can yaw

            canVanillaLock = 0; // Can this default vanilla lock? Only applicable to non-cadet mode

            // Guidance type for munitions
            defaultSeekerType = "SALH"; // Default seeker type
            seekerTypes[] = {"SALH"};

            defaultSeekerLockMode = "LOBL"; // Default lock mode
            seekerLockModes[] = {"LOBL"};

            defaultNavigationType = "ProportionalNavigation";
            navigationTypes[] = {"ProportionalNavigation"};

            seekerAngle = 30;   // ° FOV of the laser seeker head
            seekerAccuracy = 1; // multiplier for in‑game accuracy

            seekerMinRange = 1500;  
            seekerMaxRange = 12000;

            // Attack profile type selection
            defaultAttackProfile = "LIN";                   // Default attack profile
            attackProfiles[] = {"LIN", "DIR", "MID", "HI"}; // Possible attack profiles
        };
    };

    class BombCore; // External class reference
    class LaserBombCore;
    class ammo_Bomb_LaserGuidedBase : LaserBombCore
    {
        manualControl = 0; // Turn off vanilla crosshair guidance
        airFriction = 1; 
        class ace_missileguidance
        {
            enabled = 1;

            pitchRate = 5;
            yawRate = 5;

            bangBangGuidance = 1;
            stabilityCoefficient = 0.4; // how much this projectile likes to "weathervane" (keep direction toward velocity)

            canVanillaLock = 0; // Can this default vanilla lock? Only applicable to non-cadet mode

            // Guidance type for munitions
            defaultSeekerType = "SALH";
            seekerTypes[] = {"SALH"};

            defaultSeekerLockMode = "LOAL";
            seekerLockModes[] = {"LOAL"};

            defaultNavigationType = "Direct";
            navigationTypes[] = {"Direct"};

            seekLastTargetPos = 1; // seek last target position [if seeker loses LOS of target, continue to last known pos]
            seekerAngle = 60;      // Angle from the shooter's view that can track the missile
            seekerAccuracy = 1;    // seeker accuracy multiplier

            seekerMinRange = 5;
            seekerMaxRange = 4000; // Range from the missile which the seeker can visually search

            // Attack profile type selection
            defaultAttackProfile = "DIR";
            attackProfiles[] = {"DIR"};
        };
    };
    class Bo_GBU12_LGB;
    class WNZ_SGBU12_ammo: Bo_GBU12_LGB {
                manualControl = 0; // Turn off vanilla crosshair guidance
		maxSpeed = 3000;

        class ace_missileguidance
        {
            enabled = 1;

            pitchRate = 5;
            yawRate = 5;

            bangBangGuidance = 1;
            stabilityCoefficient = 0.4; // how much this projectile likes to "weathervane" (keep direction toward velocity)

            canVanillaLock = 0; // Can this default vanilla lock? Only applicable to non-cadet mode

            // Guidance type for munitions
            defaultSeekerType = "SALH";
            seekerTypes[] = {"SALH"};

            defaultSeekerLockMode = "LOAL";
            seekerLockModes[] = {"LOAL"};

            defaultNavigationType = "Direct";
            navigationTypes[] = {"Direct"};

            seekLastTargetPos = 1; // seek last target position [if seeker loses LOS of target, continue to last known pos]
            seekerAngle = 60;      // Angle from the shooter's view that can track the missile
            seekerAccuracy = 1;    // seeker accuracy multiplier

            seekerMinRange = 5;
            seekerMaxRange = 4000; // Range from the missile which the seeker can visually search

            // Attack profile type selection
            defaultAttackProfile = "DIR";
            attackProfiles[] = {"DIR"};
        };
    };


    class ammo_Missile_ShortRangeAABase;
    class ammo_Missile_BIM9X : ammo_Missile_ShortRangeAABase { 
         manualControl = 0; 
		maxSpeed = 3000;
		missileLockMaxDistance = 35000;
		missileLockMinDistance = 500;
        class ace_missileguidance
        {
            pitchRate           = 100;     
            yawRate             = 100;

            canVanillaLock      = 1;      

            // Guidance type
            defaultSeekerType   = "Thermal";              
            seekerTypes[]       = {"Thermal"};

            defaultSeekerLockMode = "LOBL";         
            seekerLockModes[]     = {"LOBL"};   

            defaultNavigationType = "ProportionalNavigation"; 
            navigationTypes[]     = {"ProportionalNavigation"};

            seekerAngle         = 90;     
            seekerAccuracy      = 1;  
            seekerMinRange      = 500; 
            seekerMaxRange      = 35000; 

            // Attack profiles
            defaultAttackProfile = "HI";         
            attackProfiles[]     = {"HI"};   

        };
    };

    class micro_ammo_Missile_BIM9X: ammo_Missile_BIM9X
	{

		missileLockMaxDistance = 35000;
		missileLockMinDistance = 500;

        class ace_missileguidance
        {
            pitchRate           = 100;     
            yawRate             = 100;

            canVanillaLock      = 1;      

            // Guidance type
            defaultSeekerType   = "Thermal";              
            seekerTypes[]       = {"Thermal"};

            defaultSeekerLockMode = "LOBL";         
            seekerLockModes[]     = {"LOBL"};   

            defaultNavigationType = "ProportionalNavigation"; 
            navigationTypes[]     = {"ProportionalNavigation"};

            seekerAngle         = 120;     
            seekerAccuracy      = 0.9;  
            seekerMinRange      = 500; 
            seekerMaxRange      = 35000; 

            // Attack profiles
            defaultAttackProfile = "HI";         
            attackProfiles[]     = {"HI"};   

        };
	};
    
};