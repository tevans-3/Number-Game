#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define width 300
#define height 600 

struct Game {}; 
typedef struct Game Game; 
void initialize(Game* Game); 
void display_welcome_message(Game* Game); 

char* generate_new_state();
void move_state(void);
char* get_guess(void);

 //   _     
//   | | ...
//    |   /
// ---|---
//    |
//   / \
//  /   \ 
