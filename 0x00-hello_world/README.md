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
