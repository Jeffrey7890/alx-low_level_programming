#include "main.h"

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

		if (((mid * mid) <= n) && ((mid + 1) * (mid + 1)) > n)
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
