#include <iostream>
#include "calculator.h" // Include the calculator.h header

int main()
{
	Calculator calc;

	int result_add = calc.add(20, 3);
	int result_subtract = calc.subtract(5, 3);
	int result_multiply = calc.multiply(5, 3);
	double result_divide = calc.divide(5, 3);

	std::cout << "Addition: " << result_add << std::endl;
	std::cout << "Subtraction: " << result_subtract << std::endl;
	std::cout << "Multiplication: " << result_multiply << std::endl;
	std::cout << "Division: " << result_divide << std::endl;

	return 0;
}
