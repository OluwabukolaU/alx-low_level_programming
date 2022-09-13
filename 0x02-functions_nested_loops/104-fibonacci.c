#include <stdio.h>
#include "main.h"

/**
* main - print the first 98 fibonacci numbers.
* Return: Nothing.
 */

int main(void)
{
	int count;
	unsigned long i, j, k, a, b, c, carry;

	i = 0;
	j = 1;

	for (count = 1; count <= 90; count++)
	{
		k = i + j;
		i = j;
		j = k;
		printf("%lu, ", k);
	}

	a = i % 1000;
	x = i / 1000;
	b = j % 1000;
	y = j / 1000;

	while (count <= 98)
	{
		carry = (a + b) / 1000;
		c = (a + b) - carry * 1000;
		k = (i + j) + carry;
		i = j;
		j = k;
		a = b;
		b = c;

		if (c >= 100)
			printf("%lu%lu", k, c);
		else
			printf("%lu0%lu", k, c);
		if (count < 98)
			printf(", ");
		count++;
	}
	putchar('\n');
	return (0);
}
