#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define width 30
#define height 40

srand(time(NULL)); 

int level = 0; 

struct Game {
    char** board; 
    }; 

typedef struct Game Game; 

enum valid_tactics{reverse, repeat, times_x, minus_x, divide_x, sum_of_prev_x, gcd_of_prev2, lcm_of_prev2;}; 

struct Tactic {
    char* tactic; 
}

typedef struct Tactic Tactic; 

struct TacticTree {  
    Tactic* prev = NULL; 
    Tactic* next = NULL; 
}

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
char* generate_new_state(void);
void move_state(void);
char* generate_sequence(void); 
char* get_guess(void);
void free(Game* game); 

