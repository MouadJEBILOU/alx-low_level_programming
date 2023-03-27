/**
 * _atoi - Convertit une chaîne de caractères en un entier.
 * @s: Pointeur vers la chaîne de caractères à convertir.
 *
 * Description: Cette fonction prend en paramètre un
 * pointeur vers une chaîne de caractères et convertit
 * la première séquence de chiffres trouvée en un
 * entier. Elle prend également en compte les signes
 * + et -, ainsi que les caractères qui précèdent
 * la séquence de chiffres. La fonction renvoie l'entier
 * converti. Si aucun chiffre n'est trouvé dans
 * la chaîne, la fonction renvoie 0.
 *
 * Return: L'entier converti.
 */
int _atoi(char *s)
{
	int sign = 1;
	int result = 0;
	int i = 0;

	/* Vérifie le signe */
	if (s[0] == '-')
	{
		sign = -1;
		i++;
	}
	else if (s[0] == '+')
	{
		i++;
	}

	/* Convertit chaque chiffre */
	while (s[i] != '\0')
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			result = result * 10 + (s[i] - '0');
		}
		else
		{
			break;
		}
		i++;
	}

	return (result * sign);
}
