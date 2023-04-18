#include <stdlib.h>
#include "dog.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: pointer to the string to duplicate
 *
 * Return: pointer to the duplicated string. NULL if str = NULL
 * or if memory allocation fails
 */
char *_strdup(char *str)
{
	char *dup_str;
	unsigned int i, len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;

	dup_str = malloc(sizeof(char) * (len + 1));

	if (dup_str == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
		dup_str[i] = str[i];

	return (dup_str);
}

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to the new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
		return (NULL);

	new_dog->name = _strdup(name);

	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	new_dog->age = age;

	new_dog->owner = _strdup(owner);

	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}

	return (new_dog);
}
