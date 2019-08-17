#pragma once
class Vector
{
public:
	float x, y, z;


public:
	Vector();
	Vector(float x, float y, float z);
	~Vector();
	Vector Add(Vector& Other);
	Vector Substract(Vector& Other);
	Vector Multiply(Vector& Other);
	Vector Multiply(float Value);
	Vector Divide(Vector& Other);
	Vector Divide(float Value);
};

