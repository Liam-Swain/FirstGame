#include "Includes.h"

using namespace Wizard;
using namespace UserPlayer;


void Wizard::WizardClass::setWizardLevel(int Level)
{
	this->WizardStats->PlayerLevel = Level;
}
void Wizard::WizardClass::setWizardKillCount(int KillCount)
{
	this->WizardStats->PlayerKillCount = KillCount;
}
void Wizard::WizardClass::setWizardHealth(int Health)
{
	this->WizardStats->PlayerHealth = Health;
}
void Wizard::WizardClass::setWizardMaxHealth(int MaxHealth)
{
	this->WizardStats->PlayerMaxHealth = MaxHealth;
}
void Wizard::WizardClass::setWizardMana(int Mana)
{
	this->WizardStats->PlayerMana = Mana;
}
void Wizard::WizardClass::setWizardMaxMana(int MaxMana)
{
	this->WizardStats->PlayerMaxMana = MaxMana;
}
void Wizard::WizardClass::setWizardDefense(int Defense)
{
	this->WizardStats->PlayerDefense = Defense;
}
void Wizard::WizardClass::setWizardEndurance(double Endurance)
{
	this->WizardStats->PlayerEndurance = Endurance;
}
void Wizard::WizardClass::setWizardSpeed(double Speed)
{
	this->WizardStats->PlayerSpeed = Speed;
}
void Wizard::WizardClass::setWizardPersonality(double Personality)
{
	this->WizardStats->PlayerPersonality = Personality;
}
void Wizard::WizardClass::setWizardLuck(double Luck)
{
	this->WizardStats->PlayerLuck = Luck;
}
void Wizard::WizardClass::setWizardStrength(double Strength)
{
	this->WizardStats->PlayerStrength = Strength;
}
void Wizard::WizardClass::setWizardAccuracy(double Accuracy)
{
	this->WizardStats->PlayerAccuracy = Accuracy;
}

int Wizard::WizardClass::getWizardLevel(UserPlayer::Player* Wiz)
{
	return Wiz->PlayerLevel;
}
int Wizard::WizardClass::getWizardKillCount(UserPlayer::Player* Wiz)
{
	return Wiz->PlayerKillCount;
}
int Wizard::WizardClass::getWizardHealth(UserPlayer::Player* Wiz)
{
	return Wiz->PlayerHealth;
}
int Wizard::WizardClass::getWizardMaxHealth(UserPlayer::Player* Wiz)
{
	return Wiz->PlayerMaxHealth;
}
int Wizard::WizardClass::getWizardMana(UserPlayer::Player* Wiz)
{
	return Wiz->PlayerMana;
}
int Wizard::WizardClass::getWizardMaxMana(UserPlayer::Player* Wiz)
{
	return Wiz->PlayerMaxMana;
}
int Wizard::WizardClass::getWizardDefense(UserPlayer::Player* Wiz)
{
	return Wiz->PlayerDefense;
}
double Wizard::WizardClass::getWizardEndurance(UserPlayer::Player* Wiz)
{
	return Wiz->PlayerEndurance;
}
double Wizard::WizardClass::getWizardSpeed(UserPlayer::Player* Wiz)
{
	return Wiz->PlayerSpeed;
}
double Wizard::WizardClass::getWizardPersonaltiy(UserPlayer::Player* Wiz)
{
	return Wiz->PlayerPersonality;
}
double Wizard::WizardClass::getWizardLuck(UserPlayer::Player* Wiz)
{
	return Wiz->PlayerLuck;
}
double Wizard::WizardClass::getWizardStrength(UserPlayer::Player* Wiz)
{
	return Wiz->PlayerStrength;
}
double Wizard::WizardClass::getWizardAccuracy(UserPlayer::Player* Wiz)
{
	return Wiz->PlayerAccuracy;
}

