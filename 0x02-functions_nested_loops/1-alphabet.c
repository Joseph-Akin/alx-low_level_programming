#include "main.c"

/**
 * print_alphabet -Entry point
 * description: a function that prints the alphabets,
 * in lowecase followed by a new line 
 * Return void
 */
void print_alphabet(void)
{
	chat letter = 'a';

	while (letter <= 'z')
	{
		_putcha(letter);
		letter++;
	}

	_putchar('\n');
}
