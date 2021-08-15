#pragma once
#include <Includes.h>

using namespace UserPlayer;



namespace Wizard
{
	class WizardClass
	{
	public:
		UserPlayer::Player* WizardStats = new UserPlayer::Player();
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

		int getWizardLevel(UserPlayer::Player* Wiz);
		int getWizardKillCount(UserPlayer::Player* Wiz);
		int getWizardHealth(UserPlayer::Player* Wiz);
		int getWizardMaxHealth(UserPlayer::Player* Wiz);
		int getWizardMana(UserPlayer::Player* Wiz);
		int getWizardMaxMana(UserPlayer::Player* Wiz);
		int getWizardDefense(UserPlayer::Player* Wiz);
		double getWizardEndurance(UserPlayer::Player* Wiz);
		double getWizardSpeed(UserPlayer::Player* Wiz);
		double getWizardPersonaltiy(UserPlayer::Player* Wiz);
		double getWizardLuck(UserPlayer::Player* Wiz);
		double getWizardStrength(UserPlayer::Player* Wiz);
		double getWizardAccuracy(UserPlayer::Player* Wiz);
		~WizardClass() { std::cout << "UH OH YOU HAVE DIED" << std::endl; delete WizardStats; };
	};
}
