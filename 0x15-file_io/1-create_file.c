#include "main.h"

/**
 * create_file - creates a file
 * @filename: the name of the file to create.
 * @text_content: text to write to the new file.
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, w, length = 0;

	/* check filename */
	if (!filename)
		return (-1);

	/* get content text length */
	if (text_content)
		for (length = 0; text_content[length]; length++)
			;

	/**
	 * open/create file for both reading and writing
	 * (clears the content of the file when opening it) with rw------- or 0600
	 * permision which grant read and write permission only for the owner
	 */
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	/* write the text content */
	w = write(fd, text_content, length);

	/* couldn't open/write  */
	if (fd == -1 || w == -1)
		return (-1);

	/* close file descriptor */
	close(fd);

	return (1);
}
