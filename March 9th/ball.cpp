#include "ball.h"
ball::ball(int x, int y) {
	xpos = x;
	ypos = y;

}

void ball::draw(sf::RenderWindow& window) {
	srand(time(NULL));
	int c1 = rand() % 255;
	int c2 = rand() % 255;
	int c3 = rand() % 255;
	sf::CircleShape circ(20);
	circ.setFillColor((sf::Color(c1, c2, c3)));
	circ.setPosition(xpos, ypos);
	window.draw(circ);
}