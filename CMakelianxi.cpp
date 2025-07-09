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
	cout << 01234 << endl;
}

void person::text2()
{
	cout << "name: " << this->name << endl;
	cout << "age: " << this->age +3<< endl;
}

void person::text3()
{
	cout << "小叶\n";
}

void person::text4()
{
	cout << "asdasdsd" << endl;
	cout << 123 << endl;
	cout << "foreveasdasdasdr" << endl;
	cout << "ainthese" << endl;
	cout << "huiyu" << endl;
	cout << "薯条" << endl;
	cout << "浔" << endl;
}



person::~person()
{
}
