#include "Car.h"
#include "FreightCar.h"
#include <iostream> 

void TestCar()
{
	const int size = 256;

	char model[size];
	std::cout << "¬ведите модель машины: ";
	std::cin.getline(model, size);
	
	char color[size];
	std::cout << "¬ведите цвет: ";
	std::cin.getline(color, size);

	Car car(model, color, 30, 120);

	std::cout << ' ' << car;
	
}

void TestFreightCar()
{
	const int size = 256;

	char model[size];
	std::cout << "¬ведите модель машины: ";
	std::cin.getline(model, size);

	char color[size];
	std::cout << "¬ведите цвет: ";
	std::cin.getline(color, size);

	FreightCar car(model, color, 30, 120, 35);

	std::cout << ' ' << car << "\n";
	
	std::cout << "÷ена: " << car.GetCost(5);
}

int main()
{
	FreightCar t(NULL, NULL, 1, 1, 1);
	system("chcp 1251 > nul");

	// TestCar();
	TestFreightCar();
	system("pause > nul");
}