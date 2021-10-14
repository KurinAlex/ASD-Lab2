#include "CalcMethod.h"

CalcMethod::CalcMethod()
{
	method_name = "";
}

void CalcMethod::ExecuteAndCalculateTime(int iterations_number)
{
	clock_t start = clock();
	for (int i = 0; i < iterations_number; i++)
	{
		Execute();
	}
	clock_t end = clock();

	std::cout << "��� ��������� ������� " << method_name << ' ' << iterations_number <<
		" ����: " << (float)(end - start) / CLOCKS_PER_SEC << " ������\n";
}