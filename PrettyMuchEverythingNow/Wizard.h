#pragma once
#include <Includes.h>

using namespace UserPlayer;



namespace Wizard
{
	class WizardClass : public UserPlayer::Player
	{
	public:
		WizardClass() { std::cout << "YOU HAVE CHOSEN THE WIZARD CLASS" << std::endl; };
		void setWizardLevel(int Level);
		void setWizardKillCount(int KillCount);
		void setWizardHealth(int Health);
		void setWizardMaxHealth(int MaxHealth);
		void setWizardMaxMana(int MaxMana);
		void setWizardMana(int Mana);
		void setWizardDefense(int Defense);
		void setWizardEndurance(double Endurance);
		void setWizardSpeed(double Speed);
		void setWizardPersonality(double Personality);
		void setWizardLuck(double Luck);
		void setWizardStrength(double Strength);
		void setWizardAccuracy(double Accuracy);

		int getWizardLevel();
		int getWizardKillCount();
		int getWizardHealth();
		int getWizardMaxHealth();
		int getWizardMana();
		int getWizardMaxMana();
		int getWizardDefense();
		double getWizardEndurance();
		double getWizardSpeed();
		double getWizardPersonaltiy();
		double getWizardLuck();
		double getWizardStrength();
		double getWizardAccuracy();
		//~WizardClass() { std::cout << "UH OH YOU HAVE DIED" << std::endl; delete WizardStats; };
	};
}
