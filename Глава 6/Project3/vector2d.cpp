#include "vector2d.h"



Vector2d::Vector2d(double x, double y): m_X(x), m_Y(y)
{
}


Vector2d::~Vector2d()
{
}

Vector2d Vector2d::operator+(const Vector2d &in_Vec)
{
	return Vector2d(in_Vec.GetCoordinateX() + GetCoordinateX(), in_Vec.GetCoordinateY() + GetCoordinateY());
}

Vector2d Vector2d::operator-(const Vector2d &in_Vec)
{
	return Vector2d(GetCoordinateX() - in_Vec.GetCoordinateX(), GetCoordinateY() - in_Vec.GetCoordinateY());
}

Vector2d Vector2d::operator*(const double &in_C)
{
	return Vector2d(GetCoordinateX() * in_C, GetCoordinateY() * in_C);
}

Vector2d Vector2d::operator/(const double &in_C)
{
	return Vector2d(GetCoordinateX() / in_C, GetCoordinateY() / in_C);
}

double Vector2d::operator*(const Vector2d &in_Vec)
{
	return double(GetCoordinateX() * in_Vec.GetCoordinateX() + GetCoordinateY() * in_Vec.GetCoordinateY());
}

Vector2d Vector2d::operator=(const Vector2d &in_Vec)
{
	m_X = in_Vec.GetCoordinateX();
	m_Y = in_Vec.GetCoordinateY();

	return *this;
}

double Vector2d::GetCoordinateX() const
{
	return m_X;
}

void Vector2d::SetCoordinateX(double x)
{
	m_X = x;
}

double Vector2d::GetCoordinateY() const
{
	return m_Y;
}

void Vector2d::SetCoordinateY(double y)
{
	m_Y = y;
}

std::ostream& operator<<(std::ostream &out, const Vector2d &in_Vec)
{
	out << '(' << in_Vec.GetCoordinateX() << ',' << in_Vec.GetCoordinateY() << ')';
	return out;
}