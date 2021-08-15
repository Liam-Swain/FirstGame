#pragma once
#include <Includes.h>

using namespace UserPlayer;



namespace Druid
{
	class DruidClass
	{
	public:
		UserPlayer::Player* DruidStats = new UserPlayer::Player();
		DruidClass() { std::cout << "YOU HAVE CHOSEN THE DRUID CLASS" << std::endl; };
		void setDruidLevel(int Level);
		void setDruidKillCount(int KillCount);
		void setDruidHealth(int Health);
		void setDruidMaxHealth(int MaxHealth);
		void setDruidMaxMana(int MaxMana);
		void setDruidMana(int Mana);
		void setDruidDefense(int Defense);
		void setDruidEndurance(double Endurance);
		void setDruidSpeed(double Speed);
		void setDruidPersonality(double Personality);
		void setDruidLuck(double Luck);
		void setDruidStrength(double Strength);
		void setDruidAccuracy(double Accuracy);

		int getDruidLevel(UserPlayer::Player* Dru);
		int getDruidKillCount(UserPlayer::Player* Dru);
		int getDruidHealth(UserPlayer::Player* Dru);
		int getDruidMaxHealth(UserPlayer::Player* Dru);
		int getDruidMana(UserPlayer::Player* Dru);
		int getDruidMaxMana(UserPlayer::Player* Dru);
		int getDruidDefense(UserPlayer::Player* Dru);
		double getDruidEndurance(UserPlayer::Player* Dru);
		double getDruidSpeed(UserPlayer::Player* Dru);
		double getDruidPersonaltiy(UserPlayer::Player* Dru);
		double getDruidLuck(UserPlayer::Player* Dru);
		double getDruidStrength(UserPlayer::Player* Dru);
		double getDruidAccuracy(UserPlayer::Player* Dru);
		~DruidClass() { std::cout << "UH OH YOU HAVE DIED:(" << std::endl; delete DruidStats; };
	};
}
