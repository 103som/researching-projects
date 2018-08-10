#pragma once
#include "Car.h"

class FreightCar : public Car
{
public:
	FreightCar(const char* in_Model, const char* in_Color, double in_Volume, double in_ConsumptionRate, double in_CarryingCapacity);
	virtual ~FreightCar();

public:
	double GetCost(double in_Cost) const;
	double GetCarryingCapacity() const;

private:
	double m_CarryingCapacity;
};

std::ostream &operator<<(std::ostream &out, const FreightCar &in_Car);