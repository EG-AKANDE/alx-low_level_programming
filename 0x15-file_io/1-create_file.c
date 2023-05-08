#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>

/**
 * create_file - creates file
 *
 * @filename: file
 * @text_content: str that is NULL term
 *
 * Return: 1 for success, -1 upon a fail
 */

int create_file(const char *filename, char *text_content)

{
	int f_desc, w_res, q = 0;

	if (filename == NULL)
	return (-1);

	f_desc = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (f_desc == -1)
	return (-1);

	if (text_content != NULL)
{
	while (text_content[q] != '\0')
	q++;

	w_res = write(f_desc, text_content, q);
	if (w_res == -1)
	return (-1);
}

	close(f_desc);
	return (1);
}
