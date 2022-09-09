#include <stdio.h>

/**
 * main - print different various types 
 *
 * Return: Always 0 (Success)  
 */
int main(void)
{
        int a;
        long long int b; 
        char c;
        float d;
        long int e;

        printf("size of a char: %d byte(s)\n", sizeof(char)); 
        printf("size of an         printf("size of a long int: %d byte(s)\n", sizeof(long int)); 
        printf("size of a long long int: %d byte(s)\n", sizeof(long long int));  
        printf("size of a long int: %d byte(s)\n", sizeof(long int)); 
        printf("size of a float: %d byte(s)\n", sizeof(float));
        return (0);
}
