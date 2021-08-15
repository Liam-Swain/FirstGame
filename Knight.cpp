#include "Includes.h"

using namespace Knight;
using namespace UserPlayer;


void Knight::KnightClass::setKnightLevel(int Level)
{
	this->KnightStats->PlayerLevel = Level;
}
void Knight::KnightClass::setKnightKillCount(int KillCount)
{
	this->KnightStats->PlayerKillCount = KillCount;
}
void Knight::KnightClass::setKnightHealth(int Health)
{
	this->KnightStats->PlayerHealth = Health;
}
void Knight::KnightClass::setKnightMaxHealth(int MaxHealth)
{
	this->KnightStats->PlayerMaxHealth = MaxHealth;
}
void Knight::KnightClass::setKnightMana(int Mana)
{
	this->KnightStats->PlayerMana = Mana;
}
void Knight::KnightClass::setKnightMaxMana(int MaxMana)
{
	this->KnightStats->PlayerMaxMana = MaxMana;
}
void Knight::KnightClass::setKnightDefense(int Defense)
{
	this->KnightStats->PlayerDefense = Defense;
}
void Knight::KnightClass::setKnightEndurance(double Endurance)
{
	this->KnightStats->PlayerEndurance = Endurance;
}
void Knight::KnightClass::setKnightSpeed(double Speed)
{
	this->KnightStats->PlayerSpeed = Speed;
}
void Knight::KnightClass::setKnightPersonality(double Personality)
{
	this->KnightStats->PlayerPersonality = Personality;
}
void Knight::KnightClass::setKnightLuck(double Luck)
{
	this->KnightStats->PlayerLuck = Luck;
}
void Knight::KnightClass::setKnightStrength(double Strength)
{
	this->KnightStats->PlayerStrength = Strength;
}
void Knight::KnightClass::setKnightAccuracy(double Accuracy)
{
	this->KnightStats->PlayerAccuracy = Accuracy;
}

int Knight::KnightClass::getKnightLevel(UserPlayer::Player* Kni)
{
	return Kni->PlayerLevel;
}
int Knight::KnightClass::getKnightKillCount(UserPlayer::Player* Kni)
{
	return Kni->PlayerKillCount;
}
int Knight::KnightClass::getKnightHealth(UserPlayer::Player* Kni)
{
	return Kni->PlayerHealth;
}
int Knight::KnightClass::getKnightMaxHealth(UserPlayer::Player* Kni)
{
	return Kni->PlayerMaxHealth;
}
int Knight::KnightClass::getKnightMana(UserPlayer::Player* Kni)
{
	return Kni->PlayerMana;
}
int Knight::KnightClass::getKnightMaxMana(UserPlayer::Player* Kni)
{
	return Kni->PlayerMaxMana;
}
int Knight::KnightClass::getKnightDefense(UserPlayer::Player* Kni)
{
	return Kni->PlayerDefense;
}
double Knight::KnightClass::getKnightEndurance(UserPlayer::Player* Kni)
{
	return Kni->PlayerEndurance;
}
double Knight::KnightClass::getKnightSpeed(UserPlayer::Player* Kni)
{
	return Kni->PlayerSpeed;
}
double Knight::KnightClass::getKnightPersonaltiy(UserPlayer::Player* Kni)
{
	return Kni->PlayerPersonality;
}
double Knight::KnightClass::getKnightLuck(UserPlayer::Player* Kni)
{
	return Kni->PlayerLuck;
}
double Knight::KnightClass::getKnightStrength(UserPlayer::Player* Kni)
{
	return Kni->PlayerStrength;
}
double Knight::KnightClass::getKnightAccuracy(UserPlayer::Player* Kni)
{
	return Kni->PlayerAccuracy;
}

