#pragma once
#include <Includes.h>

using namespace UserPlayer;



namespace Knight
{
	class KnightClass
	{
	public:
		UserPlayer::Player* KnightStats = new UserPlayer::Player();
		KnightClass() { std::cout << "YOU HAVE CHOSEN THE KNIGHT CLASS" << std::endl; };
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

		int getKnightLevel(UserPlayer::Player* Kni);
		int getKnightKillCount(UserPlayer::Player* Kni);
		int getKnightHealth(UserPlayer::Player* Kni);
		int getKnightMaxHealth(UserPlayer::Player* Kni);
		int getKnightMana(UserPlayer::Player* Kni);
		int getKnightMaxMana(UserPlayer::Player* Kni);
		int getKnightDefense(UserPlayer::Player* Kni);
		double getKnightEndurance(UserPlayer::Player* Kni);
		double getKnightSpeed(UserPlayer::Player* Kni);
		double getKnightPersonaltiy(UserPlayer::Player* Kni);
		double getKnightLuck(UserPlayer::Player* Kni);
		double getKnightStrength(UserPlayer::Player* Kni);
		double getKnightAccuracy(UserPlayer::Player* Kni);
		~KnightClass() { std::cout << "YOU HAVE DIED:(" << std::endl; delete KnightStats; };
	};
}