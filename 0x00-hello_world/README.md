TASK 0 : Write a script that runs a C file through the preprocessor and save the result into another file :
#!/bin/bash
[ -z "$CFILE" ] || [ ! -f "$CFILE" ] && echo "CFILE is not defined or the file does not exist" || gcc -E "$CFILE" -o c

TASK 1 : Write a script that compiles a C file but does not link :
#!/bin/bash
[ -z "$CFILE" ] || [ ! -f "$CFILE" ] && echo "CFILE is not defined or the file does not exist" || gcc -c "$CFILE" -o "$(basename "$CFILE" .c).o"

TASK 2 : Write a script that generates the assembly code of a C code and save it in an output file :
#!/bin/bash
[ -z "$CFILE" ] || [ ! -f "$CFILE" ] && echo "CFILE is not defined or the file does not exist" || gcc -S "$CFILE" -o "$(basename "$CFILE" .c).s"

TASK 3 : Write a script that compiles a C file and creates an executable named cisfun :
#!/bin/bash
[ -z "$CFILE" ] || [ ! -f "$CFILE" ] && echo "CFILE is not defined or the file does not exist" || gcc "$CFILE" -o cisfun

TASK 4 : Write a C program that prints exactly "Programming is like building a multilingual puzzle, followed by a new line :
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	puts("\"Programming is like building a multilingual puzzle");
	return (0);
}


TASK 5 : Write a C program that prints exactly with proper grammar, but the outcome is a piece of art,, followed by a new line : 
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("with proper grammar, but the outcome is a piece of art,\n");
	return (0);
}

TASK 6 : Write a C program that prints the size of various types on the computer it is compiled and run on :
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of a char: %zu byte(s)\n", sizeof(char));
	printf("Size of an int: %zu byte(s)\n", sizeof(int));
	printf("Size of a long int: %zu byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(long long int));
	printf("Size of a float: %zu byte(s)\n", sizeof(float));
	return (0);
}

TASK 7 : Write a script that generates the assembly code (Intel syntax) of a C code and save it in an output file :
#!/bin/bash
gcc -S -masm=intel "$CFILE" -o "${CFILE%.c}.s"

TASK 8 : Write a C program that prints exactly and that piece of art is useful" - Dora Korpar, 2015-10-19, followed by a new line, to the standard error :
#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: Always 1 (Error)
 */
int main(void)
{
	write(STDERR_FILENO,
	      "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
