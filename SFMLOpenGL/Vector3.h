#pragma once
#include <math.h>
#include <string>

class MyVector3
{
public:

	double getX();
	double getY();
	double getZ();
	void  setX(double value);
	void  setY(double value);
	void  setZ(double value);

	MyVector3();

		// Constructor 2
	MyVector3(double x1, double y1, double z1);

	double Length();
	double LengthSquared();

	void Normalise();


	MyVector3 operator +(const MyVector3 right) const;
	MyVector3 operator -(const MyVector3 right) const;
	MyVector3 operator *(const MyVector3 scalar) const;
	double operator *(MyVector3 V1);
	MyVector3 operator ^(const MyVector3 right) const;

	std::string toString();

private:
	// The class has three variables x, y and z 
	double X;
	double Y;
	double Z;
};