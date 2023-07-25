/**
 * _strcpy - a function that copies the string pointed to by src,
 * including the terminating null byte ('\n'),
 * to the buffer pointed to by dest.
 *
 * @dest: A pointer to destination of string
 * @src: A pointer to to surce string to copy from
 *
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	char *ino = dest;

	while (*src)
	{
		*dest++ = *src++;
	}
	return (ino);
}
