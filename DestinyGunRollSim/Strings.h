#ifndef STRINGS_H
#define STRINGS_H

#include <string>

//**********STANDARD GENERIC OUTPUTS**********//

// ALERTS...
const std::string alertError = "ERROR: ";
const std::string alertInvalidInput = "INVALID INPUT \nPlease Try Again...\n";
const std::string alertWarning = "WARNING: ";

// PROMPTS...
const std::string promptContinue = "\nPress ENTER to continue...";
const std::string promptExit = "Press ENTER to exit.\n";
const std::string promptInput = "INPUT: ";


// IOSTREAM UTILITIES...
const std::string clearTerminal = "\033[2J\033[1;1H";	// Clears the terminal.



//**********PROGRAM-SPECIFIC OUTPUTS**********//

// ASCII ART...

// PROMPTS...
const std::string promptDoRestart = "Excellent, Guardian! I'll se you on the battlefield!\n";
const std::string promptDontRestart = "That's too bad... See you later, Guardian.\n";
const std::string promptEnjoy = "I hope you enjoy this as much as I do, Guardian!\n\n";
const std::string promptHeresYourWeapon = "Here's your weapon!\n\n";
const std::string promptGoAgain = "Would you like to go again?\n";
const std::string promptRollWeapon = "Would you like to roll a new weapon? (Y/N)";
const std::string promptTakeCare = "\nTake care, Guardian. You're keeping the city safe.\n";

// NAMES...
    // WEAPONS...
        // PISTOLS...
        const std::string lPistolName = "Hairpin";
        const std::string hPistolName = ".45 Rock";
        
        // RIFLES...
        const std::string lRifleName = "Eye of Azure";
        const std::string hRifleName = "The Church";
        
        // ROCKET LAUNCHERS....
        const std::string lRocketName = "Djenty Boy";
        const std::string hRocketName = "AmacMillion";
        
        // SWORDS...
        const std::string lSwordName = "Event Horizon";
        const std::string hSwordName = "The DaRkLiGhT";
        
    
    // PERKS...
        // PISTOLS...
            // LIGHT PERKS...
            const std::string P_tripleTap = "Tripple Tap";
            const std::string P_desTroy = "Des-Troy";
            const std::string P_hallowedBeThyName = "Hallowed Be Thy Name";
        
            // HEAVY PERKS...
            const std::string P_goldDust = "Gold Dust";
            const std::String P_mustache = "Mustache";
            const std::string P_diamondFire = "Diamond Fire";
        
            // SHARED PERKS...
            const std::string P_percussion = "Percussion";
            const std::string P_funAndGames = "Fun And Games";
            const std::string P_projection = "Projection";
            const std::string P_holdYourHorses = "Hold Your Horses";
         
        // RIFLES...
            // LIGHT PERKS...
            const std::string P_perkName = "";
            const std::string P_perkName = "";
            const std::string P_perkName = "";
        
            // HEAVY PERKS...
            const std::string P_perkName = "";
            const std::string P_perkName = "";
            const std::string P_perkName = "";
        
            // SHARED PERKS...
            const std::string P_perkName = "";
            const std::string P_perkName = "";
            const std::string P_perkName = "";
            const std::string P_perkName = "";
        
        // ROCKET LAUNCHERS...
            const std::string P_perkName = "";
            const std::string P_perkName = "";
            const std::string P_perkName = "";
        
            // HEAVY PERKS...
            const std::string P_perkName = "";
            const std::string P_perkName = "";
            const std::string P_perkName = "";
        
            // SHARED PERKS...
            const std::string P_perkName = "";
            const std::string P_perkName = "";
            const std::string P_perkName = "";
            const std::string P_perkName = "";
        
        // SWORDS...
            const std::string P_perkName = "";
            const std::string P_perkName = "";
            const std::string P_perkName = "";
        
            // HEAVY PERKS...
            const std::string P_perkName = "";
            const std::string P_perkName = "";
            const std::string P_perkName = "";
        
            // SHARED PERKS...
            const std::string P_perkName = "";
            const std::string P_perkName = "";
            const std::string P_perkName = "";
            const std::string P_perkName = "";

#endif
