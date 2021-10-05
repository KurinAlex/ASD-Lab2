#pragma once
#include "CalcMethod.h"

class EratosthenesSieveMethod : public CalcMethod
{
public:
	EratosthenesSieveMethod();
	~EratosthenesSieveMethod();

	virtual int* method(int primes_number) override;
};