#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

/**
 * append_text_to_file - appends text to a file
 * @filename: name of the file
 * @text_content: text to be appended to the file
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, ret;
	int length = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[length] != '\0')
			length++;
	}

	ret = write(fd, text_content, length);
	if (ret == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);

}

