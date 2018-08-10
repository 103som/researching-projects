#pragma once
#include <iostream>

class Car
{
public:
	Car(const char* in_Model, const char* in_Color, double in_Volume, double in_ConsumptionRate);
	virtual ~Car();

public:


public:
	double GetDistance() const;
	const char* GetModel() const;
	const char* GetColor() const;
	double GetVolume() const;
	double GetConsumptionRate() const;

private:
	char* m_Model;
	char* m_Color;
	double m_Volume;
	double m_ConsumptionRate;
};

std::ostream &operator<<(std::ostream &out, const Car &in_Car);
