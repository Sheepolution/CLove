#include "game.h"

Player myPlayer;
void game_load () {
	Player_new(&myPlayer);
}

void game_update (float dt) {
	Player_update(&myPlayer, dt);

}

void game_draw() {
	Player_draw(&myPlayer);

}