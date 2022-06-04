#include<stdio.h>
/**
 * main - main function
 * Decription:A program that prints alphabet in the lowercase
 *
 * Return - 0
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; ++c)
	{
		if (c != 'e' && c != 'q')
		{
			putchar(c);
		}



	}
	printf("\n");

return (0);

}
