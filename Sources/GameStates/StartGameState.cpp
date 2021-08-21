#include "StartGameState.h"
#include <string.h>
#include <Windows.h>
sf::RenderWindow StartGameWindow;
void StartGame::StartGameState::InitGraphics(UserPlayer::Player* type, sf::Uint8 colors[3], int ClassType)
{
	StartGameWindow.create(sf::VideoMode(sf::VideoMode::getDesktopMode().width, sf::VideoMode::getDesktopMode().height),"STARTING GAME");
	this->Class = type;
	for (int i = 0; i < 3; i++)
	{
		this->Colors[i] = colors[i];
	}

	if (!graphics.SayBoxImage.loadFromFile("SayBox.png"))
	{
		std::cout << "ERROR LOADING SayBox" << std::endl;
	}

	//graphics.SayBoxImage.createMaskFromColor(sf::Color::White);
	//graphics.SayBoxImage.createMaskFromColor(sf::Color::Black);
	graphics.SayBoxTexture.loadFromImage(graphics.SayBoxImage);
	graphics.SayBoxTexture.setSmooth(true);
	graphics.SayBoxSprite.setTexture(graphics.SayBoxTexture);
	graphics.SayBoxSprite.setTextureRect(sf::IntRect(0, 633, 1895, 216));
	graphics.SayBoxSprite.setPosition(0.0f,  sf::VideoMode::getDesktopMode().height * 0.75);
	graphics.SayBoxSprite.setColor(sf::Color::White);

	if (!graphics.font.loadFromFile("times.ttf"))
	{
		std::cout << "ERROR LOADING FONT" << std::endl;
	}

	introducionText = "Hello and Welcome to the game! I will be you're guide and tell you what buttons do what. Before we get started type your name in the below";
	graphics.introduction.setFont(graphics.font);
	graphics.introduction.setFillColor(sf::Color::Black);
	//graphics.introduction.setString(this->introducionText[0]);
	graphics.introduction.setCharacterSize(25);
	graphics.introduction.setPosition(graphics.SayBoxSprite.getPosition().x + 40.f, graphics.SayBoxSprite.getPosition().y + 40.f);


	graphics.ClassInformation.setFont(graphics.font);
	graphics.ClassInformation.setFillColor(sf::Color::White);
	graphics.ClassInformation.setString("Health " + std::to_string(Class->PlayerHealth) + "\n\nMana " + std::to_string(Class->PlayerMana) + "\n\nDefense " + std::to_string(Class->PlayerDefense));
	graphics.ClassInformation.setPosition(sf::VideoMode::getDesktopMode().width * 0.3, sf::VideoMode::getDesktopMode().height * 0.25);

	graphics.ClassItems.setFont(graphics.font);
	graphics.ClassItems.setFillColor(sf::Color::White);
	graphics.ClassItems.setPosition(sf::VideoMode::getDesktopMode().width * 0.6, sf::VideoMode::getDesktopMode().height * 0.25);

	graphics.TextBoxForItems.setFont(graphics.font);
	graphics.TextBoxForItems.setFillColor(sf::Color(255 ,255, 255, 255));
	graphics.TextBoxForItems.setCharacterSize(20.f);
	graphics.TextBoxForItems.setPosition(sf::VideoMode::getDesktopMode().width * 0.7, sf::VideoMode::getDesktopMode().height * 0.35);

	if (ClassType == 1)
	{
		std::cout << ClassType << std::endl;
		if (!graphics.CharacterImage.loadFromFile("ArcherPerson.png"))
		{
			std::cout << "ERROR LOADING WIZARD PERSON" << std::endl;
		}
	}

	if (ClassType == 2)
	{
		if (!graphics.CharacterImage.loadFromFile("KnightPicture.png"))
		{
			std::cout << "ERROR LOADING GUIDE PERSON" << std::endl;
		}
	}

	if (ClassType == 3)
	{
		if (!graphics.CharacterImage.loadFromFile("WizardPerson.png"))
		{
			std::cout << "ERROR LOADING ARCHER PERSON" << std::endl;
		}
	}
	graphics.CharacterImage.createMaskFromColor(sf::Color::White);
	graphics.CharacterTexture.loadFromImage(graphics.CharacterImage);
	graphics.CharacterTexture.setSmooth(true);
	graphics.CharacterSprite.setTexture(graphics.CharacterTexture);
	graphics.CharacterSprite.setPosition(sf::VideoMode::getDesktopMode().width * 0.4, sf::VideoMode::getDesktopMode().height * 0.2);
	graphics.CharacterSprite.setScale(1.5, 1.5f);
	graphics.CharacterSprite.setColor(sf::Color(this->Colors[0], this->Colors[1], this->Colors[2]));


	Alpha = 0;
	graphics.shape.setSize(sf::Vector2f(sf::VideoMode::getDesktopMode().width, sf::VideoMode::getDesktopMode().height));
	graphics.shape.setFillColor(sf::Color(0, 0, 0, Alpha));


	if (ClassType == 2)
	{
		items[0].Description = "A Two handed wooden sword that deals 10 damage to enemies";
		items[0].Name = "Two Handed Sword";
		items[0].value = 10;
		items[0].ID = 1;
		items[1].Description = "An Apple that will heal you for 20 hit points";
		items[1].Name = "Apple";
		items[1].value = 15;
		items[1].ID = 2;
	}
	
	Class->PlayerItems.push_back(items[0]);
	Class->PlayerItems.push_back(items[1]);

	std::cout << Class->PlayerItems[0].Name << std::endl;

}

