#include "Thief.h"

Thief::Thief(string nickname) : Player(nickname)
{
	job_name = "Thief";
	this->nickname = nickname;
	level = 1;
	HP = 200;
	MP = 50;
	power = 15;
	defence = 5;
	accuracy = 10;
	speed = 20;
}

void Thief::attack()
{
	cout << "도적이 공격했습니다." << endl;
}

void Thief::defend()
{
	cout << "도적이 방어했습니다." << endl;
}