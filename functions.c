#include "NumberGame.h"

struct Game {
    int width; 
    int height; 
    char** board; 
    }; 

typedef struct Game Game; 

Game initialize(Game* Game){
    Game* new_game; 
    new_game->board = calloc(height, sizeof(char*)); 
    for (int i = 0; i < height; i++){
        char* row_i = calloc(width, sizeof(char)); 
        for (int j = 0; j < width; j++){
            row_i[j] = ' '; 
        }
        board[i] = row_i; 
    }
    return new_game; 
}

Game display_welcome_message(Game* Game){
    
}

char* generate_new_state();
void move_state(void);
char* get_guess(void);
