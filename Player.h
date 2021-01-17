#pragma once
#include "Cards.h"
#include "Deck.h"
class Player
{
public:
	int chips;					//chips used to bet with
	float handValue;			//determining value of current hand
	float maxBet;				//most a player will bet on a hand
	bool inGame = true;			//updates based on player's betting decision
	Cards hand[2];				//hand for the game
	Player();
	~Player();

	Player(int ch);
	// GETTERS, SETTERS //
	int getChips() { return chips; }
	float getMaxBet() { return maxBet; }
	float getHandValue() { return handValue; }
	Cards * getHand() { return hand; }

	void setChips(int ch);
	void setMaxBet(float mb);
	void setHandValue(float hv);
	void setHand(Cards x, Cards y);
	// BETTING //
	void calcHandValue(Cards * river);		//take in river, hand, calculate hand value
	void calcMaxBet();						//calculate based on hand value
	void betDecision();						//check, bet, or fold

};

