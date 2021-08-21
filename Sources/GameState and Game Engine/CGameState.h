#pragma once
#include "CGameEngine.h"
#include <SFML/Graphics.hpp>
namespace GameState
{
	class CGameState
	{
	public:
		CGameState() {};
		virtual void InitGraphics(UserPlayer::Player* type, sf::Uint8 Colors[3], int ClassType) = 0;
		virtual void CleanUp() = 0;
		virtual void Pause() = 0;
		virtual void Resume() = 0;
		virtual int HandleEvents() = 0;
		virtual void Update() = 0;
		virtual void Draw() = 0;
		void ChangeState(GameEngine::CGameEngine* game, CGameState* State)
		{
			//game->SetGameState(State);
		};


	};

}