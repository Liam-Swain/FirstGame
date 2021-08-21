#pragma once
#include "Includes.h"
#include <iostream>


namespace DruidState
{
	class DruidStateClass : public GameState::CGameState
	{
	public:
		UserPlayer::Player* Class;
		int ClassType;
		DruidStateClass(UserPlayer::Player* Class, int ClassType)
		{
			this->Class = Class;
			this->ClassType = ClassType;
		};


		void InitGraphics(UserPlayer::Player* type, sf::Uint8 Colors[3], int ClassType);
		void CleanUp();
		void Pause();
		void Resume();
		int HandleEvents();
		void Update();
		void Draw();
		//~DruidStateClass() {};
		sf::Uint8 Colors[3];
		sf::Uint8 RGB[3];
		bool colorSelected = false;
		typedef struct Graphics
		{
			sf::Texture ChooseColor;
			sf::Texture ChangeClass;
			sf::Texture StartGame;
			sf::Sprite ChooseSprite;
			sf::Sprite ChangeClassSprite;
			sf::Sprite StartGameSprite;

			sf::Font font;
			sf::Text ColorText;
			sf::Text HealthText;
			sf::Text ManaText;
			sf::Text Defensetext;


			sf::RectangleShape Outline;
			sf::RectangleShape Outline2;
		}Graphics;

		Graphics ClassGraphics;

	};
}