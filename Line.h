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
	Vector Vec;

	LineType TypeOfLine;

	Line(Vector _pointA, Vector _pointB, LineType _lineType);
	Vector  GetPointAt(float T);

};

