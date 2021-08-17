#include "Includes.h"

using namespace Wizard;
using namespace UserPlayer;


void Wizard::WizardClass::setWizardLevel(int Level)
{
	this->PlayerLevel = Level;
}
void Wizard::WizardClass::setWizardKillCount(int KillCount)
{
	this->PlayerKillCount = KillCount;
}
void Wizard::WizardClass::setWizardHealth(int Health)
{
	this->PlayerHealth = Health;
}
void Wizard::WizardClass::setWizardMaxHealth(int MaxHealth)
{
	this->PlayerMaxHealth = MaxHealth;
}
void Wizard::WizardClass::setWizardMana(int Mana)
{
	this->PlayerMana = Mana;
}
void Wizard::WizardClass::setWizardMaxMana(int MaxMana)
{
	this->PlayerMaxMana = MaxMana;
}
void Wizard::WizardClass::setWizardDefense(int Defense)
{
	this->PlayerDefense = Defense;
}
void Wizard::WizardClass::setWizardEndurance(double Endurance)
{
	this->PlayerEndurance = Endurance;
}
void Wizard::WizardClass::setWizardSpeed(double Speed)
{
	this->PlayerSpeed = Speed;
}
void Wizard::WizardClass::setWizardPersonality(double Personality)
{
	this->PlayerPersonality = Personality;
}
void Wizard::WizardClass::setWizardLuck(double Luck)
{
	this->PlayerLuck = Luck;
}
void Wizard::WizardClass::setWizardStrength(double Strength)
{
	this->PlayerStrength = Strength;
}
void Wizard::WizardClass::setWizardAccuracy(double Accuracy)
{
	this->PlayerAccuracy = Accuracy;
}

int Wizard::WizardClass::getWizardLevel()
{
	return PlayerLevel;
}
int Wizard::WizardClass::getWizardKillCount()
{
	return PlayerKillCount;
}
int Wizard::WizardClass::getWizardHealth()
{
	return PlayerHealth;
}
int Wizard::WizardClass::getWizardMaxHealth()
{
	return PlayerMaxHealth;
}
int Wizard::WizardClass::getWizardMana()
{
	return PlayerMana;
}
int Wizard::WizardClass::getWizardMaxMana()
{
	return PlayerMaxMana;
}
int Wizard::WizardClass::getWizardDefense()
{
	return PlayerDefense;
}
double Wizard::WizardClass::getWizardEndurance()
{
	return PlayerEndurance;
}
double Wizard::WizardClass::getWizardSpeed()
{
	return PlayerSpeed;
}
double Wizard::WizardClass::getWizardPersonaltiy()
{
	return PlayerPersonality;
}
double Wizard::WizardClass::getWizardLuck()
{
	return PlayerLuck;
}
double Wizard::WizardClass::getWizardStrength()
{
	return PlayerStrength;
}
double Wizard::WizardClass::getWizardAccuracy()
{
	return PlayerAccuracy;
}

