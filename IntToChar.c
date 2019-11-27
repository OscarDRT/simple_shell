#include <stdio.h>

/**
* _itoi - convert an int to string
* @interac: number to convert;
* @str: buffer to write
* Return: the number as string
*/

char *_itoi(int interac, char *str)
{
	int n, i, mod, len = 0;

	n = interac;
	while (n != 0)
	{
		len++;
		n =  n / 10;
	}
	for (i = 0 ; i < len ; i++)
	{
		mod = interac % 10;
		interac = interac / 10;
		str[len - (i + 1)] = mod + '0';
	}
	str[len] = '\0';
	return (str);
}
