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
	char *car;

	if (!filename)
		return (0);

	che = open(filename, O_RDONLY);

	if (che == -1)
		return (0);

	car = malloc(sizeof(char) * (letters));
	if(!car)
		return (0);
	kip = read(che, car, letters);
	mem = write(STDOUT_FILENO, che, kip);

	close(che);

	free(car);

	return (mem);
}
