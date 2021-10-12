#include <iostream>

#include "helpers.h"

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
	int A = EnterInteger("A");
	int B = EnterInteger("B");

	OutputRange(A, B);

	std::cin.get();
}