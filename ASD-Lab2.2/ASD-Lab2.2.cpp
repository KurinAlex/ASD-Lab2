#include <iostream>

const int BITS_NUMBER = 32;

bool* IntegerToBinary(int n, int bits_number)
{
	bool* binary = new bool[bits_number];

	for (int i = bits_number - 1; i >= 0; n >>= 1, i--)
	{
		binary[i] = (n & 1);
	}

	return binary;
}

int BinaryToInteger(bool* binary, int bits_number)
{
	int n = 0;

	for (int i = bits_number - 1, mult = 1; i >= 0; i--, mult <<= 1)
	{
		if (binary[i])
		{
			n += mult;
		}
	}

	return n;
}

void OutputBinary(bool* binary, int bits_number)
{
	for (int i = 0; i < bits_number; i++)
	{
		std::cout << binary[i];
	}
	std::cout << '\n';
}

int main()
{
	int n;
	std::cout << "Enter n:\n";
	std::cin >> n;
	std::cin.ignore(INT_MAX, '\n');

	bool* binary_n = IntegerToBinary(n, BITS_NUMBER);

	std::cout << "n in base 2: ";
	OutputBinary(binary_n, BITS_NUMBER);

	std::cout << "n in base 10: ";
	std::cout << BinaryToInteger(binary_n, BITS_NUMBER);

	std::cin.get();
}