#include <SFML/Graphics.hpp>
#include"brick.h"
#include"ball.h"


//----------------------------------------------------------------------------

//instantiate some bricks
brick b1(0, 100);
brick b2(100, 100);
brick b3(200, 100);
brick b4(300, 100);
brick b5(400, 100);
brick b6(500, 100);
brick b7(600, 100);
brick b8(700, 100);
brick b9(0, 50);
brick b10(100, 50);
brick b11(200, 50);
brick b12(300, 50);
brick b13(400, 50);
brick b14(500, 50);
brick b15(600, 50);
brick b16(700, 50);
brick b17(0, 0);
brick b18(100, 0);
brick b19(200, 0);
brick b20(300, 0);
brick b21(400, 0);
brick b22(500, 0);
brick b23(600, 0);
brick b24(700, 0);
ball  ball1(600, 600);
//instantiate one ball

int main()
{
	sf::RenderWindow window(sf::VideoMode(800, 800), "Breakout"); //set up screen
	sf::RectangleShape rect;


	while (window.isOpen())//GAME LOOP--------------------------------
	{
		//input section--------------------------------
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();

		}
		//physics section------------------------------


		//render section-------------------------------
		window.clear();

		//draw bricks
		b1.draw(window);
		b2.draw(window);
		b3.draw(window);
		b4.draw(window);
		b5.draw(window);
		b6.draw(window);
		b7.draw(window);
		b8.draw(window);
		b9.draw(window);
		b10.draw(window);
		b11.draw(window);
		b12.draw(window);
		b13.draw(window);
		b14.draw(window);
		b15.draw(window);
		b16.draw(window);
		b17.draw(window);
		b18.draw(window);
		b19.draw(window);
		b20.draw(window);
		b21.draw(window);
		b22.draw(window);
		b23.draw(window);
		b24.draw(window);
		ball1.draw(window);
		//draw one ball

		


		window.display(); //flip the buffer

	}//end game loop-------------------------------------------------

	return 0;
} //end main
