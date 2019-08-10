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
