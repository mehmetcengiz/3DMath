#include "Vector.h"

Vector::Vector() 
	:x(0) , y(0) ,z(0){

}
Vector::Vector(float x, float y, float z) {
	Vector::x = x;
	Vector::y = y;
	Vector::z = z;
}


Vector::~Vector(){

}

Vector Vector::Add(Vector& Other){
	return Vector(x + Other.x, y + Other.y, z + Other.z);
}
Vector Vector::Substract(Vector& Other) {
	return Vector(x - Other.x, y - Other.y, z - Other.z);
}

Vector Vector::Multiply(Vector& Other) {
	return Vector(x * Other.x, y * Other.y, z * Other.z);
}
Vector Vector::Multiply(float Value) {
	return Vector(x * Value, y * Value, z * Value);
}
Vector Vector::Divide(Vector& Other) {
	return Vector(x / Other.x, y / Other.y, z / Other.z);
}

Vector Vector::Divide(float Value) {
	if (Value == 0) {
		return Vector(0, 0, 0);
	}
	return Vector(x / Value, y / Value, z / Value);
}