#include "main.h"
/**
 * _strlen - function that returns the length of a string.
 * @s: The string to be measured.
 * Return: The length of the string.
 */
int _strlen(char *s)
{
	int len = 0;

	if (*(s + len))
	{
		len++;
		len += _strlen(s + len);
	}
	return (len);
}

/**
 * if_palindrome - function to check if a string is a palindrome.
 * @s: The string to be checked.
 * @len: The length of s.
 * @i: The index of the string to be checked.
 * Return: 1 if the string is a palindrome
 *         0 if the string is not a palindrome
 */
int if_palindrome(char *s, int len, int i)
{
	if (s[i] == s[len / 2])
		return (1);

	if (s[i] == s[len - i - 1])
		return (if_palindrome(s, len, i + 1));

	return (0);
}

/**
 * is_palindrome - function to check if a string is a palindrome.
 * @s: The string to be checked.
 * Return: 1 if the string is a palindrome
 *         0 if the string is not a palindrome
 */
int is_palindrome(char *s)
{
	int i = 0;
	int len = _strlen(s);

	if (!(*s))
		return (1);

	return (if_palindrome(s, len, i));
}
