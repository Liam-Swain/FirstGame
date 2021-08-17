#include "Includes.h"

using namespace Druid;
using namespace UserPlayer;


void Druid::DruidClass::setDruidLevel(int Level)
{
	this->PlayerLevel = Level;
}
void Druid::DruidClass::setDruidKillCount(int KillCount)
{
	this->PlayerKillCount = KillCount;
}
void Druid::DruidClass::setDruidHealth(int Health)
{
	this->PlayerHealth = Health;
}
void Druid::DruidClass::setDruidMaxHealth(int MaxHealth)
{
	this->PlayerMaxHealth = MaxHealth;
}
void Druid::DruidClass::setDruidMana(int Mana)
{
	this->PlayerMana = Mana;
}
void Druid::DruidClass::setDruidMaxMana(int MaxMana)
{
	this->PlayerMaxMana = MaxMana;
}
void Druid::DruidClass::setDruidDefense(int Defense)
{
	this->PlayerDefense = Defense;
}
void Druid::DruidClass::setDruidEndurance(double Endurance)
{
	this->PlayerEndurance = Endurance;
}
void Druid::DruidClass::setDruidSpeed(double Speed)
{
	this->PlayerSpeed = Speed;
}
void Druid::DruidClass::setDruidPersonality(double Personality)
{
	this->PlayerPersonality = Personality;
}
void Druid::DruidClass::setDruidLuck(double Luck)
{
	this->PlayerLuck = Luck;
}
void Druid::DruidClass::setDruidStrength(double Strength)
{
	this->PlayerStrength = Strength;
}
void Druid::DruidClass::setDruidAccuracy(double Accuracy)
{
	this->PlayerAccuracy = Accuracy;
}

int Druid::DruidClass::getDruidLevel()
{
	return PlayerLevel;
}
int Druid::DruidClass::getDruidKillCount()
{
	return PlayerKillCount;
}
int Druid::DruidClass::getDruidHealth()
{
	return PlayerHealth;
}
int Druid::DruidClass::getDruidMaxHealth()
{
	return PlayerMaxHealth;
}
int Druid::DruidClass::getDruidMana()
{
	return PlayerMana;
}
int Druid::DruidClass::getDruidMaxMana()
{
	return PlayerMaxMana;
}
int Druid::DruidClass::getDruidDefense()
{
	return PlayerDefense;
}
double Druid::DruidClass::getDruidEndurance()
{
	return PlayerEndurance;
}
double Druid::DruidClass::getDruidSpeed()
{
	return PlayerSpeed;
}
double Druid::DruidClass::getDruidPersonaltiy()
{
	return PlayerPersonality;
}
double Druid::DruidClass::getDruidLuck()
{
	return PlayerLuck;
}
double Druid::DruidClass::getDruidStrength()
{
	return PlayerStrength;
}
double Druid::DruidClass::getDruidAccuracy()
{
	return PlayerAccuracy;
}

