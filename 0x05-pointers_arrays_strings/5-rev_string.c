#include "main.h"

/**
 * rev_string - Inverse une chaîne de caractères.
 * @s: Pointeur vers la chaîne de caractères à inverser.
 *
 * Description: Cette fonction prend en paramètre
 * un pointeur vers une chaîne de caractères et
 * inverse l'ordre des caractères dans la chaîne.
 *
 * Return: Aucun.
 */
void rev_string(char *s)
{
	int i = 0, j = 0;
	char temp;

	while (s[j + 1] != '\0')
		j++;

	while (i < j)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
		i++;
		j--;
	}
}
