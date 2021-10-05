#pragma once
#include <iostream>
#include <ctime>

#include "helpers.h"

class CalcMethod
{
public:
	CalcMethod();

	void ExecuteAndCalculateTime(int parameter, int iterations_number);
	virtual int* Execute(int parameter) = 0;

protected:
	const char* method_name;
};