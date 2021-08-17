#include "WizardState.h"
sf::RenderWindow ClassWindow;

void WizardState::WizardStateClass::InitGraphics()
{
	ClassWindow.create(sf::VideoMode(sf::VideoMode::getDesktopMode().width, sf::VideoMode::getDesktopMode().height), "WizardIZE CLASS STATE");
	

	if (!ClassGraphics.WizardClassTexture.loadFromFile("WizardClass.png"))
	{
		std::cout << "ERROR LOAD WIZARD" << std::endl;
	}

	ClassGraphics.WizardClassTexture.setSmooth(true);
	ClassGraphics.WizardClassSprite.setTexture(ClassGraphics.WizardClassTexture);
	ClassGraphics.WizardClassSprite.setPosition(sf::Vector2f(30.f, 0.0f));
	ClassGraphics.WizardClassSprite.setScale(1.0f, 1.0f);

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
	sf::Event event;

	while (ClassWindow.pollEvent(event))
	{
		if (event.type == sf::Event::Closed)
		{
			ClassWindow.close();
			return 0;
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
	ClassWindow.display();
}
