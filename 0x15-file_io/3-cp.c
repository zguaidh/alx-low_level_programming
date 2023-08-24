#include "main.h"

/**
 *main - entry point
 *
 *Description: copies the content of a file to another file.
 *@ac: number of arguments
 *@av: an array of arguments
 *
 * Return: 0 on sucess or -1 otherwise
 */
int main(int ac, char *av[])
{
	int file, dest;
	ssize_t r, w;
	mode_t mode;
	char buf[ARR_SIZE];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file = open(av[0], O_RDONLY);
	if (file == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	mode = S_IRUSR | S_IWUSR | S_IWGRP | S_IRGRP | S_IROTH;
	dest = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, mode);
	if (dest == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[1]);
		exit(99);
	}
	r = read(file, buf, ARR_SIZE);
	while (r > 0)
	{
		w = write(dest, buf, r);
		if (w != r)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[1]);
			exit(99);
		}
	}
	if (r == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	if (close(file) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file), exit(100);
	}
	if (close(dest) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", dest), exit(100);
	}
	return (EXIT_SUCCESS);
}
