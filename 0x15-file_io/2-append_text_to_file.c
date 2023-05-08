#include "main.h"

/**
 * append_text_to_file - fixes text at file end.
 * @filename: file.
 * @text_content: str that's NULL term
 *
 * Return: 1 for success, -1 upon failure.
 */

int append_text_to_file(const char *filename, char *text_content)

{
	int f_desc, w_res, length;

	if (filename == NULL)
	return (-1);

	f_desc = open(filename, O_WRONLY | O_APPEND);
	if (f_desc == -1)
	return (-1);

	if (text_content == NULL)
{
	close(f_desc);
	return (1);
}

	for (length = 0; text_content[length] != '\0'; length++)
	;

	w_res = write(f_desc, text_content, length);
	if (w_res == -1)
{
	close(f_desc);
	return (-1);
}

	close(f_desc);
	return (1);
}
