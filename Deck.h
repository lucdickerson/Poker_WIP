#pragma once
#include <string>
using namespace std;
#include <stack>
#include "Cards.h"
#include "Rank_Suits.h"

class Deck
{
private:
	//enum ranking { two, three, four, five, six, seven, eight, nine, ten, jack, queen, king, ace };
	//enum suit { spades, clubs, diamonds, hearts };

	Cards cards[52];
	stack<Cards> sDeck;
public:
	Deck();
	~Deck();
	Cards getCards() { return *cards; }

	void buildDeck();
	void cardParse(Cards& card);
	void shuffleDeck();
	void buildStack();
	
	Cards deal();


};

