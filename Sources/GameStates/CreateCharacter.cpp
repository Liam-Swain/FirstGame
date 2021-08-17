#include "CreateCharacter.h"
#include <Windows.h>
sf::RenderWindow CharacterWindow;
void CreateCharacter::CreateCharacterState::InitGraphics()
{
	CharacterWindow.create(sf::VideoMode(sf::VideoMode::getDesktopMode().width, sf::VideoMode::getDesktopMode().height), "CREATE CHARACTER STATE");
	if (!Character.Create.loadFromFile("Create.png"))
	{
		std::cout << "RUH ROH DIDNT WORK" << std::endl;
		return;
	}

	Character.Create.setSmooth(true);
	Character.CreateSprite.setTexture(Character.Create);
	Character.CreateSprite.setPosition(sf::Vector2f(30.f, 0.0f));
	Character.CreateSprite.setScale(1.0f, 1.0f);

	if (!Character.ArcherTexture.loadFromFile("ArcherName.png"))
	{
		std::cout << "RUH ROH DIDNT WORK" << std::endl;
		return;
	}
		
	Character.ArcherTexture.setSmooth(true);
	Character.ArcherText.setTexture(Character.ArcherTexture);
	Character.ArcherText.setTextureRect(sf::IntRect(0, 0, 600, 80));
	Character.ArcherText.setPosition(sf::Vector2f(sf::VideoMode::getDesktopMode().width * 0.15, sf::VideoMode::getDesktopMode().height * .55));
	Character.ArcherText.setScale(0.5f, 0.5f);
	Character.ArcherText.setColor(sf::Color::Green);

	if (!Character.ArcherPicture.loadFromFile("ArcherPicture.jpg"))
	{
		std::cout << "RUH ROH DIDNT WORK" << std::endl;
		return;
	}

	Character.ArcherPicture.setSmooth(true);
	Character.ArcherPictureSprite.setTexture(Character.ArcherPicture);
	Character.ArcherPictureSprite.setTextureRect(sf::IntRect(30, 25, 200, 215));
	Character.ArcherPictureSprite.setPosition(sf::Vector2f(sf::VideoMode::getDesktopMode().width * 0.13, sf::VideoMode::getDesktopMode().height * .35));
	Character.ArcherPictureSprite.setScale(1.0f, 1.0f);

	if (!Character.KnightTextTexture.loadFromFile("KnightText.png"))
	{
		std::cout << "KNIGHT TEXT" << std::endl;
		return;
	}

	Character.KnightTextTexture.setSmooth(true);
	Character.KnightTextSprite.setTexture(Character.KnightTextTexture);
	Character.KnightTextSprite.setTextureRect(sf::IntRect(0, 0, 600, 80));
	Character.KnightTextSprite.setPosition(sf::Vector2f(sf::VideoMode::getDesktopMode().width * 0.30, sf::VideoMode::getDesktopMode().height * .55));
	Character.KnightTextSprite.setScale(0.5f, 0.5f);
	Character.KnightTextSprite.setColor(sf::Color::White);

	if (!Character.KnightPicture.loadFromFile("RealKnightPicture.jpg"))
	{
		std::cout << "RUH ROH DIDNT WORK" << std::endl;
		return;
	}

	Character.KnightPicture.setSmooth(true);
	Character.KnightPictureSprite.setTexture(Character.KnightPicture);
	Character.KnightPictureSprite.setTextureRect(sf::IntRect(30, 0, 200, 135));
	Character.KnightPictureSprite.setPosition(sf::Vector2f(sf::VideoMode::getDesktopMode().width * 0.28, sf::VideoMode::getDesktopMode().height * .40));
	Character.KnightPictureSprite.setScale(1.0f, 1.0f);

	if (!Character.WizardTextTexture.loadFromFile("WizardText.png"))
	{
		std::cout << "RUH ROH DIDNT WORK" << std::endl;
		return;
	}

	Character.WizardTextTexture.setSmooth(true);
	Character.WizardTextSprite.setTexture(Character.WizardTextTexture);
	Character.WizardTextSprite.setTextureRect(sf::IntRect(0, 0, 600, 80));
	Character.WizardTextSprite.setPosition(sf::Vector2f(sf::VideoMode::getDesktopMode().width * 0.45, sf::VideoMode::getDesktopMode().height * .55));
	Character.WizardTextSprite.setScale(0.5f, 0.5f);
	Character.WizardTextSprite.setColor(sf::Color::Red);


	if (!Character.WizardPicture.loadFromFile("WizardPicture.jpg"))
	{
		std::cout << "RUH ROH DIDNT WORK" << std::endl;
		return;
	}

	Character.WizardPicture.setSmooth(true);
	Character.WizardPictureSprite.setTexture(Character.WizardPicture);
	Character.WizardPictureSprite.setTextureRect(sf::IntRect(30, 0, 200, 135));
	Character.WizardPictureSprite.setPosition(sf::Vector2f(sf::VideoMode::getDesktopMode().width * 0.42, sf::VideoMode::getDesktopMode().height * .40));
	Character.WizardPictureSprite.setScale(1.0f, 1.0f);

	if (!Character.DruidTextTexture.loadFromFile("DruidText.png"))
	{
		std::cout << "RUH ROH DIDNT WORK" << std::endl;
		return;
	}

	Character.DruidTextTexture.setSmooth(true);
	Character.DruidTextSprite.setTexture(Character.DruidTextTexture);
	Character.DruidTextSprite.setTextureRect(sf::IntRect(0, 0, 600, 80));
	Character.DruidTextSprite.setPosition(sf::Vector2f(sf::VideoMode::getDesktopMode().width * 0.60, sf::VideoMode::getDesktopMode().height * .55));
	Character.DruidTextSprite.setScale(0.5f, 0.5f);
	Character.DruidTextSprite.setColor(sf::Color(80, 102, 255, 255));


	if (!Character.DruidPicture.loadFromFile("DruidPicture.jpg"))
	{
		std::cout << "RUH ROH DIDNT WORK" << std::endl;
		return;
	}

	Character.DruidPicture.setSmooth(true);
	Character.DruidPictureSprite.setTexture(Character.DruidPicture);
	Character.DruidPictureSprite.setTextureRect(sf::IntRect(30, 0, 150, 135));
	Character.DruidPictureSprite.setPosition(sf::Vector2f(sf::VideoMode::getDesktopMode().width * 0.58, sf::VideoMode::getDesktopMode().height * .40));
	Character.DruidPictureSprite.setScale(1.0f, 1.0f);
}

