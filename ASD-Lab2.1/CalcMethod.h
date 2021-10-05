#pragma once
#include <iostream>
#include <ctime>

#include "helpers.h"

class CalcMethod
{
public:
	CalcMethod();

	void ExecuteAndCalculateTime(int parameter, int iteration_count);
	virtual int* Execute(int primes_number) = 0;

protected:
	const char* method_name;
};