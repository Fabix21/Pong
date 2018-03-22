#include "main_menu.h"
#include <iostream>

void main_menu::Initialize(sf::RenderWindow *window)
{

	std::cout << "initalized" <<std::endl;
	this->font = new sf::Font();
	this->font->loadFromFile("Graphics/font.ttf");
	this->title = new sf::Text("Pong", *this->font,128);
}
void main_menu::Update(sf::RenderWindow *window)
{

}
void main_menu::Render(sf::RenderWindow *window)
{
	window->draw(*this->title);
}
void main_menu::Destory(sf::RenderWindow *window)
{
	delete this->font;
	delete this->title;
	std::cout << "destoyed" << std::endl;
}
