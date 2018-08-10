#include <iostream>
#include "parallelepiped.h"
#include "parallelepiped-with-mass.h"

using namespace std;


int main()
{
	system("chcp 1251 > nul");

	Parallelepiped parallelepiped(5, 10, 11);

	cout << "������: " << parallelepiped.GetWidth() << "\n";

	parallelepiped.SetWidth(9.5);
	cout << "���������� ������: " << parallelepiped.GetWidth() << "\n";

	cout << "�����: " << parallelepiped.GetVolume() << "\n";

	ParallelepipedWithMass parallelepipedWithMass(parallelepiped.GetWidth(), parallelepiped.GetDepth(), parallelepiped.GetHeight(), 16);

	cout << "������: " << parallelepipedWithMass.GetWidth() << "\n";

	cout << "���������: " << parallelepipedWithMass.GetDensity() << "\n";

	cout << "�����: " << parallelepipedWithMass.GetMass() << "\n";

	parallelepipedWithMass /= 4.0;
	cout << "������� ������� �� ����� 4: " << parallelepipedWithMass.GetMass();

	parallelepipedWithMass + parallelepiped;

	system("pause > nul");
	return 0;
}