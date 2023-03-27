/**
 * swap_int - Échange les valeurs de deux entiers.
 * @a: Pointeur vers le premier entier.
 * @b: Pointeur vers le deuxième entier.
 *
 * Description: Cette fonction prend deux pointeurs vers des entiers en paramètre
 * et échange les valeurs pointées par ces pointeurs.
 * Return: Aucun.
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
