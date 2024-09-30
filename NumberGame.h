#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define width 30
#define height 40

struct Game {
    char** board; 
    }; 

typedef struct Game Game; 

Game initialize(); 
void welcome_message(Game* game); 
void show_borders(Game* game); 
void show_title(Game* game);
void show_desc(Game* game);
void show_license(Game* game);
void clear_display(Game* game);
void show_instructions_lvl0(Game* game);  
void show_instructions_lvl1(Game* game); 
void show_instructions_lvl2(Game* game); 
void show_instructions_lvl3(Game* game); 
void show_instructions_lvl4(Game* game); 
void show_instructions_lvl5(Game* game); 
void show_instructions_bonuslvl(Game* game); 
char* generate_new_state();
void move_state(void);
char* get_guess(void);
void free(Game* game); 

