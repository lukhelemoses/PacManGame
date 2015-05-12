#include<allegro5/allegro.h>
#include<allegro5/allegro_native_dialog.h>
#include<allegro5/allegro_primitives.h>
#include<allegro5/allegro_image.h>
#include"Game.h"
const int width = 600;
const int height = 600;
const float UPS = 50.00; //updates per second
//enum KEYS{ UP, DOWN, LEFT, RIGHT };

bool keys[4] = { false, false, false, false };
int main(int argc, char **argv)
{
	//primitive variable

	 //int gameover = false;

	// object variables
	Game play;

	//allegro variables
	ALLEGRO_DISPLAY*display = NULL;



	//initialisation of function
	if (!al_init())
		return -1;
	display = al_create_display(width, height);
	if (!display)
		return -1;

	al_init_primitives_addon();
	al_install_keyboard();
	//calling game functions


	bool gameover = false;
	int x = 475;
	int y = 490;
	int speed = 5, direction = UP;


	ALLEGRO_TIMER *timer = al_create_timer(1.0 / UPS);
	ALLEGRO_EVENT_QUEUE *move = al_create_event_queue();
	al_register_event_source(move, al_get_keyboard_event_source());
	al_register_event_source(move, al_get_timer_event_source(timer));

	al_start_timer(timer);
	
	//display and keyboard inputes
	while (!gameover)
	{
		play.DrawBoard();
		play.DrawFood();

		//pictur navigation and initialisation
		al_init_image_addon();
		ALLEGRO_BITMAP *player = al_load_bitmap("PacmanHead.png"); 
		ALLEGRO_EVENT events;
		{
		
		al_wait_for_event(move, &events);
		if (events.type = ALLEGRO_EVENT_KEY_DOWN)
		{
			switch (events.keyboard.keycode)
			{

			case ALLEGRO_KEY_DOWN:
				y += speed;
				break;

			case ALLEGRO_KEY_UP:
				y -= speed;
				break;

			case ALLEGRO_KEY_RIGHT:
				x += speed;
				break;

			case ALLEGRO_KEY_LEFT:
				x -= speed;
				break;
			case ALLEGRO_KEY_ESCAPE:
				gameover = true;
				break;

			}

		}
     }
		al_draw_bitmap(player, x + speed, y + speed, ALLEGRO_FLIP_HORIZONTAL);
        al_flip_display();
		al_clear_to_color(al_map_rgb(0, 0, 0));
	}


	al_rest(5.0);

	// destroy the allegro variables
	al_destroy_display(display);
	
	return 0;
}