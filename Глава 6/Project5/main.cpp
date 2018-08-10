#include "myMoney.h"
#include <iostream>


void TestMyMoney()
{
	MyMoney a("Дуров Андрей", 10000, 9, 6);
	std::cout << a << "\n";

	MyMoney b("Романенко Андрей", 15000, 8, 3);
	std::cout << b;
}

int main()
{
	system("chcp 1251 > nul");

	TestMyMoney();

	system("pause > nul");
}