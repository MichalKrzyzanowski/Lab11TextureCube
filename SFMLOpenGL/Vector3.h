#include <SFML/Graphics.hpp>
#pragma once
#include "Matrix3.h"


class Vector3
{
private:

public:
	double X;
	double Y;
	double Z;

	Vector3();
	Vector3(double t_x, double t_y, double t_z);

	double Length();
	double LengthSquared();
	void Normalise();

	Vector3 operator +(Vector3 t_v1) const;
	Vector3 operator -() const;
	Vector3 operator -(Vector3 t_v) const;

	double operator *(Vector3 t_v1) const;
	Vector3 operator *(double k) const;
	Vector3 operator *(float k) const;
	Vector3 operator *(int k) const;
	Vector3 operator*(Matrix3 M1) const;
	Vector3 operator ^(Vector3 V1) const;

	std::string ToString();

};

