#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - assign a random number to the variable n each time it is executed
 * if the number is greater than 0: is positive, if the number is 0: is zero
 * if the number is less than 0: is negative, followed by a new line
 * Return: 0
 */
int main(void)
{
	int n;
    int last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
    last = n % 10;
	if (last > 5)
    {
    printf("Last digit of ");
    printf("%d",n);
    printf(" is ");
    printf("%d",last);
    printf(" and is greater than 5\n");
    }
    else if (last == 0)
    {
    printf("Last digit of ");
    printf("%d",n);
    printf(" is ");
    printf("%d",last);
    printf(" and is 0\n");
    }
    else
    {
printf("Last digit of ");
printf("%d",n);
printf(" is ");
printf("%d",last);
printf(" and is less than 6 and not 0\n");
    }
    return (0);
}
