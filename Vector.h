#pragma once
class Vector
{
public:
	float x, y, z;


public:
	Vector();
	Vector(float x, float y, float z);
	~Vector();
	Vector Add(const Vector& Other) const;
	Vector Substract(const Vector& Other) const;
	Vector Multiply(const Vector& Other) const;
	Vector Multiply(const float Value) const;
	Vector Divide(const Vector& Other) const;
	Vector Divide(const float Value) const;
	
	Vector operator+(const Vector& Other) const {
		return Add(Other);
	}

	Vector operator-(const Vector& Other) const {
		return Substract(Other);
	}

	Vector operator*(const float Value) const {
		return Multiply(Value);
	}

};

