#pragma once
#include "parallelepiped.h"

class ParallelepipedWithMass : public Parallelepiped
{
public:
	ParallelepipedWithMass(double width, double depth, double height, double mass);
	~ParallelepipedWithMass();

public:
	double GetMass();
	void SetMass(double mass);

	double GetDensity();

	void operator/=(double x);

	ParallelepipedWithMass operator+(Parallelepiped x);
	ParallelepipedWithMass operator+(ParallelepipedWithMass x);

private:
	double m_Mass;
};
