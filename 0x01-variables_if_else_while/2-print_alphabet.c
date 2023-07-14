#include <stdio.h>
/**
 * main - Entry point
 * description - prints the alphabets in lowercase
 * Return: Always 0
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}
	putchar("\n");
	return (0);
}
