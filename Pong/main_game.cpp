#include "main_game.h"

#include "main_menu.h"
#include <iostream>

void main_game::Initialize(sf::RenderWindow *window)
{

}
void main_game::Update(sf::RenderWindow *window)
{
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Escape))
	{
		std::cout << "returned to menu " << std::endl;
		coreState.SetState(new main_menu());
	}
}
void main_game::Render(sf::RenderWindow *window)
{
	
}
void main_game::Destory(sf::RenderWindow *window)
{
	
}
