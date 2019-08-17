#include "Line.h"
#include <algorithm>

Line::Line(Vector _pointA, Vector _pointB, LineType LineType){
	PointA = _pointA;
	PointB = _pointB;
	VecV = _pointB.Substract(_pointA);
	TypeOfLine = LineType;
}

Line::Line(Vector _pointA, Vector _vecV){
	PointA = _pointA;
	PointB = _pointA + _vecV;
	VecV = _vecV;
}

Vector Line::GetPointAt(float T){

	if (TypeOfLine == LineType::SEGMENT) {
		T = T >= 1 ? 1 : T;
		T = T <= 0 ? 0 : T;
	}
	else if (TypeOfLine == LineType::RAY && T < 0) {
		T = 0;
	}


	float xVal = PointA.x + (VecV.x * T);
	float yVal = PointA.y + (VecV.y * T);
	float zVal = PointA.z + (VecV.z * T);

	return Vector(xVal,yVal,zVal);
}
