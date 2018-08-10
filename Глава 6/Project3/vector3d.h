#pragma once
#include "vector2d.h";

class Vector3d : public Vector2d
{
public:
	Vector3d(double in_X, double in_Y, double in_Z);
	~Vector3d();

public:
	Vector3d operator+(const Vector3d &in_Vec);
	Vector3d operator-(const Vector3d &in_Vec);
	Vector3d operator*(const double &in_C);
	Vector3d operator/(const double &in_C);
	double operator*(const Vector3d &in_Vec);
	Vector3d operator=(const Vector3d &in_Vec);

public:
	double GetCoordinateZ() const;
	void SetCoordinateZ(const double &in_Z);

private:
	double m_Z;
};

std::ostream &operator<<(std::ostream &in_Out, const Vector3d &in_Vec);
