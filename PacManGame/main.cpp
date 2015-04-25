#include<allegro5/allegro.h>
#include<allegro5/allegro_native_dialog.h>
#include<allegro5/allegro_primitives.h>
#include"Game.h"
const int width = 600;
const int height = 600;
//bool KEYS{ UP, DOWN, LEFT, RIGHT };
bool keys[4] = { false, false, false, false };
int main(int argc, char **argv)
{
	//primitive variable
	
	const int gameover = false;

	// object variables
	Game play;
	
	//allegro variables
	ALLEGRO_DISPLAY*display=NULL;



	//initialisation of function
	if (!al_init())
		return -1;
	display = al_create_display(width, height);
	if (!display)
		return -1;

	al_init_primitives_addon();
	al_install_keyboard();
     //calling game functions
	


	//display
	while (!gameover)
	{
		play.DrawBoard();
		al_flip_display();
		al_clear_to_color(al_map_rgb(0, 0, 0));
	}


	al_rest(5.0);

	// destroy the allegro variables
	al_destroy_display(display);


	return 0;
}