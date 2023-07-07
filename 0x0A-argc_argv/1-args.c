#include <stdio.h>
/**
* main - main function
* @argc: used in this program to print the number of arg passed
* @argv: argument vector used to print out the file name
* Return: Always (0)
*/
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
