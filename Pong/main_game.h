#pragma once

#include "game_state.h"
#include "paddle_player.h"
#include "ball.h"
#include "score.h"


class main_game : public tiny_state
{
public:

	void Initialize(sf::RenderWindow *window);
	void Update(sf::RenderWindow *window);
	void Render(sf::RenderWindow *window);
	void Destory(sf::RenderWindow *window);


private:
	paddle_player* player1;
	paddle_player* player2;
	ball* ballObject;
	Score* score1;
	Score* score2;
	sf::Font * font;
};