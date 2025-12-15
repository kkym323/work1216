#include "Archer.h"

Archer::Archer(string nickname) : Player(nickname)
{
	job_name = "Archer";
	this->nickname = nickname;
	level = 1;
	HP = 100;
	MP = 200;
	power = 10;
	defence = 5;
	accuracy = 10;
	speed = 10;
}

void Archer::attack()
{
	cout << "궁수가 공격했습니다." << endl;
}

void Archer::defend()
{
	cout << "궁수가 방어했습니다." << endl;
}