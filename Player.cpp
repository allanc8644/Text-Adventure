#include "Player.h"

int Player::getHealth() {

	return health;
}

int Player::getAttack() {
	
	return attack;
}

int Player::getDefense() {
	
	return defense;
}


void Player::setHealth(int h) {
	
	health = h;
}
void Player::setAttack(int a) {

	attack = a;
}

void Player::setDefense(int b) {

	defense = b;
}
