#include "Matrix.h"

Matrix::Matrix(){
	Rows = 0;
	Cols = 0;
}

Matrix::Matrix(int rows, int cols, std::vector<float> values) {
	Rows = rows;
	Cols = cols;
	Values = values;
}

Matrix Matrix::Summarize(const Matrix& other) const{

	Matrix result = Matrix(Rows, Cols, Values);

	if (Cols != other.Cols || Rows != other.Rows) {
		return result;
	}

	int lenght = Cols * Rows;

	for (int i = 0; i < lenght; i++) {
		result.Values[i] += other.Values[i];
	}

	return result;
}

Matrix Matrix::Substract(const Matrix& other) const{
	//Return Summarize(-other);
	return Matrix();
}

