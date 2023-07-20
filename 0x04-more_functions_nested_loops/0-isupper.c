/**
 * _isupper - check if c is upper
 * @c: alphabet input
 * Return: 1 if uppercase, 0 else
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
