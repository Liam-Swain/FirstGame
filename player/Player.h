#pragma once
#include "PrettyMuchEverythingNow/Items.h"


namespace UserPlayer {

	class Player
	{
	public:
		Player() { std::cout << "THANK YOU FOR PLAYING THE GAME" << std::endl; };
		//~Player() { std::cout << "Thanks for being a retard" << std::endl; };
		std::vector<Item::ItemsClass> PlayerItems;
		int PlayerLevel;
		int PlayerXP;
		int PlayerTotalXP;
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