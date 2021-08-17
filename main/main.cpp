#include "Includes.h"
#include <Windows.h>



int main()
{
	int QuitGame = -1;
	GameEngine::CGameEngine Game;
	
	TitleScreen::TitleScreenState title = TitleScreen::TitleScreenState::TitleScreenState();
	CreateCharacter::CreateCharacterState Character = CreateCharacter::CreateCharacterState::CreateCharacterState();
	Game.Init("LIAMS GAME ENGINE", &title);
	Game.SetGameState(&title, NULL);

	while (Game.Running())
	{
		QuitGame = Game.HandleEvnets();
		Game.Update();
		Game.Draw();

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
			std::cout << "ENTERED" << std::endl;
			if (Character.ClassType == 1)
			{
				Archer::ArcherClass Arch;
				Game.SetGameState(&title, &Arch);
				Game.Init("Liams Title Screen", &title);
				std::cout << Arch.getArcherLevel() << std::endl;
			}
			if (Character.ClassType == 2)
			{
				Knight::KnightClass Knight;
				Game.SetGameState(&title, &Knight);
				Game.Init("Liams Title Screen", &title);
			}

			if (Character.ClassType == 3)
			{
				Wizard::WizardClass Wizard;
				Game.SetGameState(&title, &Wizard);
				Game.Init("Liams Title Screen", &title);
			}

			if (Character.ClassType == 4)
			{
				Druid::DruidClass Druid;
				Game.SetGameState(&title, &Druid);
				Game.Init("Liams Title Screen", &title);
			}

		}

	}

	return 0;
}