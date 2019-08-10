#include "MCMath.h"

float MCMath::DistanceTo(const Vector& vectorA, const Vector& vectorB){
	return	SquareRoot(Square(vectorB.x - vectorA.x)
					  +Square(vectorB.y - vectorA.y)
					  +Square(vectorB.z - vectorB.z)) ;
}

float MCMath::Square(float Value) {
	return Value * Value;
}

float MCMath::SquareRoot(float Value) {
	return sqrtf(Value);
}
