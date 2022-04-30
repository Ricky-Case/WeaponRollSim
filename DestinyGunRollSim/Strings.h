#ifndef STRINGS_H
#define STRINGS_H

#include <string>

//**********STANDARD GENERIC OUTPUTS**********//

// ALERTS...
const std::string alertError			= "ERROR: ";
const std::string alertInvalidInput		= "INVALID INPUT \nPlease Try Again... \n";
const std::string alertWarning			= "WARNING: ";

// PROMPTS...
const std::string promptContinue		= "\nPress ENTER to continue...";
const std::string promptExit			= "Press ENTER to exit. \n";
const std::string promptInput			= "INPUT: ";

// CHECKS...
const char yes = 'Y';
const char no = 'N';

// IOSTREAM UTILITIES...
const std::string clearTerminal = "\033[2J\033[1;1H";



//**********PROGRAM-SPECIFIC OUTPUTS**********//

// PROMPTS...
const std::string promptDoRestart				= "Excellent, Guardian! I'll se you on the battlefield! \n";
const std::string promptDontRestart				= "That's too bad... See you later, Guardian. \n";
const std::string promptEnjoy					= "I hope you enjoy this as much as I do, Guardian! \n\n";
const std::string promptGoAgain					= "Would you like to go again? \n";
const std::string promptHeresYourWeapon			= "Here's your weapon! \n\n";
const std::string promptRollWeapon				= "Would you like to roll a new weapon? (Y/N) \n";
const std::string promptTakeCare				= "Take care, Guardian. You're keeping the city safe. \n";

// ASCII ART...
	// PISTOL DESIGN...
	const std::string pistolDesignPart01 =  "   ____|______    \n";
	const std::string pistolDesignPart02 = "   \\__________|=  \n";
	const std::string pistolDesignPart03 =  "      ||\\        \n";

	// COMPOSITE...
	const std::string pistolDesign = (pistolDesignPart01 + pistolDesignPart02 + pistolDesignPart03);

	// RIFLE DESIGN...
	const std::string rifleDesignPart01 =  "          ___               \n";
	const std::string rifleDesignPart02 =  "   ______|___|__________    \n";
	const std::string rifleDesignPart03 = "   \\____________________|=  \n";
	const std::string rifleDesignPart04 =  "        ||\\                \n";

	// COMPOSITE...
	const std::string rifleDesign = (	rifleDesignPart01 + rifleDesignPart02 +
										rifleDesignPart03 + rifleDesignPart04	);

	// ROCKET LAUNCHER DESIGN...
	const std::string rocketLauncherDesignPart01 =   "            _____           \n";
	const std::string rocketLauncherDesignPart02 =   "  _________|     |_______   \n";
	const std::string rocketLauncherDesignPart03 =  "  \\        |     |       |  \n";
	const std::string rocketLauncherDesignPart04 =  "   \\_______|     |_______|  \n";
	const std::string rocketLauncherDesignPart05 =  "       ||\\ |_____|  ||      \n";

	// COMPOSITE...
	const std::string rocketLauncherDesign = (	rocketLauncherDesignPart01 + rocketLauncherDesignPart02 +
												rocketLauncherDesignPart03 + rocketLauncherDesignPart04 +
												rocketLauncherDesignPart05	);

	// SWORD DESIGN...
	const std::string swordDesignPart01 =  "       /\\     \n";
	const std::string swordDesignPart02 =  "      |  |     \n";
	const std::string swordDesignPart03 =  "      |  |     \n";
	const std::string swordDesignPart04 =  "      |  |     \n";
	const std::string swordDesignPart05 =  "      |  |     \n";
	const std::string swordDesignPart06 =  "      |  |     \n";
	const std::string swordDesignPart07 =  "      |  |     \n";
	const std::string swordDesignPart08 =  "      |  |     \n";
	const std::string swordDesignPart09 =  "      |  |     \n";
	const std::string swordDesignPart10 =  "   ___|  |___  \n";
	const std::string swordDesignPart11 = "   \\__|__|__/  \n";
	const std::string swordDesignPart12 =  "       ||      \n";
	const std::string swordDesignPart13 =  "       ||      \n";
	const std::string swordDesignPart14 =  "       ()      \n";

	// COMPOSITE...
	const std::string swordDesign = (	swordDesignPart01 + swordDesignPart02 + swordDesignPart03 +
										swordDesignPart04 + swordDesignPart05 + swordDesignPart06 +
										swordDesignPart07 + swordDesignPart08 + swordDesignPart09 +
										swordDesignPart10 + swordDesignPart11 + swordDesignPart12 +
										swordDesignPart13 + swordDesignPart14	);

