#pragma once

#include <iostream>
#include <vector>



class Matrix
{
public:

	std::vector<float> Values;
	int Rows;
	int Cols;

	Matrix();
	Matrix(int row, int col, std::vector<float> values);


	Matrix Summarize(const Matrix& other) const;
	Matrix Substract(const Matrix& other) const;


};

