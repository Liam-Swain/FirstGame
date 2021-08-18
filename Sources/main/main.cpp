#include "Includes.h"
#include <Windows.h>

GameEngine::CGameEngine Game;

TitleScreen::TitleScreenState title;
CreateCharacter::CreateCharacterState Character;



Archer::ArcherClass arch;
Knight::KnightClass knight;
Wizard::WizardClass wizard;
Druid::DruidClass druid;
WizardState::WizardStateClass WizardPlayer(&wizard, 3);

void SetGame(int QuitGame)
{
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
			Game.Init("Create Wizard Class", &WizardPlayer);
			std::cout << wizard.getWizardLevel() << std::endl;

		}
	}

	if (QuitGame == 3)
	{
		Character.ClassType = -1;
		Game.SetGameState(&Character, NULL);
		Game.Init("Character Selection State", &Character);
	}
}

int main()
{
	int QuitGame = -1;
	
	Game.Init("LIAMS GAME ENGINE", &title);
	Game.SetGameState(&title, NULL);

	while (Game.Running())
	{
		Game.Draw();
		QuitGame = Game.HandleEvnets();
		Game.Update();
		
		SetGame(QuitGame);
		

	}

	return 0;
}