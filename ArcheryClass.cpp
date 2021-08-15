#include "Includes.h"

using namespace Archer;
using namespace UserPlayer;


void Archer::ArcherClass::setArcherLevel(int Level)
{
	this->ArcherStats->PlayerLevel = Level;
}
void Archer::ArcherClass::setArcherKillCount(int KillCount)
{
	this->ArcherStats->PlayerKillCount = KillCount;
}
void Archer::ArcherClass::setArcherHealth(int Health)
{
	this->ArcherStats->PlayerHealth = Health;
}
void Archer::ArcherClass::setArcherMaxHealth(int MaxHealth)
{
	this->ArcherStats->PlayerMaxHealth = MaxHealth;
}
void Archer::ArcherClass::setArcherMana(int Mana)
{
	this->ArcherStats->PlayerMana = Mana;
}
void Archer::ArcherClass::setArcherMaxMana(int MaxMana)
{
	this->ArcherStats->PlayerMaxMana = MaxMana;
}
void Archer::ArcherClass::setArcherDefense(int Defense)
{
	this->ArcherStats->PlayerDefense = Defense;
}
void Archer::ArcherClass::setArcherEndurance(double Endurance)
{
	this->ArcherStats->PlayerEndurance = Endurance;
}
void Archer::ArcherClass::setArcherSpeed(double Speed)
{
	this->ArcherStats->PlayerSpeed = Speed;
}
void Archer::ArcherClass::setArcherPersonality(double Personality)
{
	this->ArcherStats->PlayerPersonality = Personality;
}
void Archer::ArcherClass::setArcherLuck(double Luck)
{
	this->ArcherStats->PlayerLuck = Luck;
}
void Archer::ArcherClass::setArcherStrength(double Strength)
{
	this->ArcherStats->PlayerStrength = Strength;
}
void Archer::ArcherClass::setArcherAccuracy(double Accuracy)
{
	this->ArcherStats->PlayerAccuracy = Accuracy;
}

int Archer::ArcherClass::getArcherLevel(UserPlayer::Player* Arch)
{
	return Arch->PlayerLevel;
}
int Archer::ArcherClass::getArcherKillCount(UserPlayer::Player* Arch)
{
	return Arch->PlayerKillCount;
}
int Archer::ArcherClass::getArcherHealth(UserPlayer::Player* Arch)
{
	return Arch->PlayerHealth;
}
int Archer::ArcherClass::getArcherMaxHealth(UserPlayer::Player* Arch)
{
	return Arch->PlayerMaxHealth;
}
int Archer::ArcherClass::getArcherMana(UserPlayer::Player* Arch)
{
	return Arch->PlayerMana;
}
int Archer::ArcherClass::getArcherMaxMana(UserPlayer::Player* Arch)
{
	return Arch->PlayerMaxMana;
}
int Archer::ArcherClass::getArcherDefense(UserPlayer::Player* Arch)
{
	return Arch->PlayerDefense;
}
double Archer::ArcherClass::getArcherEndurance(UserPlayer::Player* Arch)
{
	return Arch->PlayerEndurance;
}
double Archer::ArcherClass::getArcherSpeed(UserPlayer::Player* Arch)
{
	return Arch->PlayerSpeed;
}
double Archer::ArcherClass::getArcherPersonaltiy(UserPlayer::Player* Arch)
{
	return Arch->PlayerPersonality;
}
double Archer::ArcherClass::getArcherLuck(UserPlayer::Player* Arch)
{
	return Arch->PlayerLuck;
}
double Archer::ArcherClass::getArcherStrength(UserPlayer::Player* Arch)
{
	return Arch->PlayerStrength;
}
double Archer::ArcherClass::getArcherAccuracy(UserPlayer::Player* Arch)
{
	return Arch->PlayerAccuracy;
}

