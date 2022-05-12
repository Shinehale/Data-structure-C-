/*
 * File name:  poker1.c
 * Author:     Wei Liu, liuwei@hust.edu.cn
 * Date:       2019-9-1
 * Description:  Poker Game version 7: poker game project
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "poker.h"

int main( void )
{
    printf("Poker Game version 7: poker game project \n");

    // Declare and initialize the playerArray in type of Player
    Player playerArray[PLAYER_NUM];
    initializeGame( playerArray );

    // Prepare the game: draw cards
    int allCards[CARD_ALL_NUM] = {0};
    int SEED;
    scanf("%d",&SEED);
    srand(SEED);  
    prepareGame( allCards, playerArray );
    
    // Draw and count the cards
    printf("\nDraw results:\n");
    displayGame( playerArray, DISPLAY_CARDPLAY );
    printf("\nCount results:\n");
    displayGame( playerArray, DISPLAY_FACESTAT );

    // Plan and play the game 
    planGame( playerArray );
    printf("\nPlan results:\n");
    displayGame( playerArray, DISPLAY_COMBLIST);
//
    printf("\nPlay the game:\n");
    playGame( playerArray );
//    
    printf("Game results:\n");
    reportGame( playerArray );

    return 0;
}

