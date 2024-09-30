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
            if (i == 0 || i == height-1){
                game->board[i][j] = '-'; 
            }
            else if (j == 0 || j == width-1){
                game->board[i][j] = '|';
            }
        }
    }
}

void show_title(Game* game){
    for (int i = 0; i < height; i++){
            if (i == 9){
                game->board[i] =     "|    ####################    |";
                game->board[i+1] =   "|    #   NUMBER GAME    #    |";
                game->board[i+2] =   "|    ####################    |";
        }                                
    }
}

void show_desc(Game* game){
    for (int i = 0; i < height; i++){
            if (i == 15){
                game->board[i] =     "|    ####################    |";
                game->board[i+1] =   "|    #        A         #    |";
                game->board[i+2] =   "|    #      PATTERN     #    |";
                game->board[i+3] =   "|    #    RECOGNITION   #    |";
                game->board[i+4] =   "|    #       GAME       #    |";
                game->board[i+5] =   "|    ####################    |";
        }                                
    }
}

void show_license(Game* game){
    for (int i = 0; i < height; i++){
            if (i == 30){
                game->board[i] =     "|    ####################    |";
                game->board[i+1] =   "|    #    MIT LICENSE   #    |";
                game->board[i+2] =   "|    ####################    |";                             
        }
    }
}

void welcome_message(Game* game){
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

void print_board(Game* game){
    for (int i = 0; i < height; i++){
        for (int j = 0; j < width; j++){
            printf("%c ", game->board[i][j]); 
        }
        printf("%s", "\n"); 
    }
}

void show_instructions_lvl0(Game* game){ 
    //
    //Level 0 is the start of the game. 
    //
    show_borders(game); 
     for (int i = 0; i < height; i++){
        for (int j = 0; j < width; j++){
            if (i == 19){
                game->board[i] =     "     ####################     ";
                game->board[i+1] =   "     #   NUMBER GAME    #     ";
                game->board[i+2] =   "     ####################     ";
            }
            if (i == 60){
                game->board[i] =     "     ####################     ";
                game->board[i+1] =   "     # PRESS 1 TO START #     ";
                game->board[i+2] =   "     #                  #     ";
                game->board[i+3] =   "     # PRESS 0 TO QUIT  #     ";
                game->board[i+4] =   "     ####################     ";
            }
        }                                
    }
}

void show_instructions_lvl1(Game* game){
    show_borders(game); 
     for (int i = 0; i < height; i++){
        for (int j = 0; j < width; j++){
            if (i == 19){
                game->board[i] =     "###############################";
                game->board[i+1] =   "#          INSTRUCTIONS:      #";
                game->board[i+2] =   "#     GUESS THE NEXT NUMBER   #";
                game->board[i+3] =   "#        IN THE SEQUENCE.     #";
                game->board[i+4] =   "#                             #";
                game->board[i+5] =   "#          FOR EXAMPLE,       #";
                game->board[i+6] =   "#  GIVEN THE SEQUENCE 1,2,1,2 #";
                game->board[i+7] =   "#      THE NEXT NUMBER IS 1   #";
                game->board[i+5] =   "###############################";
            }
            if (i == 60){
                game->board[i] =     "     ####################     ";
                game->board[i+1] =   "     # PRESS 1 TO START #     ";
                game->board[i+2] =   "     ####################     ";
            }
        }                                
    }
}

void show_instructions_lvl2(Game* game){
    show_borders(game); 
     for (int i = 0; i < height; i++){
        for (int j = 0; j < width; j++){
            if (i == 19){
                game->board[i] =     "###############################";
                game->board[i+1] =   "#         INSTRUCTIONS:       #";
                game->board[i+2] =   "#          SAME THING         #";
                game->board[i+3] =   "#     BUT SLIGHTLY FASTER.    #";
                game->board[i+5] =   "###############################";
            }
            if (i == 60){
                game->board[i] =     "     ####################     ";
                game->board[i+1] =   "     # PRESS 1 TO START #     ";
                game->board[i+2] =   "     ####################     ";
            }
        }                                
    }
} 

void show_instructions_lvl3(Game* game){
    show_borders(game); 
     for (int i = 0; i < height; i++){
        for (int j = 0; j < width; j++){
            if (i == 19){
                game->board[i] =     "###############################";
                game->board[i+1] =   "#         INSTRUCTIONS:       #";
                game->board[i+2] =   "#          SAME THING         #";
                game->board[i+3] =   "#       BUT MUCH FASTER.      #";
                game->board[i+5] =   "###############################";
            }
            if (i == 60){
                game->board[i] =     "     ####################     ";
                game->board[i+1] =   "     # PRESS 1 TO START #     ";
                game->board[i+2] =   "     ####################     ";
            }
        }                                
    }
}
void show_instructions_lvl4(Game* game){
    show_borders(game); 
     for (int i = 0; i < height; i++){
        for (int j = 0; j < width; j++){
            if (i == 19){
                game->board[i] =     "###############################";
                game->board[i+1] =   "#         INSTRUCTIONS:       #";
                game->board[i+2] =   "#          SAME THING         #";
                game->board[i+3] =   "#        BUT EVEN FASTER.     #";
                game->board[i+5] =   "###############################";
            }
            if (i == 60){
                game->board[i] =     "     ####################     ";
                game->board[i+1] =   "     # PRESS 1 TO START #     ";
                game->board[i+2] =   "     ####################     ";
            }
        }                                
    }
}
void show_instructions_lvl5(Game* game){
    show_borders(game); 
     for (int i = 0; i < height; i++){
        for (int j = 0; j < width; j++){
            if (i == 19){
                game->board[i] =     "###############################";
                game->board[i+1] =   "#          INSTRUCTIONS:      #";
                game->board[i+2] =   "#    IF THE SCREEN GOES BLANK #";
                game->board[i+3] =   "#    ENTER THE LAST SEQUENCE  #";
                game->board[i+4] =   "#       IN REVERSE ORDER      #";
                game->board[i+5] =   "#          FOR EXAMPLE,       #";
                game->board[i+6] =   "#  GIVEN THE SEQUENCE 1,2,3,4 #";
                game->board[i+7] =   "#        ENTER 4 3 2 1        #";
                game->board[i+8] =   "###############################";
            }
            if (i == 60){
                game->board[i] =     "     ####################     ";
                game->board[i+1] =   "     # PRESS 1 TO START #     ";
                game->board[i+2] =   "     ####################     ";
            }
        }                                
    }
} 

void show_instructions_bonuslvl(Game* game){ 
    show_borders(game); 
     for (int i = 0; i < height; i++){
        for (int j = 0; j < width; j++){
            if (i == 19){
                game->board[i] =     "###############################";
                game->board[i+1] =   "   NO INSTRUCTIONS GOOD LUCK  #";
                game->board[i+8] =   "###############################";
            }
            if (i == 60){
                game->board[i] =     "     ####################     ";
                game->board[i+1] =   "     # PRESS 1 TO START #     ";
                game->board[i+2] =   "     ####################     ";
            }
        }                                
    }
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
