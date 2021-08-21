#include "TitleScreen.h"
#include <Windows.h>
#include "Includes.h"

sf::RenderWindow TitleWindow;


void TitleScreen::TitleScreenState::InitGraphics(UserPlayer::Player* type, sf::Uint8 Colors[3], int ClassType)
{
	TitleWindow.create(sf::VideoMode(sf::VideoMode::getDesktopMode().width, sf::VideoMode::getDesktopMode().height), "TITLE SCREEN STATE");
	if (!Title.texture.loadFromFile("TITLE SCREEN NAME.png"))
	{
		std::cout << "I GOT HOUSE" << std::endl;
		return;
	}

	if (!Title.CreateCharacter.loadFromFile("CREATE CHARACTER.png"))
	{
		std::cout << "RUH ROH NO LOAD" << std::endl;
		return;
	}

	if (!Title.QuitTexture.loadFromFile("Quit.png"))
	{
		std::cout << "No Quit" << std::endl;
		return;
	}
	
	if (!Title.MadeTexture.loadFromFile("WorkPls.png"))
	{
		std::cout << "No Made By" << std::endl;
		return;
	}

	Title.texture.setSmooth(true);
	Title.Titlesprite.setTexture(Title.texture);
	Title.Titlesprite.setPosition(sf::Vector2f(95.f, 0.f));
	Title.Titlesprite.setScale(sf::Vector2f(3.0f, 3.0f));

	Title.CreateCharacter.setSmooth(true);
	Title.Character.setTexture(Title.CreateCharacter);
	Title.Character.setTextureRect(sf::IntRect(0, 0, 400, 80));
	Title.Character.setPosition(sf::Vector2f(30.f, sf::VideoMode::getDesktopMode().height * 0.50));
	Title.Character.setColor(sf::Color::Green);
	Title.Character.setScale(sf::Vector2f(1.0f, 1.0f));

	Title.QuitTexture.setSmooth(true);
	Title.QuitSprite.setTexture(Title.QuitTexture);
	Title.QuitSprite.setTextureRect(sf::IntRect(0, 0, 115, 80));
	Title.QuitSprite.setPosition(sf::Vector2f(30.f, sf::VideoMode::getDesktopMode().height * 0.60));
	Title.QuitSprite.setColor(sf::Color::Green);

	Title.MadeTexture.setSmooth(true);
	Title.MadeBySprite.setTexture(Title.MadeTexture);
	Title.MadeBySprite.setTextureRect(sf::IntRect(0, 0, 1100, 80));
	Title.MadeBySprite.setPosition(sf::Vector2f(30.f, sf::VideoMode::getDesktopMode().height * .90));
	Title.MadeBySprite.setColor(sf::Color::Green);
	Title.MadeBySprite.setScale(sf::Vector2f(0.5f, 0.5f));
}

void TitleScreen::TitleScreenState::CleanUp()
{	

}

void TitleScreen::TitleScreenState::Pause()
{

}

void TitleScreen::TitleScreenState::Resume()
{

}

int TitleScreen::TitleScreenState::HandleEvents()
{
	sf::Event event;
	sf::Vector2f mousePos;
	while (TitleWindow.pollEvent(event))
	{
		if (event.type == sf::Event::Closed)
		{
			TitleWindow.close();
		}

		if (event.type == sf::Event::MouseButtonReleased)
		{
			if (event.mouseButton.button == sf::Mouse::Left)
			{
				mousePos = sf::Vector2f(event.mouseButton.x, event.mouseButton.y);

				
				if (Title.QuitSprite.getGlobalBounds().contains(mousePos))
				{
					
					TitleWindow.close();
					CleanUp();
					return 0;
				}

				if (Title.Character.getGlobalBounds().contains(mousePos))
				{
					TitleWindow.close();
					CleanUp();
					return 1;
					
				}

			}
		}

	}

	return -1;
}

void TitleScreen::TitleScreenState::Update()
{
}
void TitleScreen::TitleScreenState::Draw()
{
	TitleWindow.clear();
	TitleWindow.draw(Title.Titlesprite);
	TitleWindow.draw(Title.Character);
	TitleWindow.draw(Title.QuitSprite);
	TitleWindow.draw(Title.MadeBySprite);
	TitleWindow.display();
}

