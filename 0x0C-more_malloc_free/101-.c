#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments
 * @argv: An array containing the command-line arguments
 *
 * Return: 0 on success, 98 on error
 */
int main(int argc, char *argv[])
{
        if (argc != 3)
        {
                printf("Error\n");
                return 98;
        }

        char *num1 = argv[1];
        char *num2 = argv[2];
        int i;

        for (i = 0; num1[i] != '\0'; i++)
        {
                if (!is_digit(num1[i]))
                {
                        printf("Error\n");
                        return (98);
                }
        }
        int i;

        for (i = 0; num2[i] != '\0'; i++)
        {
                if (!is_digit(num2[i]))
                {
                        printf("Error\n");
                        return (98);
                }
        }

        multiply(num1, num2);

        return (0);
}
