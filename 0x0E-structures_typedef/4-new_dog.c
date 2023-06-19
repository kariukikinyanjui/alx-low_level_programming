#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - calculates the length of a string
 * @string: function parameter
 * Return: length of string
 */
int _strlen(const char *string)
{
	int count = 0;

	while (*string != '\0')
	{
		count++;
		string++;
	}
	return (count);
}
/**
 * _strcpy - copies characters from the src to dest
 * @dest: pointer to the destination character
 * @src: pointer to the source character
 * Return: pointer to dest
 */
void _strcpy(char *dest, const char *src)
{
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
}
/**
 * new_dog - creates new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of the dog
 * Return: pointer to the new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int lenA, lenB;

	lenA = _strlen(name);
	lenB = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		return (NULL);
	}
	dog->name = malloc(sizeof(char) * (lenA + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (lenB + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}

