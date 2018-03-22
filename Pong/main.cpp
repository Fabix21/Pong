#include <Windows.h>
#include "game_state.h"
#include "main_menu.h"
#include <iostream>
game_state coreState;
bool quitGame = false;


int main()
{


	sf::RenderWindow window(sf::VideoMode(1280, 720), "Pong");
	window.setFramerateLimit(480);

	coreState.SetWindow(&window);
	coreState.SetState(new main_menu());

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}
	
		window.clear(sf::Color::Black);

		coreState.Update();
		coreState.Render();

		window.display();

		if (quitGame)
		{
			window.close();
		}
		//Sleep(5);
	}


	return 0;
}