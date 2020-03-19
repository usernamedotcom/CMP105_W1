#pragma once

#include <SFML/Graphics.hpp>
#include <string.h>
#include <iostream>


class Level {
public:
	Level(sf::RenderWindow* hwnd);
	~Level();

	void handleInput();
	void update();
	void render();

private:
	void beginDraw();
	void endDraw();
	sf::RenderWindow* window;

	sf::RectangleShape rect;
	sf::RectangleShape bigshape;
	sf::RectangleShape middleshape;
	sf::RectangleShape smallshape;
	sf::RectangleShape moveshape;
	sf::CircleShape circle;
	sf::Font font;
	sf::Text text;
};
