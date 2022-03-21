#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>
/**
 * main - does password generation
 * Return: nothing
 */
int main(void)
{
	int r = 0, c;
	time_t t;

	srand((unsigned int) time(&t));

	for (c; c < 2772; c = c + r)
	{
		r = rand() % 128;
		if ((c + r) > 2772)
		{
			break;
		}
		printf("%c", r);
	}
	printf("%c\n", (2772 - c));
	return (0);
}
