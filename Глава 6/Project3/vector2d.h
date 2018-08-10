#include <iostream>

#pragma once
class Vector2d
{
public:
	Vector2d(double x = 0, double y = 0);
	~Vector2d();

public:
	double GetCoordinateX() const;
	void SetCoordinateX(double x);
	double GetCoordinateY() const;
	void SetCoordinateY(double y);

	Vector2d operator+(const Vector2d &in_Vec);
	Vector2d operator-(const Vector2d &in_Vec);
	Vector2d operator*(const double &in_C);
	Vector2d operator/(const double &in_C);
	double operator*(const Vector2d &in_Vec);
	Vector2d operator=(const Vector2d &in_Vec);

private:
	double m_X;
	double m_Y;
};

std::ostream& operator<<(std::ostream &out, const Vector2d &in_Vec);