#include "Level.h"

Level::Level(sf::RenderWindow* hwnd)
{
	window = hwnd;

	// initialise game objects
	rect.setSize(sf::Vector2f(50, 5));
	rect.setPosition(100, 100);
	rect.setFillColor(sf::Color::Red);

	circle.setRadius(50);
	circle.setPosition(550, 250);
	circle.setFillColor(sf::Color::Blue);
	circle.setOutlineColor(sf::Color::Red);

	bigshape.setSize(sf::Vector2f(100, 100));
	bigshape.setPosition(10, 10);
	bigshape.setFillColor(sf::Color::Red);

	middleshape.setSize(sf::Vector2f(70, 70));
	middleshape.setPosition(25, 25);
	middleshape.setFillColor(sf::Color::Green);

	smallshape.setSize(sf::Vector2f(30, 30));
	smallshape.setPosition(45, 45);
	smallshape.setFillColor(sf::Color::Blue);

	if (!font.loadFromFile("font/arial.ttf"))
	{
		std::cout << "Error loading font\n";
	}
	text.setFont(font);
	text.setString("Hello world");
	text.setPosition(250, 0);
	text.setCharacterSize(24);
	text.setFillColor(sf::Color::Red);
}

Level::~Level()
{
}

// handle user input
void Level::handleInput()
{

}

// Update game objects
void Level::update()
{
	sf::Vector2u pos = window->getSize();
	sf::Vector2i posi = window->getPosition();
	moveshape.setSize(sf::Vector2f(50, 50));
	moveshape.setPosition(sf::Vector2f(pos) - sf::Vector2f(50, 50));
	moveshape.setFillColor(sf::Color::Blue);
}

// Render level
void Level::render()
{
	beginDraw();

	window->draw(bigshape);
	window->draw(middleshape);
	window->draw(smallshape);
	window->draw(text);
	window->draw(moveshape);
	endDraw();
}

void Level::beginDraw()
{
	window->clear(sf::Color(100, 149, 237));
}

// Ends rendering to the back buffer, and swaps buffer to the screen.
void Level::endDraw()
{
	window->display();
}