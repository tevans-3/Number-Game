#include "NumberGame.h"

Game initialize(){
    Game* new_game; 
    new_game->board = calloc(height, sizeof(char*)); 
    for (int i = 0; i < height; i++){
        char* row_i = calloc(width, sizeof(char)); 
        for (int j = 0; j < width; j++){
            row_i[j] = ' '; 
        }
        new_game->board[i] = row_i; 
    }
    return *new_game; 
}

void display_welcome_message(Game* game){
    ;
}

char* generate_new_state();
void move_state(void);
char* get_guess(void);
