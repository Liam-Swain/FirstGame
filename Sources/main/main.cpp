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
ArcherState::ArcherStateClass ArcherPlayer(&arch, 1);
KnightState::KnightStateClass KnightPlayer(&knight, 2);
DruidState::DruidStateClass DruidPlayer(&druid, 4);


StartGame::StartGameState BegGameState;

sf::Uint8 PersonColors[3];
sf::Uint8 White[3] = { 255, 255, 255 };

void BegGame(int QuitGame, int ClassType)
{
	
	QuitGame = 1;
	if (QuitGame == 1)
	{
		if (ClassType == 1)
		{
			Game.SetGameState(&BegGameState, &arch, PersonColors, 1);
			Game.Init("PLAY GAME STATE", &BegGameState);
		}
		else if (ClassType == 2)
		{
			Game.SetGameState(&BegGameState, &knight, PersonColors, 2);
			Game.Init("PLAY GAME STATE", &BegGameState);
		}
		else if (ClassType == 3)
		{
			Game.SetGameState(&BegGameState, &wizard, PersonColors, 3);
			Game.Init("PLAY GAME STATE", &BegGameState);
		}
		else if (ClassType == 4)
		{
			Game.SetGameState(&BegGameState, &druid, PersonColors, 4);
			Game.Init("PLAY GAME STATE", &BegGameState);
		}
	}
}

void SetGame(int QuitGame)
{
	if (QuitGame == 0)
	{
		Game.running = false;
	}

	if (QuitGame == 1)
	{
		Game.SetGameState(&Character, NULL, &White[3], 0);
		Game.Init("LIAMS CHARACTER STATE", &Character);
	}

	if (QuitGame == 2)
	{

		if (Character.ClassType == 1)
		{
			Game.SetGameState(&ArcherPlayer, NULL, &White[3], 0);
			Game.Init("Create Archer Class", &ArcherPlayer);
		}
		if (Character.ClassType == 2)
		{
			Game.SetGameState(&KnightPlayer, NULL, &White[3], 0);
			Game.Init("Create Archer Class", &KnightPlayer);
			
		}
		if (Character.ClassType == 3)
		{
			Game.SetGameState(&WizardPlayer, NULL, &White[3], 0);
			Game.Init("Create Wizard Class", &WizardPlayer);
		}

		if (Character.ClassType == 4)
		{
			Game.SetGameState(&DruidPlayer, NULL, &White[3], 0);
			Game.Init("Create Wizard Class", &DruidPlayer);
		}
	}

	if (QuitGame == 3)
	{
		Character.ClassType = -1;
		Game.SetGameState(&Character, NULL, &White[3], 0);
		Game.Init("Character Selection State", &Character);
	}

	if (QuitGame == 4)
	{
		if (Character.ClassType == 1)
		{
			for (int i = 0; i < 3; i++)
			{
				PersonColors[i] = ArcherPlayer.Colors[i];
			}
		}

		if (Character.ClassType == 2)
		{
			for (int i = 0; i < 3; i++)
			{
				PersonColors[i] = KnightPlayer.Colors[i];
			}
		}

		if (Character.ClassType == 3)
		{
			for (int i = 0; i < 3; i++)
			{
				PersonColors[i] = WizardPlayer.Colors[i];
			}
		}

		if (Character.ClassType == 4)
		{
			for (int i = 0; i < 3; i++)
			{
				PersonColors[i] = DruidPlayer.Colors[i];
			}
		}

		std::cout << "STARTING GAME" << std::endl;
		BegGame(QuitGame, Character.ClassType);
	}
}

int main()
{
	int QuitGame = -1;
	
	Game.Init("LIAMS GAME ENGINE", &title);
	Game.SetGameState(&title, NULL, &White[3], 0);

	while (Game.Running())
	{
		QuitGame = Game.HandleEvnets();
		Game.Update();
		Game.Draw();
		
		SetGame(QuitGame);
		

	}

	return 0;
}