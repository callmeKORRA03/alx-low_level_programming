#include "main.h"
/**
 * temp - Allocates 1024 bytes
 * @file_name: The name of the file
 * Return: A pointer to the new file.
 */
char *temp(char *file_name)
{
	char *temp;

	temp = malloc(sizeof(char) * 1024);

	if (temp == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file_name);
		exit(99);
	}
	return (temp);
}

/**
 * close_file_des - Closes file descriptors.
 * @fd: The file descriptor
 */
void close_file_des(int fd)
{
	int i = close(fd);

	if (i == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - Copies the contents of a file to another file.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 * Return: 0 on success.
 */
int main(int argc, char *argv[])
{
	int cp_content, paste;
	int r, wr;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buffer = temp(argv[2]);
	cp_content = open(argv[1], O_RDONLY);
	r = read(cp_content, buffer, 1024);
	paste = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (cp_content == -1 || r == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}
		wr = write(paste, buffer, r);
		if (paste == -1 || wr == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}
		r = read(cp_content, buffer, 1024);
		paste = open(argv[2], O_WRONLY | O_APPEND);

	} while (r > 0);
	free(buffer);
	close_file_des(cp_content);
	close_file_des(paste);

	return (0);
}
