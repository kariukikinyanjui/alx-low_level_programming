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
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
int _strlen(const char *string);
void _strcpy(char *dest, const char *src);
#endif
