#include<stdio.h>
/**
 * Description: main - Prints out a string to stdout.
 * Return: 0 if success.
 */
int main(void)
{char charType;
int intType;
long int longIntType;
long long int longLongType;
float floatType;
printf("Size of a char: %zu bytes\n", sizeof(charType));
printf("Size of an int: %zu bytes\n", sizeof(intType));
printf("Size of a long int: %zu bytes\n", sizeof(longIntType));
printf("Size of a long long int: %zu bytes\n", sizeof(longLongType));
printf("Size of a float: %zu bytes\n", sizeof(floatType));
return (0);
}
