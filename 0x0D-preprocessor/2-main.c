#include <stdio.h>

/**
 * main - entry point of the program
 *
 * Description: This function prints
 * the name of the file it was compiled from
 * Return: 0, always successfull
 */
int main(void)
{
    printf("%s\n", __FILE__);
    return (0);
}
