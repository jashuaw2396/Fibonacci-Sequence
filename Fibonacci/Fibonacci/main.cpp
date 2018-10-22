#include <iostream>
#include <string>

int main()
{
	// Fibonacci program
	// made by: Jashua Montanez
	// 10/22/2018

	int max = 0, first = 0, second = 1, sum = 0;

	std::cout << "How long do you want to run the Fibonacci sequence? " << std::endl;
	std::cin >> max;

	std::cout << std::endl << std::endl;

	for (int i = 0; i < max; ++i)
	{
		std::cout << first << ", ";
		sum = first + second;
		first = second;
		second = sum;
	}

	std::cout << first << "...";

	std::cout << std::endl << std::endl;
	system("pause");
	return 0;
}