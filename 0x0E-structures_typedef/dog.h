#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Structure representing a dog
 * @name: First member
 * @age: Second member
 * @owner: Third member
 *
 * Description: Longer description
 */

typedef struct dog
{
    char *name;
    float age;
    char *owner;
} dog_t;

void init_dog(struct dog_t *d, char *name, float age, char *owner);
void print_dog(struct dog_t *d);

#endif /* DOG_H */
