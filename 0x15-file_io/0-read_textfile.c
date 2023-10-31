#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"
/**
 * read_textfile - function that reads a text file
 * @filename: name of the file
 * @letters: number of letters it should read and print
 * Return: number of letters it could read and print
 *
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	ssize_t readF;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	readF = read(fd, buffer, letters);
	/*buffer[readF] = '\0';*/
	if (readF == -1)
	{
		return (0);
	}

	write(1, buffer, readF);

	close(fd);
	free(buffer);
	return (readF);
}

