#include "Includes.h"
#include <Windows.h>



int main()
{
	int QuitGame = -1;
	GameEngine::CGameEngine Game;
	
	TitleScreen::TitleScreenState title;
	CreateCharacter::CreateCharacterState Character;
	
	Game.Init("LIAMS GAME ENGINE", &title);
	Game.SetGameState(&title, NULL);

	Archer::ArcherClass Arch;
	Knight::KnightClass Knight;
	Wizard::WizardClass Wizard;
	Druid::DruidClass Druid;
	WizardState::WizardStateClass WizardPlayer(&Wizard, 3);

	while (Game.Running())
	{
		Game.Draw();
		QuitGame = Game.HandleEvnets();
		Game.Update();
		

		if (QuitGame == 0)
		{
			Game.running = false;
		}

		if (QuitGame == 1)
		{
			Game.SetGameState(&Character, NULL);
			Game.Init("LIAMS CHARACTER STATE", &Character);
		}

		if (QuitGame == 2)
		{
			if (Character.ClassType == 3)
			{
				Game.SetGameState(&WizardPlayer, NULL);
				Game.Init("PLS WORK", &WizardPlayer);
				std::cout << Wizard.getWizardLevel() << std::endl;
			}
		}

	}

	return 0;
}