/**
 * _isdigit - check if c is digit
 *
 * @c: input
 *
 * Return: 1 if digit, 0 else
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}