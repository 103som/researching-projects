#include <iostream>
#include "parallelepiped.h"
#include "parallelepiped-with-mass.h"

using namespace std;


int main()
{
	system("chcp 1251 > nul");

	Parallelepiped parallelepiped(5, 10, 11);

	cout << "Ширина: " << parallelepiped.GetWidth() << "\n";

	parallelepiped.SetWidth(9.5);
	cout << "Измененная ширина: " << parallelepiped.GetWidth() << "\n";

	cout << "Объём: " << parallelepiped.GetVolume() << "\n";

	ParallelepipedWithMass parallelepipedWithMass(parallelepiped.GetWidth(), parallelepiped.GetDepth(), parallelepiped.GetHeight(), 16);

	cout << "Ширина: " << parallelepipedWithMass.GetWidth() << "\n";

	cout << "Плотность: " << parallelepipedWithMass.GetDensity() << "\n";

	cout << "Масса: " << parallelepipedWithMass.GetMass() << "\n";

	parallelepipedWithMass /= 4.0;
	cout << "Деление объекта на число 4: " << parallelepipedWithMass.GetMass();

	parallelepipedWithMass + parallelepiped;

	system("pause > nul");
	return 0;
}