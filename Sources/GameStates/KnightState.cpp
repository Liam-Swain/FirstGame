#include "KnightState.h"
sf::RenderWindow KnightWindow;
void KnightState::KnightStateClass::InitGraphics(UserPlayer::Player* type, sf::Uint8 Colors[3], int ClassType)
{
	KnightWindow.create(sf::VideoMode(sf::VideoMode::getDesktopMode().width, sf::VideoMode::getDesktopMode().height), "WIZARD CLASS STATE");

	if (!ClassGraphics.knight.loadFromFile("KnightPicture.png"))
	{
		std::cout << "ERROR LOADING Knight PERSON" << std::endl;
	}
	ClassGraphics.knight.createMaskFromColor(sf::Color::White);
	ClassGraphics.KnightPerson.loadFromImage(ClassGraphics.knight);
	ClassGraphics.KnightPerson.setSmooth(true);
	ClassGraphics.KnightPersonSprite.setTexture(ClassGraphics.KnightPerson);
	ClassGraphics.KnightPersonSprite.setTextureRect(sf::IntRect(0.0f, 0.0f, 200, 322));
	ClassGraphics.KnightPersonSprite.setPosition(sf::VideoMode::getDesktopMode().width * 0.1, sf::VideoMode::getDesktopMode().height * 0.2);
	ClassGraphics.KnightPersonSprite.setScale(2.0f, 2.0f);

	if (!ClassGraphics.ChooseColor.loadFromFile("Saturation.png"))
	{
		std::cout << "ERROR LOADING WIZARD PERSON" << std::endl;
	}

	ClassGraphics.ChooseColor.setSmooth(true);
	ClassGraphics.ChooseSprite.setTexture(ClassGraphics.ChooseColor);
	ClassGraphics.ChooseSprite.setTextureRect(sf::IntRect(0.0f, 0.0f, 255, 50));
	ClassGraphics.ChooseSprite.setPosition(sf::VideoMode::getDesktopMode().width * 0.6, sf::VideoMode::getDesktopMode().height * 0.3);
	ClassGraphics.ChooseSprite.setScale(1.0f, 1.0f);
	//ClassGraphics.ChooseSprite.setColor(sf::Color::Green);


	if (!ClassGraphics.font.loadFromFile("times.ttf"))
	{
		std::cout << "ERROR LOADING FONT" << std::endl;
	}

	ClassGraphics.ColorText.setFont(ClassGraphics.font);
	ClassGraphics.ColorText.setString("Choose The Color You Want Your Wizard To Be");
	ClassGraphics.ColorText.setCharacterSize(30);
	ClassGraphics.ColorText.setFillColor(sf::Color::White);
	ClassGraphics.ColorText.setPosition(sf::VideoMode::getDesktopMode().width * 0.5, sf::VideoMode::getDesktopMode().height * 0.2);

	ClassGraphics.HealthText.setFont(ClassGraphics.font);
	ClassGraphics.HealthText.setString("Starting Health " + std::to_string(this->Class->PlayerHealth));
	ClassGraphics.HealthText.setPosition(sf::VideoMode::getDesktopMode().width * 0.6, sf::VideoMode::getDesktopMode().height * 0.5);

	ClassGraphics.ManaText.setFont(ClassGraphics.font);
	ClassGraphics.ManaText.setString("Starting Mana " + std::to_string(this->Class->PlayerMana));
	ClassGraphics.ManaText.setPosition(sf::VideoMode::getDesktopMode().width * 0.6, sf::VideoMode::getDesktopMode().height * 0.55);

	ClassGraphics.Defensetext.setFont(ClassGraphics.font);
	ClassGraphics.Defensetext.setString("Starting Defense " + std::to_string(this->Class->PlayerDefense));
	ClassGraphics.Defensetext.setPosition(sf::VideoMode::getDesktopMode().width * 0.6, sf::VideoMode::getDesktopMode().height * 0.6);

	if (!ClassGraphics.ChangeClass.loadFromFile("Change Class.png"))
	{
		std::cout << "Could Not ChangeClass" << std::endl;
	}
	ClassGraphics.ChangeClass.setSmooth(true);
	ClassGraphics.ChangeClassSprite.setTexture(ClassGraphics.ChangeClass);
	ClassGraphics.ChangeClassSprite.setTextureRect(sf::IntRect(0, 0, 400, 100));
	ClassGraphics.ChangeClassSprite.setPosition(sf::Vector2f(sf::VideoMode::getDesktopMode().width * 0.4, sf::VideoMode::getDesktopMode().height * 0.8));
	ClassGraphics.ChangeClassSprite.setScale(0.5f, 0.5f);


	ClassGraphics.Outline.setPosition(sf::Vector2f(ClassGraphics.ChangeClassSprite.getPosition().x, ClassGraphics.ChangeClassSprite.getPosition().y));
	ClassGraphics.Outline.setSize(sf::Vector2f(ClassGraphics.ChangeClassSprite.getGlobalBounds().width, ClassGraphics.ChangeClassSprite.getGlobalBounds().height));
	ClassGraphics.Outline.setFillColor(sf::Color::Transparent);
	ClassGraphics.Outline.setOutlineColor(sf::Color::Transparent);
	ClassGraphics.Outline.setOutlineThickness(5.f);

	if (!ClassGraphics.StartGame.loadFromFile("StartGame.png"))
	{
		std::cout << "ERROR START GAME NOT LOADED" << std::endl;
	}
	ClassGraphics.StartGame.setSmooth(true);
	ClassGraphics.StartGameSprite.setTexture(ClassGraphics.StartGame);
	ClassGraphics.StartGameSprite.setTextureRect(sf::IntRect(0, 0, 350, 100));
	ClassGraphics.StartGameSprite.setPosition(sf::Vector2f(sf::VideoMode::getDesktopMode().width * 0.6, sf::VideoMode::getDesktopMode().height * 0.8));
	ClassGraphics.StartGameSprite.setScale(0.5f, 0.5f);

	ClassGraphics.Outline2.setPosition(sf::Vector2f(ClassGraphics.StartGameSprite.getPosition().x, ClassGraphics.StartGameSprite.getPosition().y));
	ClassGraphics.Outline2.setSize(sf::Vector2f(ClassGraphics.StartGameSprite.getGlobalBounds().width, ClassGraphics.StartGameSprite.getGlobalBounds().height));
	ClassGraphics.Outline2.setFillColor(sf::Color::Transparent);
	ClassGraphics.Outline2.setOutlineColor(sf::Color::Transparent);
	ClassGraphics.Outline2.setOutlineThickness(5.f);
}

