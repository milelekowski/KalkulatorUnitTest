#include <cmath>
#include "funkcje.h"

double ln(double x)
{
	return log(x);
}

double exponent(double x)
{
	return exp(x);
}

double standard_deviation(double* numbers, int size)
{
	double sum = 0;
	for (int i = 0; i < size; i++) {
		sum += numbers[i];
	}
	double average = sum / size;

	double square_sum = 0;
	for (int i = 0; i < size; i++) {
		square_sum += (numbers[i] - average) * (numbers[i] - average);
	}
	return sqrt(square_sum / (size - 1.0));
}

double max_element(double* numbers, int size)
{
	if (size < 1) return INFINITY;
	double max = numbers[0];
	for (int i = 1; i < size; i++) {
		if (numbers[i] > max) max = numbers[i];
	}
	return max;
}
