#include "Includes.h"

using namespace Knight;
using namespace UserPlayer;


void Knight::KnightClass::setKnightLevel(int Level)
{
	this->PlayerLevel = Level;
}
void Knight::KnightClass::setKnightKillCount(int KillCount)
{
	this->PlayerKillCount = KillCount;
}
void Knight::KnightClass::setKnightHealth(int Health)
{
	this->PlayerHealth = Health;
}
void Knight::KnightClass::setKnightMaxHealth(int MaxHealth)
{
	this->PlayerMaxHealth = MaxHealth;
}
void Knight::KnightClass::setKnightMana(int Mana)
{
	this->PlayerMana = Mana;
}
void Knight::KnightClass::setKnightMaxMana(int MaxMana)
{
	this->PlayerMaxMana = MaxMana;
}
void Knight::KnightClass::setKnightDefense(int Defense)
{
	this->PlayerDefense = Defense;
}
void Knight::KnightClass::setKnightEndurance(double Endurance)
{
	this->PlayerEndurance = Endurance;
}
void Knight::KnightClass::setKnightSpeed(double Speed)
{
	this->PlayerSpeed = Speed;
}
void Knight::KnightClass::setKnightPersonality(double Personality)
{
	this->PlayerPersonality = Personality;
}
void Knight::KnightClass::setKnightLuck(double Luck)
{
	this->PlayerLuck = Luck;
}
void Knight::KnightClass::setKnightStrength(double Strength)
{
	this->PlayerStrength = Strength;
}
void Knight::KnightClass::setKnightAccuracy(double Accuracy)
{
	this->PlayerAccuracy = Accuracy;
}

int Knight::KnightClass::getKnightLevel()
{
	return PlayerLevel;
}
int Knight::KnightClass::getKnightKillCount()
{
	return PlayerKillCount;
}
int Knight::KnightClass::getKnightHealth()
{
	return PlayerHealth;
}
int Knight::KnightClass::getKnightMaxHealth()
{
	return PlayerMaxHealth;
}
int Knight::KnightClass::getKnightMana()
{
	return PlayerMana;
}
int Knight::KnightClass::getKnightMaxMana()
{
	return PlayerMaxMana;
}
int Knight::KnightClass::getKnightDefense()
{
	return PlayerDefense;
}
double Knight::KnightClass::getKnightEndurance()
{
	return PlayerEndurance;
}
double Knight::KnightClass::getKnightSpeed()
{
	return PlayerSpeed;
}
double Knight::KnightClass::getKnightPersonaltiy()
{
	return PlayerPersonality;
}
double Knight::KnightClass::getKnightLuck()
{
	return PlayerLuck;
}
double Knight::KnightClass::getKnightStrength()
{
	return PlayerStrength;
}
double Knight::KnightClass::getKnightAccuracy()
{
	return PlayerAccuracy;
}

