#include "main.h"

/**
 *append_text_to_file - appends text at the end of a file
 *
 *@filename: the name of the file
 *@text_content: is the NULL terminated string to add to the end of file
 *
 *Return: 1 on sucess, -1 otherwise
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file;
	ssize_t w;

	if (!filename)
		return (-1);
	if (!text_content)
		return (1);
	if (access(filename, F_OK) == -1)
		return (-1);
	file = open(filename, O_WRONLY | O_APPEND);
	if (file == -1)
		return (-1);
	w = write(file, text_content, strlen(text_content));
	if (w == -1)
	{
		close(file);
		return (-1);
	}
	close(file);
	return (1);
}
