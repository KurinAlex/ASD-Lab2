#include <iostream>

const int BITS_NUMBER = 32;

int* IntegetToBinary(int n, int bits_number)
{
	int* binary = new int[bits_number];

	for (int i = bits_number - 1; i >= 0; n >>= 1, i--)
	{
		((n & 1) == 0) ? (binary[i] = 0) : (binary[i] = 1);
	}

	return binary;
}

int BinaryToInteger(int* binary, int bits_number)
{
	int n = 0;

	for (int i = bits_number - 1, mult = 1; i >= 0; i--, mult <<= 1)
	{
		n += binary[i] * mult;
	}

	return n;
}

void OutputBinary(int* binary, int bits_number)
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

	int* binary_n = IntegetToBinary(n, BITS_NUMBER);

	std::cout << "n in base 2: ";
	OutputBinary(binary_n, BITS_NUMBER);

	std::cout << "n in base 10: ";
	std::cout << BinaryToInteger(binary_n, BITS_NUMBER);

	std::cin.ignore(INT_MAX, '\n');
	std::cin.get();
}