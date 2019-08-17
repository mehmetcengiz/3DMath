#pragma once

#include "Vector.h"

class Plane{
public:
	Vector Point1;
	Vector Point2;
	Vector Point3;
	Vector VecV;
	Vector VecU;

	Plane(Vector _point1, Vector _point2, Vector _point3);
	Plane(Vector _point1, Vector _vecV, Vector _vecU);
	Vector Lerp(float t, float s);

};

