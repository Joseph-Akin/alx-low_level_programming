#include <stdio.h> 

/***
* main - print different various types 
*
* Description: using the main function
* this program prints "programming is like building a multilingual puzzle 
* Return: Always 0 (Success) 
*/
int main(void)
{
        char c; 
        int i; 
        long li; 
        long long lli; 
        float f;   

        printf("size of a char: %d byte(s)\n", sizeof(c));     
        printf("size of an int: %d byte(s)\n", sizeof(i)); 
        printf("size of a long int: %d byte(s)\n", sizeof(li)); 
        printf("size of a long long int: %d byte(s)\n", sizeof(lli)); 
        printf("size of a long int: %d byte(s)\n", sizeof(long int)); 
        printf("size of a float: %d byte(s)\n", sizeof(f));
        return (0);
}
