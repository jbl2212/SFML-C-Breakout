#include "brick.h"
brick::brick(int x, int y) {
	xpos = x;
	ypos = y;

}

void brick::draw(sf::RenderWindow& window) {
	srand(time(NULL));
	int c1 = rand() % 255;
	int c2 = rand() % 255;
	int c3 = rand() % 255;
	rect.setSize(sf::Vector2f(100, 50));
	rect.setFillColor((sf::Color(c1, c2, c3)));
	rect.setPosition(xpos, ypos);
	window.draw(rect);
}