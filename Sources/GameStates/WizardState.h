#pragma once
#pragma once
#include "Includes.h"
#include <iostream>


namespace WizardState
{
	class WizardStateClass : public GameState::CGameState
	{
	public:
		UserPlayer::Player* Class;
		int ClassType;
		WizardStateClass(UserPlayer::Player* Class, int ClassType)
		{ 
			this->Class = Class;
			this->ClassType = ClassType;
		};


		void InitGraphics();
		void CleanUp();
		void Pause();
		void Resume();
		int HandleEvents();
		void Update();
		void Draw();
		//~WizardStateClass() {};
		sf::Uint8 Colors[3];
		sf::Uint8 RGB[3];

		typedef struct Graphics
		{
			sf::Texture WizardClassTexture;
			sf::Texture WizardPersonTexture;
			sf::Texture ChooseColor;
			sf::Texture ChangeClass;
			sf::Sprite WizardClassSprite;
			sf::Sprite WizardPersonSprite;
			sf::Sprite ChooseSprite;
			sf::Sprite ChangeClassSprite;
			sf::Font font;
			sf::Text ColorText;
			sf::Text HealthText;
			sf::Text ManaText;
			sf::Text Defensetext;


			sf::RectangleShape Outline;
		}Graphics;

		Graphics ClassGraphics;

	};
}