#include "Line.h"
#include "MCMath.h"
#include "Plane.h"

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
	TypeOfLine = LineType::SEGMENT;
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

float Line::IntersectsAt(Line l){
	//Checking if lines are paralel.
	if (MCMath::DotProduct(l.VecV.Get2DPerp(), VecV) == 0.0f) {
		return NAN;
	}

	//Returning time value of intersected point of line.
	Vector C = l.PointA - PointA;
	float t = MCMath::DotProduct(l.VecV.Get2DPerp(), C) / MCMath::DotProduct(l.VecV.Get2DPerp(), VecV);

	if ((t < 0 || t>1) && (TypeOfLine == LineType::SEGMENT)) {
		return NAN;
	}

	return t;
}

float Line::IntersectsAt(Plane p){
	Vector Normal = MCMath::CrossProduct(p.VecV, p.VecU);

	if (MCMath::DotProduct(Normal, VecV) == 0.0f) {
		return NAN;
	}

	float t =  MCMath::DotProduct(Normal, (p.Point1 - PointA)) / MCMath::DotProduct(Normal, VecV);
	return t;
}
