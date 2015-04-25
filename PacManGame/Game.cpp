#include "Game.h"
#include<allegro5/allegro.h>
#include<allegro5/allegro_native_dialog.h>
#include<allegro5/allegro_primitives.h>

Game::Game(int in_score,int in_y,int in_x)
{
	this->x = in_x;
	this->y = in_y;
	this->score = in_score;
}


Game::~Game()
{
}

void Game::DrawBoard()
{

	al_draw_line(40, 30, 460, 30, al_map_rgb(50, 100, 255), 20);
	al_draw_line(40, 500, 460, 500, al_map_rgb(50, 100, 255), 20);
	al_draw_line(500, 20, 500, 200, al_map_rgb(50, 100, 255), 20);
	al_draw_line(500, 230, 500, 510, al_map_rgb(50, 100, 255), 20);
	al_draw_line(30, 20, 30, 200, al_map_rgb(50, 100, 255), 20);
	al_draw_line(30, 230, 30, 510, al_map_rgb(50, 100, 255), 20);
	// inside board
	al_draw_line(70,80,200,80, al_map_rgb(250, 50, 80), 20);
	al_draw_line(40,130,200,130, al_map_rgb(250, 50, 80), 20);
	al_draw_line(230, 80, 400, 80, al_map_rgb(250, 50, 80), 20);
	al_draw_line(260, 130, 300, 130, al_map_rgb(250, 50, 80), 20);
	al_draw_line(80, 170, 80, 320, al_map_rgb(250, 50, 80), 20);
	al_draw_line(40, 360, 100, 360, al_map_rgb(250, 50, 80), 20);
	al_draw_line(200, 120, 200, 180, al_map_rgb(250, 50, 80), 20);
	al_draw_line(200, 220, 200, 400, al_map_rgb(250, 50, 80), 20);
	al_draw_line(450,150,450,380, al_map_rgb(250, 50, 80), 20);
	al_draw_line(40, 440, 460, 440, al_map_rgb(250, 50, 80), 30);
	al_draw_line(190, 180, 300, 180, al_map_rgb(250, 50, 80), 20);
	al_draw_line(250, 120,250, 430, al_map_rgb(250, 50, 80), 20);
	al_draw_line(350, 120, 350, 390, al_map_rgb(250, 50, 80), 20);
	al_draw_line(300, 170, 300, 430, al_map_rgb(250, 50, 80), 20);
	al_draw_line(400, 40, 400, 390, al_map_rgb(250, 50, 80), 20);
	al_draw_line(450, 70, 450, 120, al_map_rgb(250, 50, 80), 20);
	al_draw_line(100, 180, 100, 200, al_map_rgb(250, 50, 80), 20);
	al_draw_line(150, 170, 150, 440, al_map_rgb(250, 50, 80), 20);
	al_draw_line(100, 170, 100, 400, al_map_rgb(250, 50, 80), 20);




}

