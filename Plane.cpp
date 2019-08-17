#include "Plane.h"

Plane::Plane(Vector _point1, Vector _point2, Vector _point3) {
	Point1 = _point1;
	Point2 = _point2;
	Point3 = _point3;
	
	VecV = _point2 - _point1;
	VecU = _point3 - _point1;
}

//Plane::Plane(Vector _point1, Vector _vecV, Vector _vecU) {
//	Point1 = _point1;
//	VecV = _vecV;
//	VecU = _vecU;
//}


Vector Plane::Lerp(float s, float t) {

	float xst = Point1.x + VecU.x * s + VecV.x * t;
	float yst = Point1.y + VecU.y * s + VecV.y * t;
	float zst = Point1.z + VecU.z * s + VecV.z * t;
	return Vector(xst,yst,zst);
}


