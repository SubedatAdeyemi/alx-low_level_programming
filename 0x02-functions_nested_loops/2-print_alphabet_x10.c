#include "main.h"
/**
* main - prints 10 times the alphabet, in lowercase, followed by a new line.
* written by Subedat
* Return: 0
*/

void print_alphabet_x10(void)
{
	char ch;
	int n;

	n = 0;

	while (n < 10)
	{
		ch = 'a';
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}

		_putchar('n');
		n++;
	}
}
