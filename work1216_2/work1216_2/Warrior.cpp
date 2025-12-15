#include "Warrior.h"

Warrior::Warrior(string nickname) : Player(nickname)
{
	job_name = "Warrior";
	this->nickname = nickname;
	level = 1;
	HP = 300;
	MP = 50;
	power = 20;
	defence = 3;
	accuracy = 10;
	speed = 5;
}

void Warrior::attack()
{
	cout << "전사가 공격했습니다." << endl;
}

void Warrior::defend()
{
	cout << "전사가 방어했습니다." << endl;
}