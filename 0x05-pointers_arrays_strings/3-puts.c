#include "main.h"

/**
 * _puts - Imprime une chaîne de caractères suivie d'un saut de ligne.
 * @str: Pointeur vers la chaîne de caractères à imprimer.
 *
 * Description: Cette fonction prend en paramètre un pointeur vers une chaîne
 * de caractères et l'imprime sur la sortie standard, suivi d'un saut de ligne
 *
 * Return: Aucun.
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
