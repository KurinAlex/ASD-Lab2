#pragma once
#include <iostream>
#include <ctime>

#include "helpers.h"

class CalcMethod
{
public:
	CalcMethod();

	void ExecuteAndCalculateTime(int iterations_number);
	virtual int* Execute() = 0;

protected:
	const char* method_name;
};