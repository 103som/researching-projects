#include "myMoney.h"
#include <iostream>


void TestMyMoney()
{
	MyMoney a("����� ������", 10000, 9, 6);
	std::cout << a << "\n";

	MyMoney b("��������� ������", 15000, 8, 3);
	std::cout << b;
}

int main()
{
	system("chcp 1251 > nul");

	TestMyMoney();

	system("pause > nul");
}