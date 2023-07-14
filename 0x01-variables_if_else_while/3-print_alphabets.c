#include <stdio.h>
/**
 * main - Entry point
 * des - upper and lower case alphabet
 * Return: Always 0
 */
int main(void)
{
	char low_ch, up_ch;

	for (low_ch = 'a'; low_ch <= 'z'; low_ch++)
	{
		putchar(low_ch);
	}

	for (up_ch = 'A'; up_ch <= 'Z'; up_ch++)
	{
		putchar(up_ch);
	}

	putchar('\n');
	return (0);
}
