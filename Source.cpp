#include <cstdio>
#include <iostream>
#include "Header.h"

//int main()
//{
//	int n;
//	std::cout << "Any number:";
//	std::cin >> n;
//	int solution = func(n);
//	std::cout << "The factorial of the number is:" << n;
//	//printf("The factorial of the number is %d", solution);
//	return 0;
//}
//
//
//int func(int n) {
//	int sol, s1;
//	if (n == 1 || n == 0)
//	{
//		sol = 1;
//	}
//	else
//	{
//		s1 = func(n - 1);
//		sol = n - s1;
//	}
//	return sol;
//}


//Fibonacci
int fib(int n)
{
	if (n <= 1)
		return n;
	return fib(n - 1) + fib(n - 2);
}
int main()
{
	int n = 6, i;
	for (i = 0; i < n; i++)
		std::cout << fib(i) << " ";
	return 0;
}
