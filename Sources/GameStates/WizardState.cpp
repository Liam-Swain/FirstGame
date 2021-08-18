#include "WizardState.h"
sf::RenderWindow ClassWindow;

void WizardState::WizardStateClass::InitGraphics()
{
	ClassWindow.create(sf::VideoMode(sf::VideoMode::getDesktopMode().width, sf::VideoMode::getDesktopMode().height), "WIZARD CLASS STATE");
	

	if (!ClassGraphics.WizardClassTexture.loadFromFile("WizardClass.png"))
	{
		std::cout << "ERROR LOAD WIZARD" << std::endl;
	}

	ClassGraphics.WizardClassTexture.setSmooth(true);
	ClassGraphics.WizardClassSprite.setTexture(ClassGraphics.WizardClassTexture);
	ClassGraphics.WizardClassSprite.setPosition(sf::Vector2f(30.f, 0.0f));
	ClassGraphics.WizardClassSprite.setScale(1.0f, 1.0f);

	if (!ClassGraphics.WizardPersonTexture.loadFromFile("WizardPerson.png"))
	{
		std::cout << "ERROR LOADING WIZARD PERSON" << std::endl;
	}

	ClassGraphics.WizardPersonTexture.setSmooth(true);
	ClassGraphics.WizardPersonSprite.setTexture(ClassGraphics.WizardPersonTexture);
	ClassGraphics.WizardPersonSprite.setTextureRect(sf::IntRect(0.0f, 0.0f, 500, 500));
	ClassGraphics.WizardPersonSprite.setPosition(50.f, 100.f);
	ClassGraphics.WizardPersonSprite.setScale(2.0f, 2.0f);
	ClassGraphics.WizardPersonSprite.setColor(sf::Color::Red);

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
	ClassGraphics.HealthText.setPosition(sf::VideoMode::getDesktopMode().width * 0.6, sf::VideoMode::getDesktopMode().height * 0.6);

	ClassGraphics.ManaText.setFont(ClassGraphics.font);
	ClassGraphics.ManaText.setString("Starting Mana " + std::to_string(this->Class->PlayerMana));
	ClassGraphics.ManaText.setPosition(sf::VideoMode::getDesktopMode().width * 0.6, sf::VideoMode::getDesktopMode().height * 0.65);

	ClassGraphics.Defensetext.setFont(ClassGraphics.font);
	ClassGraphics.Defensetext.setString("Starting Defense " + std::to_string(this->Class->PlayerDefense));
	ClassGraphics.Defensetext.setPosition(sf::VideoMode::getDesktopMode().width * 0.6, sf::VideoMode::getDesktopMode().height * 0.7);

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
}

void WizardState::WizardStateClass::CleanUp()
{
}

void WizardState::WizardStateClass::Pause()
{
}

void WizardState::WizardStateClass::Resume()
{
}

int WizardState::WizardStateClass::HandleEvents()
{
	float CloseToEdge;
	float CloseToBeg;
	sf::Event event;
	sf::Event mouseEvent;
	sf::Vector2f mousePos;
	sf::FloatRect rect;
	while (ClassWindow.pollEvent(event))
	{
		if (event.type == sf::Event::Closed)
		{
			ClassWindow.close();
			return 0;
		}

		if (event.type == sf::Event::MouseMoved)
		{
			mousePos = sf::Vector2f(event.mouseMove.x, event.mouseMove.y);

			if (ClassGraphics.ChooseSprite.getGlobalBounds().contains(mousePos))
			{
				rect = ClassGraphics.ChooseSprite.getGlobalBounds();
				std::cout << mousePos.x << " " << mousePos.y << std::endl;
				CloseToEdge = rect.left + rect.width - mousePos.x;
				std::cout << CloseToEdge << std::endl;

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

				ClassGraphics.WizardPersonSprite.setColor(sf::Color(this->RGB[0], this->RGB[1], this->RGB[2], 255));
			}

			if (ClassGraphics.ChangeClassSprite.getGlobalBounds().contains(mousePos))
			{
				ClassGraphics.Outline.setOutlineColor(sf::Color::Blue);
			}
			else
			{
				ClassGraphics.Outline.setOutlineColor(sf::Color::Transparent);
			}

		}


		if (event.type == sf::Event::MouseButtonPressed)
		{
			mousePos = sf::Vector2f(event.mouseButton.x, event.mouseButton.y);
			if (ClassGraphics.ChooseSprite.getGlobalBounds().contains(mousePos))
			{
				if (event.mouseButton.button == sf::Mouse::Left)
				{
					this->Colors[0] = this->RGB[0];
					this->Colors[2] = this->RGB[2];
					this->Colors[1] = this->RGB[1];
					std::cout << "Saved Colors" << std::endl;
					ClassGraphics.ColorText.setFillColor(sf::Color(this->Colors[0], this->Colors[1], this->Colors[2] = this->RGB[2]));
				}

			}

			if (ClassGraphics.ChangeClassSprite.getGlobalBounds().contains(mousePos))
			{
				if (event.mouseButton.button == sf::Mouse::Left)
				{
					std::cout << "CHANGE CLASS BUTTON PRESSED" << std::endl;
					ClassWindow.close();
					return 3;
				}
			}

		}

	}

	return -1;
}

void WizardState::WizardStateClass::Update()
{
	
}

void WizardState::WizardStateClass::Draw()
{
	ClassWindow.clear();
	ClassWindow.draw(ClassGraphics.WizardClassSprite);
	ClassWindow.draw(ClassGraphics.WizardPersonSprite);
	ClassWindow.draw(ClassGraphics.ChooseSprite);
	ClassWindow.draw(ClassGraphics.ColorText);
	ClassWindow.draw(ClassGraphics.HealthText);
	ClassWindow.draw(ClassGraphics.ManaText);
	ClassWindow.draw(ClassGraphics.Defensetext);
	ClassWindow.draw(ClassGraphics.ChangeClassSprite);
	ClassWindow.draw(ClassGraphics.Outline);
	ClassWindow.display();
}
