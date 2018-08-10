#include "FreightCar.h"



FreightCar::FreightCar(const char* in_Model, const char* in_Color, double in_Volume, double in_ConsumptionRate, double in_CarryingCapacity) : Car(in_Model, in_Color, in_Volume, in_ConsumptionRate), m_CarryingCapacity(in_CarryingCapacity)
{
}


FreightCar::~FreightCar()
{
}

double FreightCar::GetCost(double in_Cost) const
{
	return GetConsumptionRate() / 100 * in_Cost / m_CarryingCapacity;
}

double FreightCar::GetCarryingCapacity() const
{
	return m_CarryingCapacity;
}

std::ostream &operator<<(std::ostream &out, const FreightCar &in_Car)
{
	out << "����: " << in_Car.GetColor()
		<< ", ������ ������� �� 100 �� ���� : " << in_Car.GetConsumptionRate() << " ������"
		<< ", ���������: " << in_Car.GetDistance()
		<< ", ������: " << in_Car.GetModel()
		<< ", �����: " << in_Car.GetVolume()
		<< ", �����: " << in_Car.GetCarryingCapacity();
	return out;
}