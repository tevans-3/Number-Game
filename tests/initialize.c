/*
Testing the initialize game function. 
*/

//test width and height combinations 
#include <stdio.h> 
#include <stdlib.h> 

/*
#define width 100
#define height 100 
*/ 
#define width 30 
#define height 70

struct Game {
    char** board; 
    }; 

typedef struct Game Game; 

Game initialize(); 

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

Game initialize_nonempty(){
    Game* new_game; 
    new_game->board = calloc(height, sizeof(char*)); 
    for (int i = 0; i < height; i++){
        char* row_i = calloc(width, sizeof(char)); 
        for (int j = 0; j < width; j++){
            row_i[j] = '*'; 
        }
        new_game->board[i] = row_i; 
    }
    return *new_game; 
}

void print_board(Game* game){
    for (int i = 0; i < height; i++){
        for (int j = 0; j < width; j++){
            printf("%c ", game->board[i][j]); 
        }
        printf("%s", "\n"); 
    }
}
int main(){
    Game new_game = initialize();  
    print_board(&new_game); 

    Game new_gamev2 = initialize_nonempty();
    print_board(&new_gamev2); 

    return 0; 
}
