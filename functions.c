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

void show_borders(Game* game){
    for (int i = 0; i < height; i++){
        for (int j = 0; j < width; j++){
            if (i == 0 || i == height-1 || j == 0 || j == width-1){
                game->board[i][j] = "#"; 
            }
        }
    }
}

void show_title(Game* game){
    for (int i = 0; i < height; i++){
        for (int j = 0; j < width; j++){
            if (i == 19){
                game->board[i] =     "     ####################     ";
                game->board[i+1] =   "     #   NUMBER GAME    #     ";
                game->board[i+2] =   "     ####################     ";
            }
        }                                
    }
}

void show_desc(Game* game){
    for (int i = 0; i < height; i++){
        for (int j = 0; j < width; j++){
            if (i == 25){
                game->board[i] =     "     ####################     ";
                game->board[i+1] =   "     #        A         #     ";
                game->board[i+2] =   "     #      PATTERN     #     ";
                game->board[i+3] =   "     #    RECOGNITION   #     ";
                game->board[i+4] =   "     #       GAME       #     ";
                game->board[i+5] =   "     ####################     ";
            }
        }                                
    }
}

void show_license(Game* game){
    for (int i = 0; i < height; i++){
        for (int j = 0; j < width; j++){
            if (i == 50){
                game->board[i] =     "     ####################     ";
                game->board[i+1] =   "     #    MIT LICENSE   #     ";
                game->board[i+2] =   "     ####################     ";
        }                                
    }
}

void display_welcome_message(Game* game){
    show_borders(game); 
    show_title(game);
    show_desc(game);
    show_license(game);
}

void clear_display(Game* game){
    for (int i = 0; i < height; i++){
        for (int j = 0; j < width; j++){
            game->board[i][j] = ' '; 
        }
    }
}
char* generate_new_state();
void move_state(void);
char* get_guess(void);

void free(Game* game){
    for (int i = 0; i < height; i++){
        free(game->board); 
        free(board); 
    }
}