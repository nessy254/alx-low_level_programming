#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include "main.h"
/**
 * create_file - creates a file
 * @filename: name of the file to be created
 * @text_content: content of the file which is null terminated
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int file;
	int length = 0;
	int ret;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (file == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[length] != '\0')
			length++;
	}

	ret = write(file, text_content, length);
	if (ret == -1)
	{
		close(file);
		return (-1);
	}

	close(file);
	return (1);
}
