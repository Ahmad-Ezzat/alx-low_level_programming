#include <stdio.h>
/**
 * main - Entry point
 * Description: print all possible different-
 * -combination of two digits
 * Return: 0 (Success)
 */
int main(void)
{
	int FirstDigit = 0, SeconDigit;

	while (FirstDigit <= 99)
	{
		SeconDigit = FirstDigit;
		while (SeconDigit <= 99)
		{
			if (SeconDigit != FirstDigit)
			{
				putchar((FirstDigit / 10) + 48);
				putchar((FirstDigit % 10) + 48);
				putchar(' ');
				putchar((SeconDigit / 10) + 48);
				putchar((SeconDigit % 10) + 48);

				if (FirstDigit != 98 || SeconDigit != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
			SeconDigit++;
		}
		FirstDigit++;
	}
	putchar('\n');
	return (0);
}