// NAMES...
	// WEAPONS...
		// PISTOLS...
			// LIGHT PISTOLS...
			const std::string lPistolName				= "Hairpin";
			// HEAVY PISTOLS...
			const std::string hPistolName				= ".45 Rock";

        // RIFLES...
			// LIGHT RIFLES...
			const std::string lRifleName				= "Eye of Azure";
			// HEAVY RIFLES...
			const std::string hRifleName				= "The Church";

        // ROCKET LAUNCHERS....
			// LIGHT ROCKET LAUNCHERS...
			const std::string lRocketName				= "Djenty Boy";
			// HEAVY ROCKET LAUNCHERS...
			const std::string hRocketName				= "AmacMillion";

        // SWORDS...
			// LIGHT SWORDS...
	        const std::string lSwordName				= "Event Horizon";
			// HEAVY SWORDS...
	        const std::string hSwordName				= "The DaRkLiGhT";


    // PERKS...
		// ALL WEAPONS...
			// LIGHT PERKS...
			const std::string P_hallowedBeThyName		= "Hallowed Be Thy Name";
			const std::string P_playerOne				= "Player One";
			const std::string P_sevenEightNine			= "Seven Eight Nine";

			// SHARED PERKS...
            const std::string P_infiniteWisdom			= "Infinite Wisdom";


        // PISTOLS...
            // LIGHT PERKS...
			const std::string P_desTroy					= "Des-Troy";
            const std::string P_tripleTap				= "Tripple Tap";

            // HEAVY PERKS...
            const std::string P_diamondFire				= "Diamond Fire";
            const std::string P_goldDust				= "Gold Dust";
            const std::string P_mustache				= "Mustache";

            // SHARED PERKS...
            const std::string P_funAndGames				= "Fun And Games";
            const std::string P_holdYourHorses			= "Hold Your Horses";
            const std::string P_percussion				= "Percussion";
            const std::string P_projection				= "Projection";

        // RIFLES...
            // HEAVY PERKS...
            const std::string P_doctorZeus				= "Doctor Zeus";
            const std::string P_intelligentDesign		= "Intelligent Design";
            const std::string P_quantumLeopard			= "Quantumn Leopard";

            // SHARED PERKS...
            const std::string P_hailstorm				= "Hailstorm";
            const std::string P_oneForTheMoney			= "One For The Money";
            const std::string P_orionsBelt				= "Orion's Belt";

        // ROCKET LAUNCHERS...
			// LIGHT PERKS...
            const std::string P_fatMan					= "Fat Man";
            const std::string P_fourtyTwo				= "Fourty Two";

            // HEAVY PERKS...
            const std::string P_ballisticFortitude		= "Ballistic Fortitude";
            const std::string P_chainsmoker				= "Chainsmoker";
            const std::string P_stockhold				= "Stockhold";

            // SHARED PERKS...
            const std::string P_andThenThereWasOne		= "And Then There Was One";
            const std::string P_crowdControl			= "Crowd Control";
            const std::string P_lightningInABottle		= "Lightning In A Bottle";
            const std::string P_treason					= "Treason";

        // SWORDS...
			// LIGHT PERKS...
            const std::string P_doubleEdged				= "Double-Edged";
            const std::string P_thousandCuts			= "Thousand Cuts";

            // HEAVY PERKS...
            const std::string P_harrowingStrike			= "Harrowing Strike";
            const std::string P_puppeteer				= "Puppeteer";
            const std::string P_shadowDancer			= "Shadow Dancer";

            // SHARED PERKS...
            const std::string P_bloodyKnuckles			= "Bloody Knuckles";
            const std::string P_hellbringer				= "Hellbringer";
            const std::string P_occamsRazer				= "Occam's Razor";

#endif