void KnightState::KnightStateClass::CleanUp()
{
}

void KnightState::KnightStateClass::Pause()
{
}

void KnightState::KnightStateClass::Resume()
{
}

int KnightState::KnightStateClass::HandleEvents()
{

	float CloseToEdge;
	float CloseToBeg;
	sf::Event event;
	sf::Vector2f mousePos;
	sf::FloatRect rect;
	while (KnightWindow.pollEvent(event))
	{
		if (event.type == sf::Event::Closed)
		{
			KnightWindow.close();
			return 0;
		}

		if (event.type == sf::Event::MouseMoved)
		{
			mousePos = sf::Vector2f(event.mouseMove.x, event.mouseMove.y);

			if (ClassGraphics.ChooseSprite.getGlobalBounds().contains(mousePos))
			{
				rect = ClassGraphics.ChooseSprite.getGlobalBounds();
				CloseToEdge = rect.left + rect.width - mousePos.x;

				this->RGB[0] = CloseToEdge;
				this->RGB[2] = 255 - CloseToEdge;
				this->RGB[1] = CloseToEdge * 1.35;

				if (CloseToEdge < 220 && CloseToEdge > 190)
				{
					this->RGB[0] = 255;
					this->RGB[2] = 0;
					this->RGB[1] = 255;
				}

				if (CloseToEdge < 50)
				{
					this->RGB[0] = 230;
				}

				ClassGraphics.KnightPersonSprite.setColor(sf::Color(this->RGB[0], this->RGB[1], this->RGB[2], 255));
			}

			if (ClassGraphics.ChangeClassSprite.getGlobalBounds().contains(mousePos))
			{
				ClassGraphics.Outline.setOutlineColor(sf::Color(this->Colors[0], this->Colors[1], this->Colors[2]));
			}
			else
			{
				ClassGraphics.Outline.setOutlineColor(sf::Color::Transparent);
			}


			if (ClassGraphics.StartGameSprite.getGlobalBounds().contains(mousePos))
			{
				ClassGraphics.Outline2.setOutlineColor(sf::Color(this->Colors[0], this->Colors[1], this->Colors[2]));
			}
			else
			{
				ClassGraphics.Outline2.setOutlineColor(sf::Color::Transparent);
			}

		}


		if (event.type == sf::Event::MouseButtonPressed)
		{
			if (event.mouseButton.button == sf::Mouse::Left)
			{
				mousePos = sf::Vector2f(event.mouseButton.x, event.mouseButton.y);
				if (ClassGraphics.ChooseSprite.getGlobalBounds().contains(mousePos))
				{
					this->colorSelected = true;
					this->Colors[0] = this->RGB[0];
					this->Colors[2] = this->RGB[2];
					this->Colors[1] = this->RGB[1];
					std::cout << "Saved Colors" << std::endl;
					std::cout << Colors[0] << Colors[1] << Colors[2] << std::endl;
					ClassGraphics.ColorText.setFillColor(sf::Color(this->Colors[0], this->Colors[1], this->Colors[2] = this->RGB[2]));
				}

				if (ClassGraphics.ChangeClassSprite.getGlobalBounds().contains(mousePos))
				{
					std::cout << "CHANGE CLASS BUTTON PRESSED" << std::endl;
					KnightWindow.close();
					return 3;
				}

				if (ClassGraphics.StartGameSprite.getGlobalBounds().contains(mousePos))
				{
					if (this->colorSelected == true)
					{
						std::cout << "START GAME BUTTON PRESSED" << std::endl;
						KnightWindow.close();
						return 4;
					}
				}
			}

		}
	}
	return -1;
}

void KnightState::KnightStateClass::Update()
{
}

void KnightState::KnightStateClass::Draw()
{
	KnightWindow.clear();
	KnightWindow.draw(ClassGraphics.ChooseSprite);
	KnightWindow.draw(ClassGraphics.ColorText);
	KnightWindow.draw(ClassGraphics.HealthText);
	KnightWindow.draw(ClassGraphics.ManaText);
	KnightWindow.draw(ClassGraphics.Defensetext);
	KnightWindow.draw(ClassGraphics.ChangeClassSprite);
	KnightWindow.draw(ClassGraphics.Outline);
	KnightWindow.draw(ClassGraphics.StartGameSprite);
	KnightWindow.draw(ClassGraphics.Outline2);
	KnightWindow.draw(ClassGraphics.KnightPersonSprite);
	KnightWindow.display();
}
