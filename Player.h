#pragma once
#include "Includes.h"


namespace UserPlayer {

	class Player
	{
	public:
		Player() { std::cout << "THANK YOU FOR PLAYING THE GAME" << std::endl; };
		~Player() { std::cout << "Thanks for being a retard" << std::endl; };
		int PlayerLevel;
		int PlayerKillCount;
		int PlayerHealth;
		int PlayerMaxHealth;
		int PlayerMana;
		int PlayerMaxMana;
		int PlayerDefense;
		double PlayerLocationOnMap;
		double PlayerEndurance;
		double PlayerSpeed;
		double PlayerPersonality;
		double PlayerLuck;
		double PlayerStrength;
		double PlayerAccuracy;

	};
}
