#include "MCMath.h"
# define M_PI 3.141592653f

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

float MCMath::AngleOf(const Vector& vectorX, const Vector& vectorY){
	float dotDivide = DotProduct(vectorX, vectorY) /( DistanceTo(Vector(0, 0, 0), vectorX) 
													* DistanceTo(Vector(0, 0, 0), vectorX));
	return acos(dotDivide); // Radians
}

float MCMath::RadianToDegree(float Angle){
	return (Angle * 180)/ M_PI;
}

float MCMath::DegreeToRadian(float Angle){
	return (Angle * M_PI) / 180;
}

Vector MCMath::Rotate(Vector vector, float DegreeInRadians){//Turn to 3D Vector
	
	float xVal = vector.x * cos((double)(DegreeInRadians)) - vector.y * sin((double)(DegreeInRadians));
	float yVal = vector.x * sin((double)(DegreeInRadians)) + vector.y * cos((double)(DegreeInRadians));
	
	return Vector(xVal,yVal,0);
}

Vector MCMath::CrossProduct(Vector& vectorA, Vector& vectorB){
	
	float xVal = (vectorA.y * vectorB.z) - (vectorA.z * vectorB.y);
	float yVal = (vectorA.x * vectorB.z) - (vectorA.z * vectorB.x);
	float zVal = (vectorA.x * vectorB.y) - (vectorA.y * vectorB.x);
	
	return Vector(xVal,yVal,zVal);
}