void StartGame::StartGameState::CleanUp()
{
}

void StartGame::StartGameState::Pause()
{
}

void StartGame::StartGameState::Resume()
{
}

int StartGame::StartGameState::HandleEvents()
{
	sf::Event event;

	while (StartGameWindow.pollEvent(event))
	{
		if (event.type == sf::Event::Closed)
		{
			StartGameWindow.close();
			return 0;
		}

		if (event.type == sf::Event::TextEntered)
		{
			if (event.text.unicode < 128 && typeName == true)
			{
				Class->PlayerName += event.text.unicode;
				this->introducionText += event.text.unicode;
			}
		}

		if (event.type == sf::Event::MouseMoved)
		{
			mousePos = sf::Vector2f(event.mouseMove.x, event.mouseMove.y);

			if (mousePos.x > graphics.ClassItems.getGlobalBounds().left && mousePos.x < graphics.ClassItems.getGlobalBounds().left + graphics.ClassItems.getGlobalBounds().width && mousePos.y > graphics.ClassItems.getGlobalBounds().top + 68.f && mousePos.y  < graphics.ClassItems.getGlobalBounds().top + graphics.ClassItems.getGlobalBounds().height - 73.f)
			{
				graphics.TextBoxForItems.setString(Class->PlayerItems[0].Description);
			}

			else if (mousePos.x > graphics.ClassItems.getGlobalBounds().left && mousePos.x < graphics.ClassItems.getGlobalBounds().left + graphics.ClassItems.getGlobalBounds().width && mousePos.y > graphics.ClassItems.getGlobalBounds().top + 138 && mousePos.y < graphics.ClassItems.getGlobalBounds().top + graphics.ClassItems.getGlobalBounds().height)
			{
				graphics.TextBoxForItems.setString(Class->PlayerItems[1].Description);
			}

			else
			{
				graphics.TextBoxForItems.setString("");
			}

		}

		if (event.type == sf::Event::KeyReleased)
		{
			if (event.key.code == sf::Keyboard::Enter && typeName == true)
			{
				addName = true;
				this->text = "";
				this->introducionText = "Welcome " + Class->PlayerName + " Lets get started right away!";
				EnterPressed = true;
			}
		}

	}

	return -1;
}

void StartGame::StartGameState::Update()
{
	static int i = 0;
	if (begIntroduction)
	{
		if (addName == true)
		{
			i = 0;
			addName = false;
		}
		if (i < this->introducionText.length())
		{

			this->text += this->introducionText[i];
			graphics.introduction.setString(this->text);
			i++;
			Sleep(5);
		}
		if (i == this->introducionText.length() && typeName == false)
		{
			this->introducionText += "\n";
			typeName = true;
		}

		if (i == this->introducionText.length() && !Class->PlayerName.empty() && EnterPressed == true)
		{
			begIntroduction = !begIntroduction;
		}

	}

	if (!begIntroduction)
	{
		if (Alpha == 255 && AlphaNumber == true)
		{
			DrawClassInformationToScreen = true;
			graphics.CharacterSprite.setPosition(sf::VideoMode::getDesktopMode().width * 0.1, sf::VideoMode::getDesktopMode().height * 0.1);
			Alpha = 0;
			graphics.shape.setFillColor(sf::Color(0, 0, 0, Alpha));
			this->text = "";
			this->introducionText = "If you look above you will see values associated with your class. You will also notice the starting items in your class. Each class will start with different starting items\nIf you want to learn more about your items, hover your mouse over them";
			begIntroduction = !begIntroduction;
			graphics.ClassItems.setString("PLAYER ITEMS:\n\n" + Class->PlayerItems[0].Name + "\n\n" + Class->PlayerItems[1].Name);
			std::cout << Class->PlayerItems[0].Name << std::endl;
			i = 0;
		}
		else if(Alpha <= 255 && AlphaNumber == false)
		{
			Alpha += 1.5;
			graphics.shape.setFillColor(sf::Color(0, 0, 0, Alpha));
			if (Alpha == 255)
			{
				AlphaNumber = true;
			}
		}
		
	}

}

void StartGame::StartGameState::Draw()
{

	StartGameWindow.clear();
	if (DrawClassInformationToScreen == true)
	{
		StartGameWindow.draw(graphics.ClassInformation);
		StartGameWindow.draw(graphics.ClassItems);
	}
	StartGameWindow.draw(graphics.SayBoxSprite);
	StartGameWindow.draw(graphics.TextBoxForItems);
	StartGameWindow.draw(graphics.introduction);
	StartGameWindow.draw(graphics.CharacterSprite);
	StartGameWindow.draw(graphics.shape);
	StartGameWindow.display();

}
