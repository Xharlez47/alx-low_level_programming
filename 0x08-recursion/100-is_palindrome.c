#include "main.h"

/**
 * find_strlen - returns the length of a string.
 * @s: a string
 * Return: the length of the string.
 */

int find_strlen(char *s)
{
	int len = 0;

	if (*(s + len))
	{
		len++;
		len = len + find_strlen(s + len);
	}
	return (len);
}
/**
 * check_palindrome - Checks if a string is a palindrome.
 * @s: the string to be checked.
 * @len: length of s
 * @index: the index of the string
 * Return: 1 if the string is a palindrome, else 0
 */

int check_palindrome(char *s, int len, int index)
{
	if (s[index] == s[len / 2])
		return (1);
	if (s[index] == s[len - index - 1])
		return (check_palindrome(s, len, index + 1));
	return (0);
}
/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The string to be checked.
 * Return: 1 if the string is a palindrome, else 0
 */

int is_palindrome(char *s)
{
	int i = 0;
	int j = find_strlen(s);

	if (!(*s))
		return (1);
	return (check_palindrome(s, j, i));
}
