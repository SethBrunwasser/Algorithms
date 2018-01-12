#include<stdio.h>
#include<iostream>
#include<time.h>
#include<ctime>
// Regular recursion 
int fib1(int n) 
{
	if (n <= 1) {
		return n;
	}
	else {
		return fib1(n - 1) + fib1(n - 2);
	}
}

// Using Dynamic Programming and optimized for space
int fib2(int n)
{
	int a = 0, b = 1, c, i;
	if (n == 0)
	{
		return a;
	} 
	for (i = 2; i <= n; i++)
	{
		c = a + b;
		a = b;
		b = c;
	}
	return b;
}

int main()
{
	int n = 9;

	


	std::clock_t c_start = std::clock();
	printf("%d", fib1(n));
	std::clock_t c_end = std::clock();
	long double time_elapsed_ms = 1000.0 * (c_end - c_start) / CLOCKS_PER_SEC;
	std::cout << "CPU time used: " << time_elapsed_ms << " ms\n";

	std::clock_t c_start = std::clock();
	printf("%d", fib2(n));
	std::clock_t c_end = std::clock();
	long double time_elapsed_ms = 1000.0 * (c_end - c_start) / CLOCKS_PER_SEC;
	std::cout << "CPU time used: " << time_elapsed_ms << " ms\n";
	getchar();
	return 0;
}