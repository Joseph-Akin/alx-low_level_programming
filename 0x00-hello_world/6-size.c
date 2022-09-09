#include <stdio.h> 
/**
 *main - print different various types 
 * 
 *Description: using the main function
 *this program prints "programming is like building a multilingual puzzle 
 *Return: Always 0 (Success) 
*/
int main(void)
{
       	char c; 
        int i; 
        long li; 
        long long lli; 
        float f;   

	printf("Size of a char: %d byte(s)\n", sizeof(c));    
	printf("Size of an int: %d byte(s)\n", sizeof(i)); 
        printf("Size of a long int: %d byte(s)\n", sizeof(li)); 
        printf("Size of a long long int: %d byte(s)\n", sizeof(lli)); 
        printf("Size of a float: %d byte(s)\n", sizeof(f));
        return (0);
}
