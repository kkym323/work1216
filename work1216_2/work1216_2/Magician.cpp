#include "Magician.h"

Magician::Magician(string nickname) : Player(nickname)
{
	job_name = "Magician";
	this->nickname = nickname;
	level = 1;
	HP = 100;
	MP = 300;
	power = 10;
	defence = 3;
	accuracy = 10;
	speed = 7;
}

void Magician::attack()
{
	cout << "마법사가 공격했습니다." << endl;
}

void Magician::defend()
{
	cout << "마법사가 방어했습니다." << endl;
}