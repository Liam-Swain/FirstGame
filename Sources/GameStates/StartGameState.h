#pragma once
#include "Includes.h"
#include <iostream>


namespace StartGame
{
	class StartGameState : public GameState::CGameState
	{
	public:
		UserPlayer::Player* Class;
		GameState::CGameState* TypeOfClass;
		int ClassType;
		StartGameState()
		{};

		Item::ItemsClass items[10];

		void InitGraphics(UserPlayer::Player* type, sf::Uint8 Colors[3], int ClassType);
		void CleanUp();
		void Pause();
		void Resume();
		int HandleEvents();
		void Update();
		void Draw();
		//~StartGameState() {};
		
		sf::Uint8 Colors[3];
		sf::Uint8 Alpha;

		std::string introducionText;
		std::string text;
		bool addName = false;
		bool typeName = false;
		bool begIntroduction = true;
		bool EnterPressed = false;
		bool AlphaNumber = false;
		bool DrawClassInformationToScreen = false;
		typedef struct Graphics
		{
			sf::Image SayBoxImage;
			sf::Image CharacterImage;
			sf::Texture SayBoxTexture;
			sf::Texture CharacterTexture;
			sf::Sprite SayBoxSprite;
			sf::Sprite CharacterSprite;
			sf::Font font;
			sf::Text introduction;
			sf::Text ClassInformation;
			sf::Text ClassItems;
			sf::Text TextBoxForItems;
			sf::RectangleShape shape;
		}Graphics;

		sf::Vector2f mousePos;
		Graphics graphics;

	};
	
}