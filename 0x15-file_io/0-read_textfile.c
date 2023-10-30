#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * read_textfile - A function  that reads a text file
 * and prints it to the POSIX standard output
 * @filename: file to open
 * @letters: Letters to read and print
 * Return: number of letter read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_print;
	ssize_t bytes_read, bytes_written;
	char *buffer;

	if (filename == NULL)
	{
		return (0);
	}
	file_print = open(filename, O_RDONLY);
	if (file_print == -1)
	{
		return (0);
	}
	buffer = malloc(letters * sizeof(char));
	if (buffer == NULL)
	{
		close(file_print);
		return (0);
	}
	bytes_read = read(file_print, buffer, letters);
	if (bytes_read == -1)
	{
		free(buffer);
		close(file_print);
		return (0);
	}
	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
	if (bytes_written == -1 || bytes_written != bytes_read)
	{
		free(buffer);
		close(file_print);
		return (0);
	}
	free(buffer);
	close(file_print);
	return (bytes_read);
}
