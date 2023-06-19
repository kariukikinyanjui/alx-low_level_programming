#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initializes a variable of type struct dog
 * @name: a pointer to char(name of the dog)
 * @age: a float representing the age of the dog
 * @owner: a pointer to char(owner of the dog)
 * @d: pointer to struct dog as well as name, age, owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