void CreateCharacter::CreateCharacterState::CleanUp()
{
}

void CreateCharacter::CreateCharacterState::Pause()
{
}

void CreateCharacter::CreateCharacterState::Resume()
{
}

int CreateCharacter::CreateCharacterState::HandleEvents()
{
	sf::Event event;
	while (CharacterWindow.pollEvent(event))
	{
		if (event.type == sf::Event::Closed)
		{
			CharacterWindow.close();
			return 0;
		}

		if (event.type == sf::Event::MouseButtonReleased)
		{
			if (event.mouseButton.button == sf::Mouse::Left)
			{
				if (event.mouseButton.x > sf::VideoMode::getDesktopMode().width * 0.15 && event.mouseButton.x < sf::VideoMode::getDesktopMode().width * 0.15 + 100 && event.mouseButton.y > sf::VideoMode::getDesktopMode().height * .55 && event.mouseButton.y < sf::VideoMode::getDesktopMode().height * .55 + 50)
				{
					std::cout << "ARCHER BUTTON PRESSED" << std::endl;
					CharacterWindow.close();
					ClassType = 1;
					return 2;
				}

				if (event.mouseButton.x > sf::VideoMode::getDesktopMode().width * 0.30 && event.mouseButton.x < sf::VideoMode::getDesktopMode().width * 0.30 + 100 && event.mouseButton.y > sf::VideoMode::getDesktopMode().height * .55 && event.mouseButton.y < sf::VideoMode::getDesktopMode().height * .55 + 50)
				{
					std::cout << "Knight BUTTON PRESSED" << std::endl;
					CharacterWindow.close();
					ClassType = 2;
					return 2;
				}

				if (event.mouseButton.x > sf::VideoMode::getDesktopMode().width * 0.45 && event.mouseButton.x < sf::VideoMode::getDesktopMode().width * 0.45 + 110 && event.mouseButton.y > sf::VideoMode::getDesktopMode().height * .55 && event.mouseButton.y < sf::VideoMode::getDesktopMode().height * .55 + 50)
				{
					std::cout << "Wizard BUTTON PRESSED" << std::endl;
					CharacterWindow.close();
					ClassType = 3;
					return 2;
				}

				if (event.mouseButton.x > sf::VideoMode::getDesktopMode().width * 0.60 && event.mouseButton.x < sf::VideoMode::getDesktopMode().width * 0.60 + 100 && event.mouseButton.y > sf::VideoMode::getDesktopMode().height * .55 && event.mouseButton.y < sf::VideoMode::getDesktopMode().height * .55 + 50)
				{
					std::cout << "Druid BUTTON PRESSED" << std::endl;
					CharacterWindow.close();
					ClassType = 4;
					return 2;
				}

			}
		}


	}
	return -1;
}

void CreateCharacter::CreateCharacterState::Update()
{
}

void CreateCharacter::CreateCharacterState::Draw()
{
	CharacterWindow.clear();
	CharacterWindow.draw(Character.CreateSprite);
	CharacterWindow.draw(Character.ArcherText);
	CharacterWindow.draw(Character.ArcherPictureSprite);
	CharacterWindow.draw(Character.KnightTextSprite);
	CharacterWindow.draw(Character.KnightPictureSprite);
	CharacterWindow.draw(Character.WizardTextSprite);
	CharacterWindow.draw(Character.WizardPictureSprite);
	CharacterWindow.draw(Character.DruidTextSprite);
	CharacterWindow.draw(Character.DruidPictureSprite);
	CharacterWindow.display();
}
