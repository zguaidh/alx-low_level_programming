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
	int file;
	ssize_t r;
	char My_arr[1024];

	if (!filename)
		return (0);
	if (!letters)
		return (0);
	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);
	r = read(file, &My_arr[0], letters);
	r = write(STDOUT_FILENO, &My_arr[0], r);
	close(file);
	return (r);
}
