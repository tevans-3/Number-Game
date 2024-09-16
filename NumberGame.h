#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define width 300
#define height 600 

struct Game {
    char** board; 
    }; 

typedef struct Game Game; 

Game initialize(); 
void display_welcome_message(Game* game); 

char* generate_new_state();
void move_state(void);
char* get_guess(void);

