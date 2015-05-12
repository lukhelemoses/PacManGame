#include "Game.h"
#include<allegro5/allegro.h>
#include<allegro5/allegro_native_dialog.h>
#include<allegro5/allegro_primitives.h>
#include<allegro5/allegro_image.h>

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
	al_draw_line(70, 80, 200, 80, al_map_rgb(250, 50, 80), 20);
	al_draw_line(40, 130, 200, 130, al_map_rgb(250, 50, 80), 20);
	al_draw_line(230, 80, 400, 80, al_map_rgb(250, 50, 80), 20);
	al_draw_line(260, 130, 300, 130, al_map_rgb(250, 50, 80), 20);
	al_draw_line(80, 170, 80, 320, al_map_rgb(250, 50, 80), 20);
	al_draw_line(40, 360, 100, 360, al_map_rgb(250, 50, 80), 20);
	al_draw_line(200, 120, 200, 180, al_map_rgb(250, 50, 80), 20);
	al_draw_line(200, 220, 200, 400, al_map_rgb(250, 50, 80), 20);
	al_draw_line(450, 150, 450, 380, al_map_rgb(250, 50, 80), 20);
	al_draw_line(40, 440, 460, 440, al_map_rgb(250, 50, 80), 30);
	al_draw_line(190, 180, 300, 180, al_map_rgb(250, 50, 80), 20);
	al_draw_line(250, 120, 250, 430, al_map_rgb(250, 50, 80), 20);
	al_draw_line(350, 120, 350, 390, al_map_rgb(250, 50, 80), 20);
	al_draw_line(300, 170, 300, 430, al_map_rgb(250, 50, 80), 20);
	al_draw_line(400, 40, 400, 390, al_map_rgb(250, 50, 80), 20);
	al_draw_line(450, 70, 450, 120, al_map_rgb(250, 50, 80), 20);
	al_draw_line(100, 180, 100, 200, al_map_rgb(250, 50, 80), 20);
	al_draw_line(150, 170, 150, 440, al_map_rgb(250, 50, 80), 20);
	al_draw_line(100, 170, 100, 400, al_map_rgb(250, 50, 80), 20);

}


