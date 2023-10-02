#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- read text file and print it
 * @filename: target text file
 * @letters: number of letters to be read
 * Description: reads a text file and prints it to the POSIX standard output
 * Return: actual number of letters could read and print, OR 0 if error
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *text;
	ssize_t fd, w, t;

	/* try to open file */
	fd = open(filename, O_RDONLY);

	/* could'nt open file OR filename is invalid */
	if (fd == -1)
		return (0);

	/* allocate memory */
	text = malloc(sizeof(char) * letters);
	/* read from file certain number of letters */
	t = read(fd, text, letters);
	/* write to the console */
	w = write(STDOUT_FILENO, text, t);

	/* free allocated memory */
	free(text);
	/* close file descriptor */
	close(fd);
	return (w);
}
