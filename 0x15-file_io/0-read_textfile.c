#include "main.h"

/**
 * read_textfile - reads a text file and prints to POSIX standard output
 * @filename: name of file for printing
 * @letters: letters count
 *
 * Return: 0 for NULL fn, failed write or unexpected byte amt
 */

ssize_t read_textfile(const char *filename, size_t letters)

{
	ssize_t f_desc, r_res, w_res;
	char *bf;

	if (filename == NULL)
	return (0);

	bf = malloc(letters * sizeof(char));
	if (bf == NULL)
	return (0);

	f_desc = open(filename, O_RDONLY);
	if (f_desc == -1)
{
	free(bf);
	return (0);
}

	r_res = read(f_desc, bf, letters);
	if (r_res == -1)
{
	free(bf);
	close(f_desc);
	return (0);
}

	w_res = write(STDOUT_FILENO, bf, r_res);
	if (w_res != r_res)
{
	free(bf);
	close(f_desc);
	return (0);
}

	free(bf);
	close(f_desc);
	return (r_res);
}
