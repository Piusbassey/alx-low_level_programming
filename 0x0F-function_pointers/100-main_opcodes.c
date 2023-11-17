#include <stdio.h>
#include <stdlib.h>

/**
 * print_opcodes - Prints the opcodes of a given memory address
 * @addr: The address of memory to print opcodes from
 * @bytes: Number of bytes to print
 */
void print_opcodes(char *addr, int bytes)
{
	int i;

	for (i = 0; i < bytes; i++)
	{
		printf("%02x", (unsigned char)addr[i]);
		if (i < bytes - 1)
			printf(" ");
	}
	printf("\n");
}

/**
 * main - Prints opcodes of its own main function
 * @argc: Argument count
 * @argv: Argument vector
 * Return: 0 on success, 1 for incorrect argument count, 2 for negative bytes
 */
int main(int argc, char *argv[])
{
	int num_bytes = atoi(argv[1]);
	char *address = (char *)&main;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	if (num_bytes < 0)
	{
		printf("Error\n");
		return (2);
	}
	print_opcodes(address, num_bytes);

	return (0);
}

