#include <stdio.h>
#include <ctype.h>
/**
 * main - all codes
 * Description:A program that prints alphabets in lowercase followed by a line
 *
 * Return: 0
 *
 */

int main(void)
{
	char alphabets;

	char ALPHABETS;

	for (alphabets = 'a'; alphabets <= 'z'; alphabets++)
	{
		putchar(alphabets);
	}
	for (ALPHABETS = 'A'; ALPHABETS <= 'Z'; ALPHABETS++)
	{
		putchar(ALPHABETS);
	}
	putchar('\n');

return (0);

}
