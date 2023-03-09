#pragma once
#include <SFML/Graphics.hpp>
class ball {
private:
	int xpos;
	int ypos;
	sf::CircleShape Circ;
public:
	ball(int x, int y); //constructor
	void draw(sf::RenderWindow& window);
};
