#pragma once
#include "Includes.h"
#include <iostream>


namespace TitleScreen
{
	class TitleScreenState : public GameState::CGameState
	{
	public:
		TitleScreenState() { };
		
		void InitGraphics();
		void CleanUp();
		void Pause();
		void Resume();
		int HandleEvents();
		void Update();
		void Draw();
		~TitleScreenState() {};
		typedef struct TitleScreenGraphics
		{
			sf::CircleShape shape;
			sf::Texture texture;
			sf::Texture CreateCharacter;
			sf::Texture QuitTexture;
			sf::Texture MadeTexture;
			sf::Sprite Titlesprite;
			sf::Sprite Character;
			sf::Sprite QuitSprite;
			sf::Sprite MadeBySprite;
		}TitleScreenGraphics;

		TitleScreenGraphics Title;

	};
}
