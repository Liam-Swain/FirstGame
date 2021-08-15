#pragma once
#include <Includes.h>

using namespace UserPlayer;



namespace Archer
{
	class ArcherClass
	{
	public:
		ArcherClass() { std::cout << "YOU HAVE PICKED THE ARCHER CLASS" << std::endl; };
		UserPlayer::Player* ArcherStats = new UserPlayer::Player;
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

		int getArcherLevel(UserPlayer::Player* Arch);
		int getArcherKillCount(UserPlayer::Player* Arch);
		int getArcherHealth(UserPlayer::Player* Arch);
		int getArcherMaxHealth(UserPlayer::Player* Arch);
		int getArcherMana(UserPlayer::Player* Arch);
		int getArcherMaxMana(UserPlayer::Player* Arch);
		int getArcherDefense(UserPlayer::Player* Arch);
		double getArcherEndurance(UserPlayer::Player* Arch);
		double getArcherSpeed(UserPlayer::Player* Arch);
		double getArcherPersonaltiy(UserPlayer::Player* Arch);
		double getArcherLuck(UserPlayer::Player* Arch);
		double getArcherStrength(UserPlayer::Player* Arch);
		double getArcherAccuracy(UserPlayer::Player* Arch);
		~ArcherClass() { std::cout << "UH OH YOU HAVE DIED" << std::endl; delete ArcherStats; };
	};
}