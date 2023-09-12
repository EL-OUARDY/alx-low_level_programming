#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

char *_strcpy(char *dest, char *src);
int _strlen(char *s);

/**
 * new_dog - create a new a dog
 * @name: struct member
 * @age: struct member
 * @owner: struct member
 * Description: a function that create a new instance of the dog struct.
 * Return: a dog object ^_^
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	/* allocate memory */
	dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	/* assign name */
	_strcpy(dog->name, name);

	/* assign age */
	dog->age = age;

	/* allocate memory */
	dog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	/* assign owner */
	_strcpy(dog->owner, owner);

	return (dog);
}

/**
 * char *_strcpy -copy string
 * @dest: copy to
 * @src: copy from
 * Description: copies a string from one location to another
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int l = 0;
	int x = 0;

	while (*(src + l) != '\0')
	{
		l++;
	}
	for ( ; x < l ; x++)
	{
		dest[x] = src[x];
	}
	dest[l] = '\0';
	return (dest);
}

/**
 * _strlen - output the length of a string
 * @s: a pointer to a char passed as an argument
 * Return: int - the lenght of the given string
 */
int _strlen(char *s)
{
	int l = 0;

	while (*s++)
		l++;

	return (l);
}

