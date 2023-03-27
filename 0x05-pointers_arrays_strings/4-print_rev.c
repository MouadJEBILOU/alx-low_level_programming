#include "main.h"

/**
 * print_rev - Imprime une chaîne de caractères en ordre inverse,
 * suivie d'un saut de ligne.
 * @s: Pointeur vers la chaîne de caractères à imprimer.
 *
 * Description: Cette fonction prend en paramètre
 * un pointeur vers une chaîne de caractères et imprime
 * chaque caractère de la chaîne en ordre inverse,
 * suivi d'un saut de ligne.
 *
 * Return: Aucun.
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	while (i > 0)
	{
		i--;
		_putchar(s[i]);
	}

	_putchar('\n');
}
