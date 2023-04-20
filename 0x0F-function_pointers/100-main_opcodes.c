#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of its own main function
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 on success, 1 if argc is incorrect,
 * 2 if number of bytes is negative
 */

int main(int argc, char *argv[])
{
        int i, bytes;

        if (argc != 2)
        {
                printf("Error\n");
                return (1);
        }

        bytes = atoi(argv[1]);

        if (bytes < 0)
        {
                printf("Error\n");
                return (2);
        }

        char *ptr = (char *)&main;

        for (i = 0; i < bytes; i++)
                printf("%.2hhx ", ptr[i]);

        printf("\n");

        return (0);
}
