#include < iostream>
#include "vector2d.h"
#include "vector3d.h"

void TestVector2d()
{
	Vector2d vecA(9, 3);
	Vector2d vecB(5, 2);

	int num;
	std::cout << "Введите число для умножения вектора на него: ";
	std::cin >> num;

	std::cout << vecA + vecB << "\n";
	std::cout << vecA - vecB << "\n";
	std::cout << vecA * num << "\n";
	std::cout << vecA / num << "\n";
	std::cout << vecA * vecB << "\n";

	vecA = vecB;
	std::cout << vecA;
}

void TestVector3d()
{
	Vector3d vecA(9, 3, 4);
	Vector3d vecB(5, 2, 2);

	int num;
	std::cout << "Введите число для умножения вектора на него: ";
	std::cin >> num;

	std::cout << vecA + vecB << "\n";
	std::cout << vecA - vecB << "\n";
	std::cout << vecA * num << "\n";
	std::cout << vecA / num << "\n";
	std::cout << vecA * vecB << "\n";

	vecA = vecB;
	std::cout << vecA;
}

int main()
{
	system("chcp 1251 < nul");

	//TestVector2d();
	TestVector3d();

	system("pause > nul");
}