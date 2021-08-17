#pragma once
#include <iostream>
#include <vector>
#include <SFML/Graphics.hpp>
#include "player/Player.h"
namespace GameState
{
	class CGameState;
}

namespace GameEngine
{
	class CGameEngine
	{
	public:
		void Init(std::string name, GameState::CGameState* State); // Load player in
		void CleanUp(); // Store player information
		GameState::CGameState* CurrentState;
		void SetGameState(GameState::CGameState* State, UserPlayer::Player* Character);
		GameState::CGameState* GetGameState();

		int HandleEvnets();
		void Update();
		void Draw();
		bool Running() { return running; };
		void Quit() { running = false; };
		bool running;
	private:
		std::vector<GameState::CGameState*> Games;
		
	};
}