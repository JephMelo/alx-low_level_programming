#include <stdio.h>
/**
 * main - Prints the first 98 fibonacci numbers, starting with 1 and 2,
 * separated by a comma followed by a space.
 * Return: always 0.
 */

int main(void)

{
	int count;
	unsigned long fib1 = 1, fib2 = 2, sum;
	unsigned long fib1_half1, fib1_half2, fib2_half1, fib2_half2;
	unsigned long half, half1, half2;

	printf("%lu, %lu, ", fib1, fib2);

	for (count = 2; count < 92; count++)
	{
	sum = fib1 + fib2;
	printf("%lu, ", sum);
	fib1 = fib2;
	fib2 = sum;
	}
	fib1_half1 = 0;
	fib1_half2 = 1;
	fib2_half1 = 0;
	fib2_half2 = 2;

	for (count = 92; count < 97; count++)
	{
	half1 = fib1_half1 + fib2_half1;
	half2 = fib1_half2 + fib2_half2;
	if (half2 >= 10000000000)
	{
	half1 += 1;
	half1 %= 10000000000;
	}
	printf("%lu%010lu, ", half1, half2);
	fib1_half1 = fib2_half1;
	fib1_half2 = fib2_half2;
	fib2_half1 = half1;
	fib2_half2 = half2;
	}
	half2 = fib1_half1 + fib2_half1;
	half2 = fib1_half2 + fib2_half2;
	if (half2 >= 10000000000)
	{
	half1 += 1;
	half2 %= 10000000000;
	}
	printf("%lu%010lu\n", half1, half2);
	return (0);
}
