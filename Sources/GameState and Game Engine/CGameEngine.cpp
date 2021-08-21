#include "CGameEngine.h"
#include "CGameState.h"
#include "Includes.h"


void GameEngine::CGameEngine::Init(std::string name, GameState::CGameState* State)
{
	std::cout << name << std::endl;
	GameEngine::CGameEngine::running = true;

	State->InitGraphics(this->type, this->Colors, this->ClassType);
}


void GameEngine::CGameEngine::CleanUp()
{
}

GameState::CGameState* GameEngine::CGameEngine::GetGameState()
{
	return this->CurrentState;
}
void GameEngine::CGameEngine::SetGameState(GameState::CGameState* State, UserPlayer::Player* Character, sf::Uint8 colors[3], int type)
{
	this->CurrentState = State;
	this->type = Character;
	this->ClassType = type;
	for (int i = 0; i < 3; i++)
	{
		this->Colors[i] = colors[i];
	}
}

int GameEngine::CGameEngine::HandleEvnets()
{
	GameState::CGameState* game = GetGameState();
	return game->HandleEvents();
}

void GameEngine::CGameEngine::Update()
{
	GameState::CGameState* game = GetGameState();
	game->Update();
}

void GameEngine::CGameEngine::Draw()
{
	GameState::CGameState* game = GetGameState();

	game->Draw();
}


