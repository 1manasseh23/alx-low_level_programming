#ifndef __DOG_H__
#define __DOG_H__

/**
 * struct dog - a function Define a new type struct dog
 * with the following elements
 * @name: The dog name
 * @age: The dog age
 * @owner: THe dog owner
 * Description: A data structure for dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
