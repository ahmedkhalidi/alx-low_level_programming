#include <stdio.h>

/**
 * main - prints all possible two digits uniq combos,
 *
 * Description: prints all possible different combinations of two digits
 *
 * Return: Always 0 (success)
*/

int main(void)
{
int number1, number2;

for (number1 = 0; number1 < 9; number1++)
{
	for (number2 = number1 + 1; number2 < 10; number2++)
	{
		putchar(number1 + '0');
		putchar(number2 + '0');
		if (number1 == 8 && number2 == 9)
			continue;
		putchar(',');
		putchar(' ');
	}
}
putchar('\n');

return (0);
}
