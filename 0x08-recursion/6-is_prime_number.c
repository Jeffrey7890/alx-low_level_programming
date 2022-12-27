#include "main.h"
#include <stdio.h>
#include <math.h>


int _sqrt_r(int start, int end, int n);
int _sqrt_recursion(int n);

/**
  * recursive_prime - using sqrt(n) method
  * @N: number to check if prime
  * @n: divisor number
  * Return: integer
  */
int recursive_prime(int n, int N)
{
	if (n <= _sqrt_recursion(N))
	{

		if ((N % n) == 0)
		{

			return (0);
		}
		recursive_prime(n + 1, N);
	}
	else
		return (1);
	return (0);
}

/**
  * is_prime_number - checks if number is primt
  * @n: number to check
  * Return: 1 if prime and 0 if not
  */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (recursive_prime(2, n));
}

/**
  * _sqrt_r - recursive sqrt using binary search
  * @start: starting number
  * @end: always equal to n
  * @n: number to find sqrt of
  * Return: integer always
  */
int _sqrt_r(int start, int end, int n)
{
	if (start <= end)
	{
		int mid = (start + end) / 2;
		long int exp;

		exp = mid * mid;

		if ((exp <= n) && ((mid + 1) * (mid + 1)) > n)
			return (mid);
		else if ((mid * mid) < n)
		{
			return (_sqrt_r(mid + 1, end, n));
		}
		else
			return (_sqrt_r(start, mid - 1, n));
	}
	return (start);
}

/**
  * _sqrt_recursion - made it a wrapper func of _sqrt_r
  * @n: number to get sqrt of
  * Return: integer sqrt(n);
  */
int _sqrt_recursion(int n)
{
	int sqrt_n = _sqrt_r(0, n, n);


	if ((sqrt_n  * sqrt_n) != n)
		return (-1);

	return (sqrt_n);
}


