#include "Vector3.h"

double MyVector3::getX()
{
	 return X;
}

void MyVector3::setX(double value)
{
	X = value;
}

double MyVector3::getY()
{
	return Y;
}

void MyVector3::setY(double value)
{
	Y = value;
}

double MyVector3::getZ()
{
	return Z;
}

void MyVector3::setZ(double value)
{
	Z = value;
}

MyVector3::MyVector3()
{
	X = 0.0f;
	Y = 0.0f;
	Z = 0.0f;
}

MyVector3::MyVector3(double x1, double y1, double z1)
{
	// To allow other values for X, Y and Z to be declared
	X = x1;
	Y = y1;
	Z = z1;
}

double MyVector3::Length()
{
	// A method to return the length of the vector
	return sqrt(X * X + Y * Y + Z * Z);
}

double MyVector3::LengthSquared()
{
	// A method to return the length squared of the vector
	return (X * X + Y * Y + Z * Z);
}

void MyVector3::Normalise()
{
	// A method to reduce the length of the vector to 1.0 
	// keeping the direction the same
	if (Length() > 0.0)
	{  // Check for divide by zero
		double magnit = Length();
		X /= magnit;
		Y /= magnit;
		Z /= magnit;
	}
}

MyVector3 MyVector3::operator+(const MyVector3 right) const
{
	return MyVector3(X + right.X, Y + right.Y, Z + right.Z);
}

MyVector3 MyVector3::operator-(const MyVector3 right) const
{
	return MyVector3(X - right.X, Y - right.Y, Z - right.Z);
}

MyVector3 MyVector3::operator*(const MyVector3 scalar) const
{
	return MyVector3(X * scalar.X, Y * scalar.Y, Z * scalar.Z);
}

double MyVector3::operator*(MyVector3 V1)
{
	// An overloaded operator * to return the scalar product of 2 vectors
	return (V1.X * X + V1.Y * Y + V1.Z * Z);
}

MyVector3 MyVector3::operator^(const MyVector3 right) const
{
	return MyVector3();
}

std::string MyVector3::toString()
{
	char tmpbuf[256];
	sprintf_s(tmpbuf, "[%g, %g, %g]", X, Y, Z);
	return tmpbuf;
}
