#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/stat.h>
#include <string.h>
/**
 * create_file - A function that Under the snow
 * @filename:File to open
 * @text_content: String written to the file
 * Return: 1 on success
 */
int create_file(const char *filename, char *text_content)
{
	int file_print, bytes_written;
	mode_t mode = S_IRUSR | S_IWUSR;

	if (filename == NULL)
		return (-1);

	file_print = open(filename, O_WRONLY | O_CREAT | O_TRUNC, mode);
	if (file_print == -1)
		return (-1);

	if (text_content != NULL)
	{
		bytes_written = write(file_print, text_content, strlen(text_content));
		if (bytes_written == -1 || (size_t)bytes_written != strlen(text_content))
		{
			close(file_print);
			return (-1);
		}
	}
	close(file_print);
	return (1);
}
