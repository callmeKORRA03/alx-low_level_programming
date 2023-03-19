#include <stdio.h>
/**
* main - Entry
* Return: Always 0
*/
int main(void)
{
	char ch;
	int ab;

	for (ab = 0; ab < 10; ab++)
		putchar((ab % 10) + '0');
	for (ch = 'a'; ch <= 'f'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
