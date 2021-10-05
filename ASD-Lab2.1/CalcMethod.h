#pragma once
#include <iostream>
#include <ctime>

#include "helpers.h"

class CalcMethod
{
public:
	CalcMethod();
	~CalcMethod();

	void OutputExecutionTime(int parameter, int iteration_count);
	virtual int* method(int primes_number) = 0;

protected:
	const char* method_name = "";
};