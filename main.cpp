#include "Includes.h"
#include <iostream>

int main()
{
	sf::RenderWindow window(sf::VideoMode(800, 600), "Liams Game");

	sf::RectangleShape shape(sf::Vector2f(100,50));
	shape.setFillColor(sf::Color(255, 140, 0));
	shape.setPosition(window.getSize().x - 450, window.getSize().y - 350);

	sf::Font font;

	if (!font.loadFromFile("Sources\\Fonts\\OpenSans-Regular.ttf"))
	{
		//error
		std::cout << "there is an error loading the font" << std::endl;
		system("pause");
		return 0;
	}

	sf::Text text;
	text.setFont(font);
	text.setFillColor(sf::Color::Black);
	text.setString("Button");
	text.setCharacterSize(24);
	text.setPosition(sf::Vector2f(window.getSize().x - 435, window.getSize().y - 345));

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			switch (event.type)
			{
			case sf::Event::Closed:
				window.close();
				break;

			case sf::Event::KeyPressed:
				break;

			case sf::Event::MouseButtonPressed:
				int x;
				int y;
				x = sf::Mouse::getPosition(window).x;
				y = sf::Mouse::getPosition(window).y;
				
				if((350 <= x && x <= 450) && (y <= 300 && y >= 250))
				{
					std::cout << "BUTTON PRESSED!!! :)" << std::endl;
				}
				break;
			}
		}

		window.clear();

		window.draw(shape);
		window.draw(text);
		window.display();
	}

	return 0;
}
