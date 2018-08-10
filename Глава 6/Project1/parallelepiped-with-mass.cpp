#include "parallelepiped-with-mass.h"



ParallelepipedWithMass::ParallelepipedWithMass(double width, double depth, double height, double mass) : Parallelepiped(width, depth, height)
{
	m_Mass = mass;
}


ParallelepipedWithMass::~ParallelepipedWithMass()
{
}

double ParallelepipedWithMass::GetMass()
{
	return m_Mass;
}

void ParallelepipedWithMass::SetMass(double mass)
{
	m_Mass = mass;
}

double ParallelepipedWithMass::GetDensity()
{
	return m_Mass / GetVolume();
}

void ParallelepipedWithMass::operator/=(double x)
{
	m_Mass = m_Mass / x;
}

ParallelepipedWithMass ParallelepipedWithMass::operator+(Parallelepiped x)
{
	ParallelepipedWithMass sum(this->GetWidth() + x.GetWidth(), this->GetDepth() + x.GetDepth(), this->GetHeight() + x.GetHeight(), this->GetMass());
	return sum;
}

ParallelepipedWithMass ParallelepipedWithMass::operator+(ParallelepipedWithMass x)
{
	ParallelepipedWithMass sum(this->GetWidth() + x.GetWidth(), this->GetDepth() + x.GetDepth(), this->GetHeight() + x.GetHeight(), this->GetMass() + x.GetMass());
	return sum;
}
