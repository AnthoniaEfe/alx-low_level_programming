#include "main.h"
/**
 * print_alphabet_x10 - print the alphabet 10 times
 *
*/
void print_alphabet_x10(void)
{
	int num = 0, ch;

	while (num < 10)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
			putchar(ch);
		putchar('\n');
		num++;
	}
}
