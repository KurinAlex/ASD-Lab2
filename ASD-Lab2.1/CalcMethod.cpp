#include "CalcMethod.h"

CalcMethod::CalcMethod()
{
	method_name = "";
}

void CalcMethod::ExecuteAndCalculateTime(int parameter, int iterations_number)
{
	clock_t start = clock();
	for (int i = 0; i < iterations_number; i++)
	{
		Execute(parameter);
	}
	clock_t end = clock();

	std::cout << "Execution time of " << method_name << " function " << iterations_number <<
		" times: " << (float)(end - start) / CLOCKS_PER_SEC << " seconds\n";
}