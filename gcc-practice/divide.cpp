#include "calculator.h"

double Calculator::divide(int a, int b)
{
	if (b == 0)
	{
		return 0; // Handle division by zero
	}
	return static_cast<double>(a) / b;
}
