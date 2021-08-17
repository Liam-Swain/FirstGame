#include "CGameEngine.h"
#include "CGameState.h"
#include "Includes.h"


void GameEngine::CGameEngine::Init(std::string name, GameState::CGameState* State)
{
	std::cout << name << std::endl;
	GameEngine::CGameEngine::running = true;

	State->InitGraphics();
}


void GameEngine::CGameEngine::CleanUp()
{
}

GameState::CGameState* GameEngine::CGameEngine::GetGameState()
{
	return this->CurrentState;
}
void GameEngine::CGameEngine::SetGameState(GameState::CGameState* State, UserPlayer::Player* Character)
{
	this->CurrentState = State;
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


