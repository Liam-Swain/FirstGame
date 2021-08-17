#pragma once
#include "Includes.h"
#include <iostream>



namespace CreateCharacter
{
	class CreateCharacterState : public GameState::CGameState
	{
	public:
		CreateCharacterState()
		{
		};
		int ClassType;
		void InitGraphics();
		void CleanUp();
		void Pause();
		void Resume();
		int HandleEvents();
		void Update();
		void Draw();
		~CreateCharacterState() {};
		typedef struct CreateCharacterGraphics
		{
			sf::Texture Create;
			sf::Texture ArcherTexture;
			sf::Texture ArcherPicture;
			sf::Texture KnightPicture;
			sf::Texture KnightTextTexture;
			sf::Texture WizardTextTexture;
			sf::Texture WizardPicture;
			sf::Texture DruidTextTexture;
			sf::Texture DruidPicture;
			sf::Sprite CreateSprite;
			sf::Sprite ArcherText;
			sf::Sprite ArcherPictureSprite;
			sf::Sprite KnightPictureSprite;
			sf::Sprite KnightTextSprite;
			sf::Sprite WizardTextSprite;
			sf::Sprite WizardPictureSprite;
			sf::Sprite DruidTextSprite;
			sf::Sprite DruidPictureSprite;
		}CreateCharacterGraphics;

		CreateCharacterGraphics Character;

	};
}