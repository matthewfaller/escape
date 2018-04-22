#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define PLAYING 1
// int playing = 1;

void displayIntroGreeting() {
    printf("Welcome to Escape. This is room 1.\n");
    printf("What would you like to do? The commands are Run, Jump, and Examine\n");
    printf(":");
}

void checkInput();

void gameLoop() {
    char *input1 = malloc(sizeof(char*));
    char *input2 = malloc(sizeof(char*));
    
    while (PLAYING) {
        scanf("%s %s", input1, input2);
        checkInput(input1, input2);
    }
}

int main (void) {
    displayIntroGreeting();
    gameLoop();
    return 0;
}

void checkInput(char *action, char *object) {
    printf("Checking Input...\n");
    char *runAction = "Run";
    char *jumpAction = "Jump";
    char *examineAction = "Examine";
    
}