
 
#ifndef _PLAYER_H_
#define _PLAYER_H_

#include "actor.h"


// struct for the player
typedef struct {
	Tactor *actor;

	int score;
	int jumping;
	int jump_pressed;
	int eat_pressed;
	int eat_counter;

	int angle;

	int ammo;
	int lives;
	int health;
	int wounded;

	int dy;

	// pick up related
	int cherries;
	int stars;
	int cherries_taken;
	int stars_taken;
} Tplayer;


// the player 
Tplayer player;

// functions
void draw_player(BITMAP *bmp, Tplayer *p, int x, int y);
void wound_player(Tplayer *p);
void kill_player(Tplayer *p);

#endif