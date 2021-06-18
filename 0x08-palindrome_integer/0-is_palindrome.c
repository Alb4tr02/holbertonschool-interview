#include "palindrome.h"
/**
 * is_palindrome -  this function checks if a given number is palindrome.
 * @n: number
 * Return: 1 if the number is palindrome, otherwise returns 0.
 */
int is_palindrome(unsigned long n)
{
	unsigned long reversed = 0, remainder = 0, num;

	num = n;

	while (n != 0)
	{
		remainder = n % 10;
		reversed = reversed * 10 + remainder;
		n = n / 10;
	}

	if (reversed == num)
		return (1);
	return (0);
}
