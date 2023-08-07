#include "main.h"

/**
 *_strlen - returns the length of a string
 *@str: the string
 *
 *Return: the length of str
 */
int _strlen(char *str)
{
	int count = 0;

	if (!str)
		return (0);

	while (*str++)
		count++;
	return (count);
}
/**
 *create_file - creates a file
 *@filename: name of the file to create
 *@text_content: a NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int file;
	ssize_t count = 0;
	int len = _strlen(text_content);

	if (!filename)
		return (-1);
	file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (len)
		count = write(file, text_content, len);
	close(file);
	if (count == len)
		return (1);
	else
		return (0);
}
