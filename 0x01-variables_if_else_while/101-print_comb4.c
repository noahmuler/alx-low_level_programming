#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int dig1, dig2, dig3;

	dig1 = '0';
	dig2 = '0';
	dig3 = '0';

	for (dig1 = '0'; dig1 <= '9'; dig1++)
	{
		for (dig2 = '0'; dig2 <= '9'; dig2++)
		{
			for (dig3 = '0'; dig3 <= '9'; dig3++)
			{
				if ((dig1 != dig3 && dig1 != dig3) && (dig1 < dig2 && dig2 < dig3))
				{
					putchar(dig1);
					putchar(dig2);
					putchar(dig3);
					if (!(dig1 == '7' && dig2 == '8' && dig3 == '9'))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
