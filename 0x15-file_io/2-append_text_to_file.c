#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>
/**
 * append_text_to_file - A function that  appends text at the end of a file
 * @filename: File to open
 * @text_content: String to appen at end of the file
 * Return: 1 success
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file_print, bytes_written;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		return (1);

	file_print = open(filename, O_WRONLY | O_APPEND);
	if (file_print == -1)
	{
		return (-1);
	}

	bytes_written = write(file_print, text_content, strlen(text_content));
	if (bytes_written == -1 || (size_t)bytes_written != strlen(text_content))
	{
		close(file_print);
		return (-1);
	}

	close(file_print);
	return (1);
}
