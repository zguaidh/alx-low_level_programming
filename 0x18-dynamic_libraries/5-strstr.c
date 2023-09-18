#include "main.h"
/**
 *_strstr - function that locates a substring.
 *@haystack: the string
 *@needle: the string to look for
 *
 *Return: pointer to the beginning of the located substring, or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *ptr1 = haystack;
		char *ptr2 = needle;

		while (*ptr1 == *ptr2 && *ptr2 != '\0')
		{
			ptr1++;
			ptr2++;
		}
		if (*ptr2 == '\0')
			return (haystack);
	}
	return ('\0');
}
