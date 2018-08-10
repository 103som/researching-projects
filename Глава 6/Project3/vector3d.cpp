#include "vector3d.h"



Vector3d::Vector3d(double in_X, double in_Y, double in_Z) : Vector2d(in_X, in_Y), m_Z(in_Z)
{
}


Vector3d::~Vector3d()
{
}

Vector3d Vector3d::operator+(const Vector3d &in_Vec)
{
	return Vector3d(GetCoordinateX() + in_Vec.GetCoordinateX(), GetCoordinateY() + in_Vec.GetCoordinateY(), GetCoordinateZ() + in_Vec.GetCoordinateZ());
}

Vector3d Vector3d::operator-(const Vector3d &in_Vec)
{
	return Vector3d(GetCoordinateX() - in_Vec.GetCoordinateX(), GetCoordinateY() - in_Vec.GetCoordinateY(), GetCoordinateZ() - in_Vec.GetCoordinateZ());
}

Vector3d Vector3d::operator*(const double &in_C)
{
	return Vector3d(GetCoordinateX() * in_C, GetCoordinateY() * in_C, GetCoordinateZ() * in_C);
}

Vector3d Vector3d::operator/(const double &in_C)
{
	return Vector3d(GetCoordinateX() / in_C, GetCoordinateY() / in_C, GetCoordinateZ() / in_C);
}

double Vector3d::operator*(const Vector3d &in_Vec)
{
	return (GetCoordinateX() * in_Vec.GetCoordinateX() + GetCoordinateY() * in_Vec.GetCoordinateY() + GetCoordinateZ() * in_Vec.GetCoordinateZ());
}

Vector3d Vector3d::operator=(const Vector3d &in_Vec)
{
	SetCoordinateX(in_Vec.GetCoordinateX());
	SetCoordinateY(in_Vec.GetCoordinateY());
	SetCoordinateZ(in_Vec.GetCoordinateZ());
	
	return *this;
}

double Vector3d::GetCoordinateZ() const
{
	return m_Z;
}

void Vector3d::SetCoordinateZ(const double &in_Z)
{
	m_Z = in_Z;
}

std::ostream &operator<<(std::ostream &in_Out, const Vector3d &in_Vec)
{
	in_Out << '(' << in_Vec.GetCoordinateX() << ',' << in_Vec.GetCoordinateY() << ',' << in_Vec.GetCoordinateZ() << ')';
	return in_Out;
}