#pragma once

#include "Vector.h"

class MCMath{
public:

	//Vector GetNormal(const Vector& vector);
	static float DotProduct(const Vector& vectorX, const Vector& vectorY);	
	static Vector CrossProduct(Vector& vectorA, Vector& vectorB);
	static Vector Lerp(Vector Start, Vector End, float Alpha);
	static Vector Rotate(Vector VectorA, float DegreeInRadians, bool Clockwise);
	static float AngleOf(const Vector& vectorX, const Vector& vectorY); // return radian
	static float DistanceTo(const Vector& vectorX,const Vector& vectorY);
	static float Square(float Value);
	static float SquareRoot(float Value);
	static float RadianToDegree(float Angle);
	static float DegreeToRadian(float Angle);
	

};

