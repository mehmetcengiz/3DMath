#pragma once

#include "Vector.h"
#include <math.h>

class MCMath{
public:

	//Vector GetNormal(const Vector& vector);
	float DistanceTo(const Vector& vectorX,const Vector& vectorY);
	float Square(float Value);
	float SquareRoot(float Value);
	//float DotProduct(const Vector& vectorX, const Vector& vectorY);
	//float AngleOf(const Vector& vectorX, const Vector& vectorY);
	

};

