#include <stdio.h>
/**
 * main - entry point
 * @argc: argument counter that prints the number of argument passed into it
 * @argv: argument vector used to print all the arg passed.
 * Return: Always (0)
 */
int main(int argc, char *argv[])
{
	int iterate;

	for (iterate = 0; iterate < argc; iterate++)
	{
		printf("%s\n", argv[iterate]);
	}
	return (0);
}
