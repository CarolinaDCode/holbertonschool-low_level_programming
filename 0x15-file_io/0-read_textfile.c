#include <stdio.h>
#include "main.h"

/**
 * read_textfile - check the code
 * @filename: name of the file
 * @letters: number of letters
 * Return: the number of letters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, rd, wt;
	char *buff;

	if (filename == NULL)
	{
		return (0);
	}

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}

	buff = malloc(sizeof(char) * letters);
	if(buff == NULL)
	{
		return (0);
	}

	rd = read(fd, buff, letters);
	if (rd == -1)
	{
		return (0);
	}

	wt = write(STDOUT_FILENO, buff, rd);
	if (wt == -1)
	{
		return (0);
	}

	free(buff);
	close(fd);
	return(wt);
}
