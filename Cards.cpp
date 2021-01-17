#include "stdafx.h"
#include "Cards.h"


Cards::Cards()
{
}


Cards::~Cards()
{
}

void Cards::setRank(ranking r)
{
	rank = r;
}

void Cards::setSuit(suits s)
{
	suit = s;
}

void Cards::setS_Rank(string sR)
{
	sRank = sR;
}

void Cards::setS_Suit(string sS)
{
	sSuit = sS;
}

ostream & operator<<(ostream & os, const Cards & card)
{
	os << card.sRank << " of " << card.sSuit;
	return os;
}
