#include "stdafx.h"
#include "Player.h"


Player::Player()
{
}

Player::~Player()
{
}

Player::Player(int ch)
{
	chips = ch;
}

void Player::setChips(int ch)
{
	chips = ch;
}

void Player::setMaxBet(float mb)
{
	maxBet = mb;
}

void Player::setHandValue(float hv)
{
	handValue = hv;
}

void Player::setHand(Cards x, Cards y)
{
	hand[0] = x;
	hand[1] = y;
}
