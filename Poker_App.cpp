/*
Poker_App.cpp : Application emulating a poker game with six players.
Used to demonstrate use of data structures, classes/objects, arrays, and simple decision making for AI players
Author: Lucas Dickerson
Date: January 6, 2021
*/

#include "stdafx.h"
#include <iostream>
using namespace std;
#include <string>
#include <stdlib.h>
#include <time.h>
#include <stack> 
#include <queue>
#include "Deck.h"
#include "Player.h"

//TODO: CREATE FUNCTIONS //
//function to enqueue players
//function to calculate minBet
//function to set player position
//function for flop, then proceeding river
//function to decide winner
//FUNCTION TO CALCULATE HAND TIERS
//function to give pot to winner

// GLOBAL VARIABLES //

int main()
{
	// GAME VARIABLES //
	float minBet;
	Deck deck;
	Cards river[5];
	int pot;
	enum position {bigBlind, littleBlind};

	int userChips = 500;


	//// CREATE PLAYERS //

	Player players[6];
	for (int i = 0; i < 6; i++) {
		players[i].setChips(500);
	}

	//TODO: ENQUEUE PLAYERS FOR TURNS


	system("pause");
    return 0;
}