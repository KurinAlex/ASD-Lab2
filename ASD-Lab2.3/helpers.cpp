#include"helpers.h"

int EnterInteger(const char* integer_name)
{
	int number;

	bool isFailure = true;
	do
	{
		std::cout << "Enter " << integer_name << ": ";
		std::cin >> number;
		isFailure = std::cin.fail();

		std::cin.clear();
		std::cin.ignore(INT_MAX, '\n');
	} while (isFailure);

	return number;
}