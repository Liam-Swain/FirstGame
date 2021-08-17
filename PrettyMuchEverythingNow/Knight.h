#pragma once
#include <Includes.h>

using namespace UserPlayer;



namespace Knight 
{
	class KnightClass : public UserPlayer::Player
	{
	public:
		KnightClass() { std::cout << "YOU HAVE CHOSEN THE KNIGHT CLASS" << std::endl; setKnightLevel(1); };
		void setKnightLevel(int Level);
		void setKnightKillCount(int KillCount);
		void setKnightHealth(int Health);
		void setKnightMaxHealth(int MaxHealth);
		void setKnightMaxMana(int MaxMana);
		void setKnightMana(int Mana);
		void setKnightDefense(int Defense);
		void setKnightEndurance(double Endurance);
		void setKnightSpeed(double Speed);
		void setKnightPersonality(double Personality);
		void setKnightLuck(double Luck);
		void setKnightStrength(double Strength);
		void setKnightAccuracy(double Accuracy);

		int getKnightLevel();
		int getKnightKillCount();
		int getKnightHealth();
		int getKnightMaxHealth();
		int getKnightMana();
		int getKnightMaxMana();
		int getKnightDefense();
		double getKnightEndurance();
		double getKnightSpeed();
		double getKnightPersonaltiy();
		double getKnightLuck();
		double getKnightStrength();
		double getKnightAccuracy();
		//~KnightClass() { std::cout << "YOU HAVE DIED:(" << std::endl; delete KnightStats; };
	};
}