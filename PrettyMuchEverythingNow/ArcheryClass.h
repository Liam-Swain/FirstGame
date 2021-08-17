#pragma once
#include <Includes.h>

using namespace UserPlayer;



namespace Archer
{
	class ArcherClass : public UserPlayer::Player
	{
	public:
		void LoadArcherInformation();
		ArcherClass() { std::cout << "YOU HAVE PICKED THE ARCHER CLASS" << std::endl; setArcherLevel(1); };
		void setArcherLevel(int Level);
		void setArcherKillCount(int KillCount);
		void setArcherHealth(int Health);
		void setArcherMaxHealth(int MaxHealth);
		void setArcherMaxMana(int MaxMana);
		void setArcherMana(int Mana);
		void setArcherDefense(int Defense);
		void setArcherEndurance(double Endurance);
		void setArcherSpeed(double Speed);
		void setArcherPersonality(double Personality);
		void setArcherLuck(double Luck);
		void setArcherStrength(double Strength);
		void setArcherAccuracy(double Accuracy);

		int getArcherLevel();
		int getArcherKillCount();
		int getArcherHealth();
		int getArcherMaxHealth();
		int getArcherMana();
		int getArcherMaxMana();
		int getArcherDefense();
		double getArcherEndurance();
		double getArcherSpeed();
		double getArcherPersonaltiy();
		double getArcherLuck();
		double getArcherStrength();
		double getArcherAccuracy();
		
		

		void StorePlayerInformation();
		//~ArcherClass() { std::cout << "UH OH YOU HAVE DIED" << std::endl; StorePlayerInformation(); delete ArcherStats; };
	};
}