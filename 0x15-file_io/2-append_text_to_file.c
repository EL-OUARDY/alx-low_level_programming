#include "main.h"

/**
 * append_text_to_file - add text at the end of a file
 * @filename: name of the file
 * @text_content: string text to append.
 *
 * Return: Return: 1 on success and -1 on failure
 * in case of filename equal NULL or file does not exist
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, length = 0;

	/* check filename */
	if (!filename)
		return (-1);

	if (text_content)
		for (length = 0; text_content[length]; length++)
			;

	/* open the file using append mode - do NOT create */
	o = open(filename, O_WRONLY | O_APPEND);

	/* write on file - append text content */
	w = write(o, text_content, length);

	/* opening or writing failed*/
	if (o == -1 || w == -1)
		return (-1);

	/* close the file descriptor */
	close(o);

	return (1);
}

