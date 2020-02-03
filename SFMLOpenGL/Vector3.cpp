#include "Vector3.h"

Vector3::Vector3()
{
	X = 0.0;
	Y = 0.0;
	Z = 0.0;
}

Vector3::Vector3(double t_x, double t_y, double t_z)
{
	X = t_x;
	Y = t_y;
	Z = t_z;
}


double Vector3::Length()
{
	return sqrt(X * X + Y * Y + Z * Z);
}

double Vector3::LengthSquared()
{
	return X * X + Y * Y + Z * Z;
}

void Vector3::Normalise()
{
	if (Length() > 0.0)
	{  // Check for divide by zero
		double magnit = Length();
		X /= magnit;
		Y /= magnit;
		Z /= magnit;
	}
}

Vector3 Vector3::operator+(Vector3 t_v1) const
{
	return { X + t_v1.X, Y + t_v1.Y, Z + t_v1.Z };
}

Vector3 Vector3::operator-(Vector3 t_v1) const
{
	return { X - t_v1.X, Y - t_v1.Y, Z - t_v1.Z };
}

Vector3 Vector3::operator-() const
{
	Vector3 v1;
	v1.X = -X;
	v1.Y = -Y;
	v1.Z = -Z;

	return v1;
}

double Vector3::operator*(Vector3 t_v1) const
{
	return (X * t_v1.X + Y * t_v1.Y + Z * t_v1.Z);
}

Vector3 Vector3::operator*(double k) const
{
	return { X * (float)k, Y * (float)k, Z * (float)k };
}

Vector3 Vector3::operator*(float k) const
{
	return { X * k, Y * k, Z * k };
}

Vector3 Vector3::operator*(int k) const
{
	return { X * k, Y * k, Z * k };
}

Vector3 Vector3::operator*(Matrix3 M1) const
{
	return { M1.A11 * X + M1.A21 * Y + M1.A31 * Z,
								M1.A12 * X + M1.A22 * Y + M1.A32 * Z,
								M1.A13 * X + M1.A23 * Y + M1.A33 * Z };
}

Vector3 Vector3::operator^(Vector3 t_v1) const
{
	return { Y * t_v1.Z - Z * t_v1.Y, Z * t_v1.X - X * t_v1.Z, X * t_v1.Y - Y * t_v1.X };
}

std::string Vector3::ToString()
{
	return { "(" + std::to_string(X) + "," + std::to_string(Y) + "," + std::to_string(Z) + ")" };
}
