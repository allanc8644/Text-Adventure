#pragma once
class Player
{
private:
	int health;
	int attack;
	int defense;

public:
	int getHealth();
	int getAttack();
	int getDefense();

	void setHealth(int h);
	void setAttack(int a);
	void setDefense(int b);

};

