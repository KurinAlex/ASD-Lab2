#pragma once
#include "CalcMethod.h"

class EratosthenesSieveMethod : public CalcMethod
{
public:
	EratosthenesSieveMethod();

	virtual int* Execute(int primes_number) override;
};