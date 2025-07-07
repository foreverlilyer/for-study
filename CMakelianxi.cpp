#include "CMakelianxi.h"


person::person(int a, string b)
{
	this->age = a;
	this->name = b;
}

void person::text1()
{
	cout << "name: " << this->name << endl;
	cout << "age: " << this->age << endl;
}

void person::text2()
{
	cout << "name: " << this->name << endl;
	cout << "age: " << this->age +1<< endl;
}

void person::text3()
{
	cout << "小叶\n";
}

void person::text4()
{
	cout << "asdasdsd" << endl;
	cout << 123 << endl;
}



person::~person()
{
}
