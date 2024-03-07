#pragma once
#include<string>
using namespace std;
class Student
{
	char gend; int age; int stependia;
public:
	string gruppa{}; int id{};
	string fio{};
	void Age(int age_);
	void Stepend(int stependia_);
	void Gend(char gend_);
	int next_age();
	int P_Stependia(int s);
	void Vivod() ;
};