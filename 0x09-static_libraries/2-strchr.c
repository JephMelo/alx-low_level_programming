#include "main.h"
/**
 * _strchr - Program entry point
 * @s: input value
 * @c: input value
 * Return: Always 0 (Success)
 */
char *_strchr(char *s, char c)
{
	int a = 0;

	for (; s[a] >= '\0'; a++)
	{
		if (a[a] == c)
			return (&s[a]);
	}
	return (0);
}
