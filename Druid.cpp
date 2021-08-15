#include "Includes.h"

using namespace Druid;
using namespace UserPlayer;


void Druid::DruidClass::setDruidLevel(int Level)
{
	this->DruidStats->PlayerLevel = Level;
}
void Druid::DruidClass::setDruidKillCount(int KillCount)
{
	this->DruidStats->PlayerKillCount = KillCount;
}
void Druid::DruidClass::setDruidHealth(int Health)
{
	this->DruidStats->PlayerHealth = Health;
}
void Druid::DruidClass::setDruidMaxHealth(int MaxHealth)
{
	this->DruidStats->PlayerMaxHealth = MaxHealth;
}
void Druid::DruidClass::setDruidMana(int Mana)
{
	this->DruidStats->PlayerMana = Mana;
}
void Druid::DruidClass::setDruidMaxMana(int MaxMana)
{
	this->DruidStats->PlayerMaxMana = MaxMana;
}
void Druid::DruidClass::setDruidDefense(int Defense)
{
	this->DruidStats->PlayerDefense = Defense;
}
void Druid::DruidClass::setDruidEndurance(double Endurance)
{
	this->DruidStats->PlayerEndurance = Endurance;
}
void Druid::DruidClass::setDruidSpeed(double Speed)
{
	this->DruidStats->PlayerSpeed = Speed;
}
void Druid::DruidClass::setDruidPersonality(double Personality)
{
	this->DruidStats->PlayerPersonality = Personality;
}
void Druid::DruidClass::setDruidLuck(double Luck)
{
	this->DruidStats->PlayerLuck = Luck;
}
void Druid::DruidClass::setDruidStrength(double Strength)
{
	this->DruidStats->PlayerStrength = Strength;
}
void Druid::DruidClass::setDruidAccuracy(double Accuracy)
{
	this->DruidStats->PlayerAccuracy = Accuracy;
}

int Druid::DruidClass::getDruidLevel(UserPlayer::Player* Dru)
{
	return Dru->PlayerLevel;
}
int Druid::DruidClass::getDruidKillCount(UserPlayer::Player* Dru)
{
	return Dru->PlayerKillCount;
}
int Druid::DruidClass::getDruidHealth(UserPlayer::Player* Dru)
{
	return Dru->PlayerHealth;
}
int Druid::DruidClass::getDruidMaxHealth(UserPlayer::Player* Dru)
{
	return Dru->PlayerMaxHealth;
}
int Druid::DruidClass::getDruidMana(UserPlayer::Player* Dru)
{
	return Dru->PlayerMana;
}
int Druid::DruidClass::getDruidMaxMana(UserPlayer::Player* Dru)
{
	return Dru->PlayerMaxMana;
}
int Druid::DruidClass::getDruidDefense(UserPlayer::Player* Dru)
{
	return Dru->PlayerDefense;
}
double Druid::DruidClass::getDruidEndurance(UserPlayer::Player* Dru)
{
	return Dru->PlayerEndurance;
}
double Druid::DruidClass::getDruidSpeed(UserPlayer::Player* Dru)
{
	return Dru->PlayerSpeed;
}
double Druid::DruidClass::getDruidPersonaltiy(UserPlayer::Player* Dru)
{
	return Dru->PlayerPersonality;
}
double Druid::DruidClass::getDruidLuck(UserPlayer::Player* Dru)
{
	return Dru->PlayerLuck;
}
double Druid::DruidClass::getDruidStrength(UserPlayer::Player* Dru)
{
	return Dru->PlayerStrength;
}
double Druid::DruidClass::getDruidAccuracy(UserPlayer::Player* Dru)
{
	return Dru->PlayerAccuracy;
}

