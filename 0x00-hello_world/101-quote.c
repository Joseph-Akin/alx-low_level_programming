#include <stdio.h>
#include <unistd.h>
/**
 * main - entry point
 *
 * Description: prints and that piece of art is useful 
 * Return: 1 if sucessfull
 */
int main(void)
{
	write(2, "and that piece of artis useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
