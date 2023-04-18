#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - creates a new dog.
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: pointer to the new dog.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog;
	int lName = 0, lOwner = 0, i;

	/*Get lengths of name and owner strings */
	while (*(name + lName))
	{
		lName++;
	}
	lName++;
	while (*(owner + lOwner))
	{
		lOwner++;
	}
	lOwner++;
	/* Allocate memory for new dog struct*/
	newDog = malloc(sizeof(struct dog));
	if (newDog == NULL)
	{
		return (NULL);
	}
	/*Allocate memory for name string*/
	newDog->name = malloc(lName * sizeof(char));
	if (newDog->name == NULL)
	{
		free(newDog);
		return (NULL);
	}
	/*Copy name string to new memory location */
	for (i = 0; i < lName; i++)
	{
		*(newDog->name + i) = *(name + i);
	}
	newDog->age = age;
	/*Allocate memory for owner string */
	newDog->owner = malloc(lOwner * sizeof(char));
	if (newDog->owner == NULL)
	{
		free(newDog->name);
		free(newDog);
		return (NULL);
	}
	/*Copy owner string to new memory location*/
	for (i = 0; i < lOwner; i++)
	{
		*(newDog->owner + i) = *(owner + i);
	}
	return (newDog);
}
