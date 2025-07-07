// CMakelianxi.h: 标准系统包含文件的包含文件
// 或项目特定的包含文件。

#pragma once

#include <iostream>
#include<string>
using namespace std;

class person
{
public:
	person(int a, string b);
	~person();

	void text1();

	void text2();

	void text3();

	void text4();


private:
	int age;
	string name;
};


// TODO: 在此处引用程序需要的其他标头。
