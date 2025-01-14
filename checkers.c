#include <stdio.h>
#include <stdlib.h>
#include "checkers.h"

int main(){
    welcomeScreen();
    clearScreen();
    //displayExplicitBoard();
    playGame();
    
    return 0;
}

void playGame(){
    char playerB[NAME], playerW[NAME];
    int currentPlayer = PLAYER_B;
    int loop = ZERO;

    printf("Player B, please enter your name: \n");
    scanf("%s", playerB);
    printf("Player W, please enter your name: \n");
    scanf("%s", playerW);
    printf("%s & %s, let's play checkers!\n", playerB, playerW);

    while (loop <= 4){
        displayExplicitBoard();

        printf("%d", currentPlayer);

        if (currentPlayer == PLAYER_B){
            printf("%s it is your turn\n", playerB);
            currentPlayer = PLAYER_W;
        }
        //else if (currentPlayer == PLAYER_W)
        else
        {
            printf("%s it is your turn\n", playerW);
            currentPlayer = PLAYER_B;
        }

        getchar();
        loop++;
    }

}

void welcomeScreen(){
    printf("\n\n- - - - CHECKERS - - - -\n");
    printf("\tRules here\n\n");
    return;
}

void displayExplicitBoard(){
    printf("|-----------------------------------------------------|\n");
    printf("|     |  A  |  B  |  C  |  D  |  E  |  F  |  G  |  H  |\n");
    printf("|-----------------------------------------------------|\n");
    printf("|  1  |     |  W  |     |  W  |     |  W  |     |  W  |\n");
    printf("|-----------------------------------------------------|\n");
    printf("|  2  |  W  |     |  W  |     |  W  |     |  W  |     |\n");
    printf("|-----------------------------------------------------|\n");
    printf("|  3  |     |  W  |     |  W  |     |  W  |     |  W  |\n");
    printf("|-----------------------------------------------------|\n");
    printf("|  4  |     |     |     |     |     |     |     |     |\n");
    printf("|-----------------------------------------------------|\n");
    printf("|  5  |     |     |     |     |     |     |     |     |\n");
    printf("|-----------------------------------------------------|\n");
    printf("|  6  |  B  |     |  B  |     |  B  |     |  B  |     |\n");
    printf("|-----------------------------------------------------|\n");
    printf("|  7  |     |  B  |     |  B  |     |  B  |     |  B  |\n");
    printf("|-----------------------------------------------------|\n");
    printf("|  8  |  B  |     |  B  |     |  B  |     |  B  |     |\n");
    printf("|-----------------------------------------------------|\n");
    return;
}

void clearScreen(){

    printf(" Hit <ENTER> to continue\n\n");

    char enter;
    scanf("%c", &enter);

    //system("cls"); this is for windows
    system("clear");

    return;
}