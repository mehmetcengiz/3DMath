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

Vector MCMath::Rotate(Vector VectorA, float DegreeInRadians, bool Clockwise){//Turn to 3D Vector
	
	if (Clockwise) {
		DegreeInRadians = 2 * M_PI - DegreeInRadians;
	}

	float xVal = VectorA.x * cos((double)(DegreeInRadians)) - VectorA.y * sin((double)(DegreeInRadians));
	float yVal = VectorA.x * sin((double)(DegreeInRadians)) + VectorA.y * cos((double)(DegreeInRadians));
	
	return Vector(xVal,yVal,0);
}

Vector MCMath::CrossProduct(Vector& vectorA, Vector& vectorB){
	
	float xVal = (vectorA.y * vectorB.z) - (vectorA.z * vectorB.y);
	float yVal = (vectorA.z * vectorB.x) - (vectorA.x * vectorB.z);
	float zVal = (vectorA.x * vectorB.y) - (vectorA.y * vectorB.x);
	
	return Vector(xVal,yVal,zVal);
}




