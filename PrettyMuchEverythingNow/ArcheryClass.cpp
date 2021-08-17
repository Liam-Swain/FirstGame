#include "Includes.h"

using namespace Archer;
using namespace UserPlayer;




bool is_empty(std::ifstream& Information)
{
	return Information.peek() == std::ifstream::traits_type::eof();
}

void Archer::ArcherClass::LoadArcherInformation()
{
	int i = 0;
	std::string GetInfo = "";
	std::ifstream LoadInformation("ArcherClass.txt");
	int arrInt[7];

		while (std::getline(LoadInformation, GetInfo))
		{
			if (!(is_empty(LoadInformation)))
			{
				arrInt[i] = std::stoi(GetInfo);
			}
			i++;
			if (i == 7)
				break;
		}

}

void Archer::ArcherClass::setArcherLevel(int Level)
{
	this->PlayerLevel = Level;
}
void Archer::ArcherClass::setArcherKillCount(int KillCount)
{
	this->PlayerKillCount = KillCount;
}
void Archer::ArcherClass::setArcherHealth(int Health)
{
	this->PlayerHealth = Health;
}
void Archer::ArcherClass::setArcherMaxHealth(int MaxHealth)
{
	this->PlayerMaxHealth = MaxHealth;
}
void Archer::ArcherClass::setArcherMana(int Mana)
{
	this->PlayerMana = Mana;
}
void Archer::ArcherClass::setArcherMaxMana(int MaxMana)
{
	this->PlayerMaxMana = MaxMana;
}
void Archer::ArcherClass::setArcherDefense(int Defense)
{
	this->PlayerDefense = Defense;
}
void Archer::ArcherClass::setArcherEndurance(double Endurance)
{
	this->PlayerEndurance = Endurance;
}
void Archer::ArcherClass::setArcherSpeed(double Speed)
{
	this->PlayerSpeed = Speed;
}
void Archer::ArcherClass::setArcherPersonality(double Personality)
{
	this->PlayerPersonality = Personality;
}
void Archer::ArcherClass::setArcherLuck(double Luck)
{
	this->PlayerLuck = Luck;
}
void Archer::ArcherClass::setArcherStrength(double Strength)
{
	this->PlayerStrength = Strength;
}
void Archer::ArcherClass::setArcherAccuracy(double Accuracy)
{
	this->PlayerAccuracy = Accuracy;
}

int Archer::ArcherClass::getArcherLevel()
{
	return PlayerLevel;
}
int Archer::ArcherClass::getArcherKillCount()
{
	return PlayerKillCount;
}
int Archer::ArcherClass::getArcherHealth()
{
	return PlayerHealth;
}
int Archer::ArcherClass::getArcherMaxHealth()
{
	return PlayerMaxHealth;
}
int Archer::ArcherClass::getArcherMana()
{
	return PlayerMana;
}
int Archer::ArcherClass::getArcherMaxMana()
{
	return PlayerMaxMana;
}
int Archer::ArcherClass::getArcherDefense()
{
	return PlayerDefense;
}
double Archer::ArcherClass::getArcherEndurance()
{
	return PlayerEndurance;
}
double Archer::ArcherClass::getArcherSpeed()
{
	return PlayerSpeed;
}
double Archer::ArcherClass::getArcherPersonaltiy()
{
	return PlayerPersonality;
}
double Archer::ArcherClass::getArcherLuck()
{
	return PlayerLuck;
}
double Archer::ArcherClass::getArcherStrength()
{
	return PlayerStrength;
}
double Archer::ArcherClass::getArcherAccuracy()
{
	return PlayerAccuracy;
}

void Archer::ArcherClass::StorePlayerInformation()
{
	/*std::ofstream ArcherInformation("ArcherClass.txt");
	ArcherInformation << this->ArcherStats->PlayerLevel << "\n" << this->ArcherStats->PlayerKillCount << 
		"\n" << this->ArcherStats->PlayerHealth << "\n" << this->ArcherStats->PlayerMaxHealth << "\n" 
		<< this->ArcherStats->PlayerMana << "\n" << this->ArcherStats->PlayerMaxMana << "\n" 
		<< this->ArcherStats->PlayerDefense << "\n" << this->ArcherStats->PlayerLocationOnMap
		<< "\n" << this->ArcherStats->PlayerEndurance << "\n" << this->ArcherStats->PlayerSpeed 
		<< "\n" << this->ArcherStats->PlayerPersonality << "\n" << this->ArcherStats->PlayerLuck 
		<< "\n" << this->ArcherStats->PlayerStrength << "\n" << this->ArcherStats->PlayerAccuracy << std::endl;
	ArcherInformation.close();	*/
}

