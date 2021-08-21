#pragma once
#include <Includes.h>

using namespace UserPlayer;



namespace Druid
{
	class DruidClass : public UserPlayer::Player
	{
	public:
		DruidClass() { setDruidLevel(1); setDruidHealth(100); setDruidMaxHealth(100); setDruidMana(50); setDruidMaxMana(50); setDruidDefense(15); };
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

		int getDruidLevel();
		int getDruidKillCount();
		int getDruidHealth();
		int getDruidMaxHealth();
		int getDruidMana();
		int getDruidMaxMana();
		int getDruidDefense();
		double getDruidEndurance();
		double getDruidSpeed();
		double getDruidPersonaltiy();
		double getDruidLuck();
		double getDruidStrength();
		double getDruidAccuracy();
		//~DruidClass() { std::cout << "UH OH YOU HAVE DIED:(" << std::endl; delete DruidStats; };
	};
}
