#include <stdio.h>

/**
 * isPalindrome - palindrome
 * @num: number
 *
 * Return: reversal
 */

int isPalindrome(int num)
{
	int reverse = 0;
	int temp = num;

	while (temp != 0)
{
	reverse = reverse * 10 + temp % 10;
	temp /= 10;
}

	return (reverse == num);
}

/**
 * main - main point of entry
 *
 * Return: 0 on success
 */

int main(void)

{
	int maxPalindrome = 0;
	int num1, num2;

	for (num1 = 999; num1 >= 100; num1--)
{
	for (num2 = num1; num2 >= 100; num2--)
{
	int product = num1 * num2;

	if (isPalindrome(product) && product > maxPalindrome)
{
	maxPalindrome = product;

	printf("%d\n", maxPalindrome);
}
}
}

	return (0);
}
