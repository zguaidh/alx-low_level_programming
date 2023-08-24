#include "main.h"

/**
 *read_textfile - reads a text file and prints it to the stdout
 *@filename: the file to read and print
 *@letters: the number of letters it should read and print
 *
 *Return: number of letters it could read and print or 0 otherwise
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *file = NULL;
	ssize_t o, r, w;
	char *My_arr;

	if (!filename)
		return (0);
	if (!letters)
		return (0);
	o = open(filename, O_RDONLY);
	if (o == -1)
		return (0);
	My_arr = malloc(sizeof(char *) * letters);
	if (My_arr == NULL)
	{
		fclose(file);
		return (0);
	}
	r = read(o, &My_arr[0], letters);
	if (r <= 0)
	{
		fclose(file);
		free(My_arr);
		return (0);
	}
	w = write(STDOUT_FILENO, &My_arr[0], r);
	if (w != r)
	{
		fclose(file);
		free(My_arr);
		return (0);
	}
	free(My_arr);
	fclose(file);
	return (w);
}
