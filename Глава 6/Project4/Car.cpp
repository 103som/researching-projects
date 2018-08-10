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
	out << "Цвет: " << in_Car.GetColor()
		<< ", Расход бензина на 100 км пути : " << in_Car.GetConsumptionRate() << " литров"
		<< ", Дистанция: " << in_Car.GetDistance()
		<< ", Модель: " << in_Car.GetModel()
		<< ", Объем: " << in_Car.GetVolume();
	return out;
}