#pragma once
#include "CalcMethod.h"

class EratosthenesSieveMethod : public CalcMethod
{
public:
	EratosthenesSieveMethod();

	virtual int* Execute(int max_prime) override;
};