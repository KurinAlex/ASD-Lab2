#include <iostream>
#include <cmath>
#include <ctime>

const int ITERATIONS_NUMBER = 1000;

bool IsPrime(int n)
{
	int sqrt_n = sqrt(n);

	for (int p = 2; p <= sqrt_n; p++)
	{
		if (n % p == 0)
		{
			return false;
		}
	}

	return true;
}

bool* IsPrimeRange(int n)
{
	bool* is_prime = new bool[n + 1];
	for (int i = 0; i < n + 1; i++)
	{
		is_prime[i] = false;
	}

	for (int p = 2; p <= n; p++)
	{
		if (IsPrime(p))
		{
			is_prime[p] = true;
		}
	}

	return is_prime;
}

bool* EratosthenesSieve(int n)
{
	bool* is_prime = new bool[n + 1];
	is_prime[0] = is_prime[1] = false;
	for (int i = 2; i < n + 1; i++)
	{
		is_prime[i] = true;
	}

	int sqrt_n = sqrt(n);

	for (int i = 2; i <= sqrt_n; i++)
	{
		if (is_prime[i])
		{
			for (int j = i * i; j <= n; j += i)
			{
				is_prime[j] = false;
			}
		}
	}

	return is_prime;
}

template<typename FuncType,typename ArgType>
void OutputExecutionTime(FuncType (*func)(ArgType), ArgType parameter, const char* func_name, int iterations_number)
{
	clock_t start = clock();
	for (int i = 0; i < iterations_number; i++)
	{
		func(parameter);
	}
	clock_t end = clock();
	std::cout << "Execution time of " << func_name << " function " << iterations_number << 
		" times: " << (double(end - start)) / CLOCKS_PER_SEC << " seconds\n";
}

int main()
{
	int n;
	std::cout << "Enter n:\n";
	std::cin >> n;

	OutputExecutionTime(IsPrimeRange, n, "IsPrime", ITERATIONS_NUMBER);
	OutputExecutionTime(EratosthenesSieve, n, "EratosthenesSieve", ITERATIONS_NUMBER);

	std::cin.get();
	std::cin.get();
}