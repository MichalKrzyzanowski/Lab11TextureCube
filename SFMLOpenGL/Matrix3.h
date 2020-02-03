#pragma once


#include <string>
#include <SFML/Graphics.hpp>

#define PI 3.14159265359


class Vector3;

class Matrix3
{
public:
	double A11;
	double A12;
	double A13;

	double A21;
	double A22;
	double A23;

	double A31;
	double A32;
	double A33;

	Matrix3();
	Matrix3(Vector3 Row1, Vector3 Row2, Vector3 Row3);
	Matrix3(double _A11, double _A12, double _A13,
			double _A21, double _A22, double _A23,
			double _A31, double _A32, double _A33);

	Vector3 operator *(Vector3 V1) const;

	Matrix3 Transpose() const;

	Matrix3 operator +(Matrix3 M2) const;
	Matrix3 operator -(Matrix3 M2) const;
	Matrix3 operator *(double x) const;
	Matrix3 operator *(Matrix3 M2) const;
	//Matrix3 operator=(Matrix3 M2) const;


	double Determinant() const;
	Vector3 Row(int i) const;
	Vector3 Column(int i) const;
	Matrix3 Inverse(Matrix3 M1) const;
	Matrix3 Rotation(int _angle) const;
	static Matrix3 Translate(float dx, float dy);
	static Matrix3 Scale(int dx, int dy);

	Matrix3 operator -() const;

	static Matrix3 RotationX(double _angle);
	static Matrix3 RotationY(double _angle);
	static Matrix3 RotationZ(double _angle);

	static Matrix3 Scale3D(double dx);

	std::string toString();
};

