#pragma once
#include "Vector.h"

enum LineType {
	LINE,
	SEGMENT,
	RAY,
};

class Line{

public:


	Vector PointA;
	Vector PointB;
	Vector VecV;

	LineType TypeOfLine;

	Line(Vector _pointA, Vector _pointB, LineType _lineType);
	Line(Vector _pointA, Vector _vecV);
	Vector  GetPointAt(float T);
	float IntersectsAt(Line l);

};

