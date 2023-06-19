#ifndef DOG_H
#define DOG_H
/**
 * struct dog - structure definition
 * @name: a pointer to char(name of the dog)
 * @age: a float representing the age of the dog
 * @owner: a pointer to char(owner of the dog)
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
#endif
