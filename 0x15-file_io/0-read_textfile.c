#include "main.h"


/**
 * read_textfile - reads a text file.
 * @filename: filename.
 * @letters: letters printed.
 * Return: number of letters printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int che;
	ssize_t kip, mem;
	char *buf;

	if (!filename)
		return (0);

	che = open(filename, O_RDONLY);

	if (che == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);

	kip = read(che, buf, letters);
	mem = write(STDOUT_FILENO, che, kip);

	close(che);

	free(buf);

	return (mem);
}
