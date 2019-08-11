#include "MCMath.h"
# define M_PI 3.141592653

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

float MCMath::DotProduct(const Vector& vectorX, const Vector& vectorY) {
	return ((vectorX.x * vectorY.x) + (vectorX.y * vectorY.y) + (vectorX.z * vectorY.z));
}

float MCMath::AngleOfInRadius(const Vector& vectorX, const Vector& vectorY){
	float dotDivide = DotProduct(vectorX, vectorY) /( DistanceTo(Vector(0, 0, 0), vectorX) 
													* DistanceTo(Vector(0, 0, 0), vectorX));
	return acos(dotDivide); // Radians
}

float MCMath::AngleOfInDegrees(const Vector& vectorX, const Vector& vectorY) {
	float dotDivide = DotProduct(vectorX, vectorY) / (DistanceTo(Vector(0, 0, 0), vectorX)
													* DistanceTo(Vector(0, 0, 0), vectorX));
	return (acos(dotDivide) * 180) / M_PI; // Radians
}


