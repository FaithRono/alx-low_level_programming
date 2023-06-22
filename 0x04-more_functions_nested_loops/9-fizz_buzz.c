#include <stdio.h>
/**
  *main - starting function
  *Description: printing multiples of 3 and 5
  *Return: 0
  */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf(" fizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf(" fizz");
		}
		else if (i % 5 == 0)
		{
			printf(" Buzz");
		}
		else
		{
			printf(" %d", i);
		}
	}
	printf(" \n");
	return (0);
}
