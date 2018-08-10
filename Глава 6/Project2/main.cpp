#include <iostream>
#include "number.h"

std::ostream& operator<<(std::ostream &out, Number &a)
{
    out << a.GetNumber();
	return out;
}

std::istream& operator>>(std::istream &in, Number &a)
{ 
	int c;
	in >> c;
	a = c;
	return in;
}

Number operator+(int num, Number &a)
{
	return (a.GetNumber() + num);
}

void Test(int a, int b)
{
	std::cout << a;
	std::cout << b;
}

int main()
{
	system("chcp 1251 > nul");

	Number a(9);

	std::cin >> a;

	if (a == 9)
		a = (a * 5 - 5 + 20) / 2;

	std::cout << a << '\n';

	a = 5 + a;

	std::cout << a;

	int b = 5;
	// std::cout << "\n" << (b++) << " " << (++b) << b++;
	Test(b++, ++b);
	system("pause > nul");
	return 0;
}