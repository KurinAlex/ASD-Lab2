#include <iostream>

void OutputRange(int A, int B)
{
	std::cout << A << ' ';
	if (A == B)
	{
		return;
	}
	else if (A < B)
	{
		OutputRange(A + 1, B);
	}
	else
	{
		OutputRange(A - 1, B);
	}
}

int main()
{
	OutputRange(8, -1);
	std::cin.get();
}