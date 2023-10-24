#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * main - A function that prints the opcodes of its own main function
 * @argc: Argument count
 * @argv: argument value
 * Return: 0
 */


int main(int argc, char *argv[])
{
	if (argc != 2)
		fprintf(stderr, "Error\n");
		return (1);

	char command[256];
	unsigned char  *num_bytes;

	num_bytes = atoi(argv[1]);

	if (num_bytes < 0)
		fprintf(stderr, "Error\n");
		return (2);

	snprintf(command, sizeof(command),
			"objdum -d -j.text -M intel %s | grep '<main>:' | awk '{print $2}'",
			argv[0]);
	FILE *pipe = popen(command, "r");

	if (pipe == NULL)
		perror("popen");
		return (3);

	char opcode[3];
	int bytes_read = 0;

	while (bytes_read < num_bytes && fscanf(pipe, "%2s", opcode) == 1)
	{
		printf("%s", opcode);
		bytes_read += 2;

		if (bytes_read < num_bytes)
		{
			printf(" ");
		}
	}
	printf("\n");

	pclose(pipe);

	return (0);
}
