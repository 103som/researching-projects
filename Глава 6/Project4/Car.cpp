#include "Car.h"
#include <string.h>


Car::Car(const char* in_Model, const char* in_Color, double in_Volume, double in_ConsumptionRate) : m_Volume(in_Volume), m_ConsumptionRate(in_ConsumptionRate)
{
	int size = strlen(in_Model) + 1;
	m_Model = new char[size];
	strcpy_s(m_Model, size, in_Model);

	size = strlen(in_Color) + 1;
	m_Color = new char[size];
	strcpy_s(m_Color, size, in_Color);

}


Car::~Car()
{
	delete[] m_Model;
	delete[] m_Color;
}

double Car::GetDistance() const
{
	return m_Volume / m_ConsumptionRate * 100;
}

const char* Car::GetModel() const
{
	return m_Model;
}

const char* Car::GetColor() const
{
	return m_Color;
}

double Car::GetVolume() const
{
	return m_Volume;
}

double Car::GetConsumptionRate() const
{
	return m_ConsumptionRate;
}

std::ostream &operator<<(std::ostream &out, const Car &in_Car)
{
	out << "����: " << in_Car.GetColor()
		<< ", ������ ������� �� 100 �� ���� : " << in_Car.GetConsumptionRate() << " ������"
		<< ", ���������: " << in_Car.GetDistance()
		<< ", ������: " << in_Car.GetModel()
		<< ", �����: " << in_Car.GetVolume();
	return out;
}