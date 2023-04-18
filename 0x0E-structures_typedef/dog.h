#ifndef DOG_H
#define DOG_H

/**
 * struct dog - struct containing dog info
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of the owner of the dog
 *
 * Description: struct containing information about a dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* DOG_H */
