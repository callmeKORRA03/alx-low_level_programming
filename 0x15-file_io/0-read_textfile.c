#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to POSIX stdout.
 * @filename: A pointer to the name of the file.
 * @letters: The number of letters the
 *           function should read and print.
 * Return: The actual number of letters can read and print
 *         0, if file name is null, cannot be opened or read, or,
 *         if write fails or does not write the expected number of bytes
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t op, r, wr;
	char *temp;

	if (filename == NULL)
	{
		return (0);
	}
	temp = malloc(sizeof(char) * letters);
	if (temp == NULL)
	{
		return (0);
	}
	op = open(filename, O_RDONLY);
	r = read(op, temp, letters);
	wr = write(STDOUT_FILENO, temp, r);

	if (op == -1 || r == -1 || wr == -1 || wr != r)
	{
		free(temp);
		return (0);
	}
	free(temp);
	close(op);

	return (wr);
}
