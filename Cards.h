#include <string>
using namespace std;
#include "Rank_Suits.h"
#pragma once
class Cards
{
private:
	
	ranking rank;
	suits suit;
	string sRank;
	string sSuit;

public:
	Cards();
	~Cards();
	ranking getRank() { return rank; }
	suits getSuit() { return suit; }
	string getS_Rank() { return sRank; }
	string getS_Suit() { return sSuit; }

	void setRank(ranking r);
	void setSuit(suits s);
	void setS_Rank(string sR);
	void setS_Suit(string sS);
	// printing //
	friend ostream& operator<<(ostream& os, const Cards& card);

};

