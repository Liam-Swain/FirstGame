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
		
		typedef struct Graphics
		{
			sf::Texture WizardClassTexture;
			sf::Sprite WizardClassSprite;
		}Graphics;

		Graphics ClassGraphics;

	};
}