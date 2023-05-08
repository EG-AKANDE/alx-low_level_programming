#include "main.h"

/**
 * main - copies content of one file to another.
 * @ac: arg count.
 * @av: arg vect.
 *
 * Return: 0 for success.
 */

int main(int ac, char **av)

{
	int f_desc_from, f_desc_to, read_in, write_in, cl_from_val, cl_to_val;
	char buffer[1024];

	if (ac != 3)
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	f_desc_from = open(av[1], O_RDONLY);
	if (f_desc_from == -1)
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
	f_desc_to = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (f_desc_to == -1)
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
	do {
	read_in = read(f_desc_from, buffer, 1024);
	if (read_in == -1)
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
	write_in = write(f_desc_to, buffer, read_in);
	if (write_in == -1)
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
	} while (read_in == 1024);
	cl_from_val = close(f_desc_from);
	if (cl_from_val == -1)
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f_desc_from), exit(100);
	cl_to_val = close(f_desc_to);
	if (cl_to_val == -1)
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f_desc_to), exit(100);
	return (0);
}
