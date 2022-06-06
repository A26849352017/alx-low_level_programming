#include<stdio.h>
/**
 * main - main function
 *
 * Description: A programm that prints alphabet in lowercase
 *
 * Return: 0
 *
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
