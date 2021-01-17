#include "stdafx.h"
#include "Deck.h"
#include "Cards.h"
#include <time.h>
#include "Rank_Suits.h"


Deck::Deck()
{
	buildDeck();
}


Deck::~Deck()
{
}

void Deck::buildDeck()
{
	int cardCount = 0;
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 13; j++) {
			cards[cardCount].setSuit((suits)i);
			cards[cardCount].setRank((ranking)j);
			cardParse(cards[cardCount]);
			cardCount++;
		}
	}

	shuffleDeck();
	buildStack();
}

void Deck::cardParse(Cards& card)
{
	switch (card.getRank()) {
	case 0:
		card.setS_Rank("Two");
		break;
	case 1:
		card.setS_Rank("Three");
		break;
	case 2:
		card.setS_Rank("Four");
		break;
	case 3:
		card.setS_Rank("Five");
		break;
	case 4:
		card.setS_Rank("Six");
		break;
	case 5:
		card.setS_Rank("Seven");
		break;
	case 6:
		card.setS_Rank("Eight");
		break;
	case 7:
		card.setS_Rank("Nine");
		break;
	case 8:
		card.setS_Rank("Ten");
		break;
	case 9:
		card.setS_Rank("Jack");
		break;
	case 10:
		card.setS_Rank("Queen");
		break;
	case 11:
		card.setS_Rank("King");
		break;
	case 12:
		card.setS_Rank("Ace");
		break;
	}
	switch (card.getSuit()) {
	case 0:
		card.setS_Suit("Spades");
		break;
	case 1:
		card.setS_Suit("Clubs");
		break;
	case 2:
		card.setS_Suit("Diamonds");
		break;
	case 3:
		card.setS_Suit("Hearts");
		break;
	}
}

void Deck::shuffleDeck()
{
	srand(time(NULL));				//generate a random seed
	int key;
	Cards temp;
	for (int i = 0; i < 99; i++) {
		key = rand() % 52;			//generate a random number between 0-52
		temp = cards[0];
		cards[0] = cards[key];
		cards[key] = temp;
	}
}

void Deck::buildStack()
{
	for (int i = 0; i < 52; i++) {
		sDeck.push(cards[i]);
	}
}

Cards Deck::deal() 
{
	Cards temp = sDeck.top();
	sDeck.pop();
	return temp;

}