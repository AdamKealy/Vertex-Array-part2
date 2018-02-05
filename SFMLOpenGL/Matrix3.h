#pragma once
#include"Vector3.h"

const double PI = 3.141;

class Matrix3
{
public:

	// Constructor 1 create a zero matrix
	Matrix3();

	// Constructor 2
	Matrix3(MyVector3 Row1, MyVector3 Row2, MyVector3 Row3);
	
	// Constructor 3
	Matrix3(double _A11, double _A12, double _A13,
			double _A21, double _A22, double _A23,
			double _A31, double _A32, double _A33);

	MyVector3 operator *(MyVector3 V1);

	Matrix3 Transpose(Matrix3 M1);

	Matrix3 operator +(Matrix3 M1);

	Matrix3 operator -(Matrix3 M1);

	Matrix3 operator *(double x);

	Matrix3 operator *(Matrix3 M1);

	double Determinant(Matrix3 M1);

	MyVector3 Row(int i);

	MyVector3 Column(int i);


	Matrix3 Inverse(Matrix3 M1);

	Matrix3 Rotation(int _angle);

	Matrix3 Translate(int dx, int dy);

	Matrix3 Scale(int dx, int dy);

	Matrix3 neg(Matrix3 M1);

	Matrix3 RotationX(int _angle);

	Matrix3 RotationY(int _angle);

	Matrix3 RotationZ(int _angle);

	Matrix3 Scale3D(int dx);

private:
	// The class has nine variables, 3 rows and 3 columns
	 double A11;
	 double A12;
	 double A13;
	 double A21;
	 double A22;
	 double A23;
	 double A31;
	 double A32;
	 double A33;

};