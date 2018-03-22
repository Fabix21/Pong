#include "main_game.h"

#include "main_menu.h"
#include <iostream>

void main_game::Initialize(sf::RenderWindow *window)
{
	this->player1 = new paddle_player(0);
	this->player2 = new paddle_player(1);
	this->player2->setPosition(window->getSize().x - this->player2->getGlobalBounds().width,0);
}
void main_game::Update(sf::RenderWindow *window)
{
	this->player1->Update();
	this->player2->Update();

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Escape))
	{
		std::cout << "returned to menu " << std::endl;
		coreState.SetState(new main_menu());
	}
	
}
void main_game::Render(sf::RenderWindow *window)
{
	window->draw(*this->player1);
	window->draw(*this->player2);
}
void main_game::Destory(sf::RenderWindow *window)
{
	delete player1;
	delete player2;
}
