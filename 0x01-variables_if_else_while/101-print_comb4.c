#include <stdio.h>

/**
 * main - prints all possible different combinations of three digits
 * Return: Always 0 (Success)
 */
int main(void)
{
<<<<<<< HEAD
	int a = 0;
	int b = 0;
	int c = 0;
	int coma = 1;
	while (a <= 9)
	{
		while (b <= 9)
		 {
			 while (c <= 9)
=======
	int n, m, l;

	for (n = 48; n < 58; n++)
	{
		for (m = 49; m < 58; m++)
		{
			for (l = 50; l < 58; l++)
>>>>>>> ba48667cee5f4a10d086ddd488106154b96ec476
			{
				if (l > m && m > n)
				{
<<<<<<< HEAD
					if (coma == 0)
					 {
						 putchar(',');
						 putchar(32);
					 }
					coma = 0;
					putchar(a + '0');
					putchar(b + '0');
					putchar(c + '0');
=======
					putchar(n);
					putchar(m);
					putchar(l);
					if (n != 55 || m != 56)
					{
						putchar(',');
						putchar(' ');
					}
>>>>>>> ba48667cee5f4a10d086ddd488106154b96ec476
				}
			}
<<<<<<< HEAD
			++b;
			c = 0;
			 }
		++a;
		b = 0
	}
	putchar(10);
=======
		}
	}
	putchar('\n');
>>>>>>> ba48667cee5f4a10d086ddd488106154b96ec476
	return (0);
}