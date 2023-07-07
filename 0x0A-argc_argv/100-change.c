#include <stdio.h>
#include <stdlib.h>
/**
* main - Entry point of the program
* @argc: argument counter
* @argv: argument vector
* Return: (0)
*/
int main(int argc, char *argv[])
{
	int cents;
	int coins;

	coins = 0;
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);

	while (cents > 0)
	{
		if (cents >= 25)
		{
			cents -= 25;
			coins++;
		}
		else if (cents >= 10)
		{
			cents -= 10;
			coins++;
		}
		else if (cents >= 5)
		{
			cents -= 5;
			coins++;
		}
		else if (cents >= 2)
		{
			cents -= 2;
			coins++;
		}
		else if (cents >= 1)
		{
			cents -= 1;
			coins++;
		}
	}
	printf("%d\n", coins);
	return (0);
}
