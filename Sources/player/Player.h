#pragma once
#include "PrettyMuchEverythingNow/Items.h"
#include <iostream>

namespace UserPlayer {

	class Player
	{
	public:
		Player() 
		{
		};
		//~Player() { std::cout << "Thanks for being a retard" << std::endl; };
		std::vector<Item::ItemsClass> PlayerItems;
		std::string PlayerName;
		int PlayerLevel;
		int PlayerXP;
		int PlayerTotalXP;
		int PlayerKillCount;
		int PlayerHealth;
		int PlayerMaxHealth;
		int PlayerMana;
		int PlayerMaxMana;
		int PlayerDefense;
		int PlayerMaxItems;
		double PlayerLocationOnMap;
		double PlayerEndurance;
		double PlayerSpeed;
		double PlayerPersonality;
		double PlayerLuck;
		double PlayerStrength;
		double PlayerAccuracy;

	};
}