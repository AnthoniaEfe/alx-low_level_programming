#include"main.h"

/**
 * main - Entry point 
 * Return: Always 0 (Success)
*/

int main(void)
{
	char string[] = "_putchar";
	int ch;

	for (ch = 0; ch < 8; ++ch)
	{
		_putchar(string[ch]);
	}
	_putchar('\n');

	return (0);
}
