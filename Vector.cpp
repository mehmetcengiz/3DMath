#include "Vector.h"
#include "MCMath.h"
#include <math.h>

Vector::Vector() 
	:x(0) , y(0) ,z(0){

}
Vector::Vector(float x, float y, float z) {
	Vector::x = x;
	Vector::y = y;
	Vector::z = z;
}

Vector::Vector(float x, float y) {
	Vector::x = x;
	Vector::y = y;
	Vector::z = -1;
}


Vector::~Vector(){

}

Vector Vector::Add(const Vector& Other) const{
	return Vector(x + Other.x, y + Other.y, z + Other.z);
}
Vector Vector::Substract(const Vector& Other) const {
	return Vector(x - Other.x, y - Other.y, z - Other.z);
}

Vector Vector::Multiply(const Vector& Other) const {
	return Vector(x * Other.x, y * Other.y, z * Other.z);
}
Vector Vector::Multiply(const float Value) const {
	return Vector(x * Value, y * Value, z * Value);
}
Vector Vector::Divide(const Vector& Other) const {
	return Vector(x / Other.x, y / Other.y, z / Other.z);
}

Vector Vector::Divide(const float Value) const {
	if (Value == 0) {
		return Vector(0, 0, 0);
	}
	return Vector(x / Value, y / Value, z / Value);
}

float Vector::Lenght() const{
	return MCMath::DistanceTo(Vector(x, y, z), Vector(0, 0, 0));
}

Vector Vector::GetNormalizedVector() const {
	float l = Lenght();
	return Vector(x / l, y / l, z / l);
}
