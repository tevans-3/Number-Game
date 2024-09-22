#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define width 30
#define height 70

struct Game {
    char** board; 
    }; 

typedef struct Game Game; 

Game initialize(); 
void display_welcome_message(Game* game); 
void show_borders(Game* game); 
void show_title(Game* game);
void show_desc(Game* game);
void show_license(Game* game);
void clear_display(Game* game): 
char* generate_new_state();
void move_state(void);
char* get_guess(void);
void free(Game* game); 

