#include "dog.h"
#include <stddef.h>

/**
 * init_dog - initializes a dog structure
 * @d: pointer to struct dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner's name
 *
 * Description: function that initializes a variable of type struct dog
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
