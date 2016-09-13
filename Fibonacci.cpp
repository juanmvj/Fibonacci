/**
 * Juan MAnuel Vázquez Jiménez
 * José Alfonso Altamirano Leal
 */

#include <stdio.h>

unsigned int Fibonacci(unsigned int n)
{
	unsigned int a = 0, b = 1, c;
	if (n < 2)
	{
		return n;
	}
	for (int i = 1; i < n; ++i)
	{
		c = a + b;
		a = b;
		b = c;
	}
	return c;
}

unsigned int FibonacciR(unsigned int n)
{
	if (n < 2)
	{
		return n;
	}

	return FibonacciR(n - 2) + FibonacciR(n - 1);
}

int main()
{
	printf("%u\n",Fibonacci(10000000000000000000));
	printf("%u\n",FibonacciR(51));


	return 0;
}