void Game::DrawFood()
{
	al_draw_filled_circle(55, 105, 2, al_map_rgb(0, 255, 0));
	al_draw_filled_circle(70, 105, 2, al_map_rgb(0, 255, 0));
	al_draw_filled_circle(90, 105, 2, al_map_rgb(0, 255, 0));
	al_draw_filled_circle(110, 105, 2, al_map_rgb(0, 255, 0));
	al_draw_filled_circle(130, 105, 2, al_map_rgb(0, 255, 0));
	al_draw_filled_circle(150, 105, 2, al_map_rgb(0, 255, 0));
	al_draw_filled_circle(170, 105, 2, al_map_rgb(0, 255, 0));
	al_draw_filled_circle(190, 105, 2, al_map_rgb(0, 255, 0));
	al_draw_filled_circle(210, 105, 2, al_map_rgb(0, 255, 0));
	al_draw_filled_circle(230, 105, 2, al_map_rgb(0, 255, 0));
	al_draw_filled_circle(250, 105, 2, al_map_rgb(0, 255, 0));
	al_draw_filled_circle(270, 105, 2, al_map_rgb(0, 255, 0));
	al_draw_filled_circle(290, 105, 2, al_map_rgb(0, 255, 0));
	al_draw_filled_circle(310, 105, 2, al_map_rgb(0, 255, 0));
	al_draw_filled_circle(330, 105, 2, al_map_rgb(0, 255, 0));
	al_draw_filled_circle(350, 105, 2, al_map_rgb(0, 255, 0));
	al_draw_filled_circle(370, 105, 2, al_map_rgb(0, 255, 0));

	al_draw_filled_circle(55, 55, 2, al_map_rgb(0, 255, 0));
	al_draw_filled_circle(70, 55, 2, al_map_rgb(0, 255, 0));
	al_draw_filled_circle(90, 55, 2, al_map_rgb(0, 255, 0));
	al_draw_filled_circle(110, 55, 2, al_map_rgb(0, 255, 0));
	al_draw_filled_circle(130, 55, 2, al_map_rgb(0, 255, 0));
	al_draw_filled_circle(150, 55, 2, al_map_rgb(0, 255, 0));
	al_draw_filled_circle(170, 55, 2, al_map_rgb(0, 255, 0));
	al_draw_filled_circle(190, 55, 2, al_map_rgb(0, 255, 0));
	al_draw_filled_circle(210, 55, 2, al_map_rgb(0, 255, 0));
	al_draw_filled_circle(230, 55, 2, al_map_rgb(0, 255, 0));
	al_draw_filled_circle(250, 55, 2, al_map_rgb(0, 255, 0));
	al_draw_filled_circle(270, 55, 2, al_map_rgb(0, 255, 0));
	al_draw_filled_circle(290, 55, 2, al_map_rgb(0, 255, 0));
	al_draw_filled_circle(310, 55, 2, al_map_rgb(0, 255, 0));
	al_draw_filled_circle(330, 55, 2, al_map_rgb(0, 255, 0));
	al_draw_filled_circle(350, 55, 2, al_map_rgb(0, 255, 0));
	al_draw_filled_circle(370, 55, 2, al_map_rgb(0, 255, 0));

	al_draw_filled_circle(55, 70, 2, al_map_rgb(0, 255, 0));
	al_draw_filled_circle(55, 90, 2, al_map_rgb(0, 255, 0));
	al_draw_filled_circle(55, 160, 2, al_map_rgb(0, 255, 0));
	al_draw_filled_circle(55, 180, 2, al_map_rgb(0, 255, 0));
	al_draw_filled_circle(55, 200, 2, al_map_rgb(0, 255, 0));
	al_draw_filled_circle(55, 220, 2, al_map_rgb(0, 255, 0));
	al_draw_filled_circle(55, 240, 2, al_map_rgb(0, 255, 0));
	al_draw_filled_circle(55, 260, 2, al_map_rgb(0, 255, 0));
	al_draw_filled_circle(55, 280, 2, al_map_rgb(0, 255, 0));
	al_draw_filled_circle(55, 300, 2, al_map_rgb(0, 255, 0));
	al_draw_filled_circle(55, 320, 2, al_map_rgb(0, 255, 0));
	al_draw_filled_circle(55, 340, 2, al_map_rgb(0, 255, 0));
	al_draw_filled_circle(70, 340, 2, al_map_rgb(0, 255, 0));
	al_draw_filled_circle(55, 390, 2, al_map_rgb(0, 255, 0));
	al_draw_filled_circle(55, 410, 2, al_map_rgb(0, 255, 0));
	al_draw_filled_circle(70, 410, 2, al_map_rgb(0, 255, 0));
	al_draw_filled_circle(70, 390, 2, al_map_rgb(0, 255, 0));
	al_draw_filled_circle(90, 410, 2, al_map_rgb(0, 255, 0));
	al_draw_filled_circle(110, 410, 2, al_map_rgb(0, 255, 0));

	al_draw_filled_circle(125, 410, 2, al_map_rgb(0, 255, 0));
	al_draw_filled_circle(125, 390, 2, al_map_rgb(0, 255, 0));
	al_draw_filled_circle(125, 370, 2, al_map_rgb(0, 255, 0));
	al_draw_filled_circle(125, 350, 2, al_map_rgb(0, 255, 0));
	al_draw_filled_circle(125, 330, 2, al_map_rgb(0, 255, 0));
	al_draw_filled_circle(125, 310, 2, al_map_rgb(0, 255, 0));
	al_draw_filled_circle(125, 290, 2, al_map_rgb(0, 255, 0));
	al_draw_filled_circle(125, 270, 2, al_map_rgb(0, 255, 0));
	al_draw_filled_circle(125, 250, 2, al_map_rgb(0, 255, 0));
	al_draw_filled_circle(125, 230, 2, al_map_rgb(0, 255, 0));
	al_draw_filled_circle(125, 210, 2, al_map_rgb(0, 255, 0));
	al_draw_filled_circle(125, 190, 2, al_map_rgb(0, 255, 0));
	al_draw_filled_circle(125, 170, 2, al_map_rgb(0, 255, 0));
	al_draw_filled_circle(125, 160, 2, al_map_rgb(0, 255, 0));
	al_draw_filled_circle(145, 160, 2, al_map_rgb(0, 255, 0));
	al_draw_filled_circle(165, 160, 2, al_map_rgb(0, 255, 0));
	al_draw_filled_circle(185, 160, 2, al_map_rgb(0, 255, 0));


	al_draw_filled_circle(225, 120, 2, al_map_rgb(0, 255, 0));
	al_draw_filled_circle(225, 140, 2, al_map_rgb(0, 255, 0));
	al_draw_filled_circle(225, 160, 2, al_map_rgb(0, 255, 0));
	al_draw_filled_circle(225, 200, 2, al_map_rgb(0, 255, 0));
	al_draw_filled_circle(225, 220, 2, al_map_rgb(0, 255, 0));
	al_draw_filled_circle(225, 240, 2, al_map_rgb(0, 255, 0));
	al_draw_filled_circle(225, 260, 2, al_map_rgb(0, 255, 0));
	al_draw_filled_circle(225, 280, 2, al_map_rgb(0, 255, 0));
	al_draw_filled_circle(225, 300, 2, al_map_rgb(0, 255, 0));
	al_draw_filled_circle(225, 320, 2, al_map_rgb(0, 255, 0));
	al_draw_filled_circle(225, 340, 2, al_map_rgb(0, 255, 0));
	al_draw_filled_circle(225, 360, 2, al_map_rgb(0, 255, 0));
	al_draw_filled_circle(225, 380, 2, al_map_rgb(0, 255, 0));
	al_draw_filled_circle(225, 400, 2, al_map_rgb(0, 255, 0));
	al_draw_filled_circle(225, 420, 2, al_map_rgb(0, 255, 0));
	al_draw_filled_circle(215, 470, 2, al_map_rgb(0, 255, 0));

	al_draw_filled_circle(55, 470, 2, al_map_rgb(0, 255, 0));
	al_draw_filled_circle(75, 470, 2, al_map_rgb(0, 255, 0));
	al_draw_filled_circle(95, 470, 2, al_map_rgb(0, 255, 0));
	al_draw_filled_circle(115, 470, 2, al_map_rgb(0, 255, 0));
	al_draw_filled_circle(135, 470, 2, al_map_rgb(0, 255, 0));
	al_draw_filled_circle(195, 470, 2, al_map_rgb(0, 255, 0));
	al_draw_filled_circle(155, 470, 2, al_map_rgb(0, 255, 0));
	al_draw_filled_circle(175, 470, 2, al_map_rgb(0, 255, 0));
	al_draw_filled_circle(195, 470, 2, al_map_rgb(0, 255, 0));
	al_draw_filled_circle(215, 470, 2, al_map_rgb(0, 255, 0));
	al_draw_filled_circle(235, 470, 2, al_map_rgb(0, 255, 0));
	al_draw_filled_circle(255, 470, 2, al_map_rgb(0, 255, 0));
	al_draw_filled_circle(275, 470, 2, al_map_rgb(0, 255, 0));
	al_draw_filled_circle(295, 470, 2, al_map_rgb(0, 255, 0));
	al_draw_filled_circle(315, 470, 2, al_map_rgb(0, 255, 0));
	al_draw_filled_circle(335, 470, 2, al_map_rgb(0, 255, 0));
	al_draw_filled_circle(355, 470, 2, al_map_rgb(0, 255, 0));
	al_draw_filled_circle(375, 470, 2, al_map_rgb(0, 255, 0));
	al_draw_filled_circle(395, 470, 2, al_map_rgb(0, 255, 0));
	al_draw_filled_circle(415, 470, 2, al_map_rgb(0, 255, 0));
	al_draw_filled_circle(435, 470, 2, al_map_rgb(0, 255, 0));
	al_draw_filled_circle(455, 470, 2, al_map_rgb(0, 255, 0));

	al_draw_filled_circle(475, 30, 2, al_map_rgb(0, 255, 0));
	al_draw_filled_circle(475, 50, 2, al_map_rgb(0, 255, 0));
	al_draw_filled_circle(475, 70, 2, al_map_rgb(0, 255, 0));
	al_draw_filled_circle(475, 90, 2, al_map_rgb(0, 255, 0));
	al_draw_filled_circle(475, 110, 2, al_map_rgb(0, 255, 0));
	al_draw_filled_circle(475, 130, 2, al_map_rgb(0, 255, 0));
	al_draw_filled_circle(475, 150, 2, al_map_rgb(0, 255, 0));
	al_draw_filled_circle(475, 170, 2, al_map_rgb(0, 255, 0));
	al_draw_filled_circle(475, 190, 2, al_map_rgb(0, 255, 0));
	al_draw_filled_circle(475, 210, 2, al_map_rgb(0, 255, 0));
	al_draw_filled_circle(475, 230, 2, al_map_rgb(0, 255, 0));
	al_draw_filled_circle(475, 250, 2, al_map_rgb(0, 255, 0));
	al_draw_filled_circle(475, 270, 2, al_map_rgb(0, 255, 0));
	al_draw_filled_circle(475, 290, 2, al_map_rgb(0, 255, 0));
	al_draw_filled_circle(475, 310, 2, al_map_rgb(0, 255, 0));
	al_draw_filled_circle(475, 330, 2, al_map_rgb(0, 255, 0));
	al_draw_filled_circle(475, 350, 2, al_map_rgb(0, 255, 0));
	al_draw_filled_circle(475, 370, 2, al_map_rgb(0, 255, 0));
	al_draw_filled_circle(475, 390, 2, al_map_rgb(0, 255, 0));
	al_draw_filled_circle(475, 410, 2, al_map_rgb(0, 255, 0));
	al_draw_filled_circle(475, 430, 2, al_map_rgb(0, 255, 0));
	al_draw_filled_circle(475, 450, 2, al_map_rgb(0, 255, 0));
	al_draw_filled_circle(475, 470, 2, al_map_rgb(0, 255, 0));
	al_draw_filled_circle(475, 490, 2, al_map_rgb(0, 255, 0));
}

void Game::Player()
{

	


}

