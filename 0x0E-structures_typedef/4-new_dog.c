#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 *new_dog - new structure
 *@name: name
 *@age: age
 *@owner: owner
 *Return: new_dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int size_name = 0;
	int size_owner = 0;
	int i;
	dog_t *dog_copy;

	while (name[size_name] != '\0')
		size_name++;

	while (owner[size_owner] != '\0')
		size_owner++;

	dog_copy = malloc(sizeof(dog_t));
	if (dog_copy == NULL)
		return (0);

	dog_copy->name = malloc((size_name + 1) * sizeof(char));
	if (dog_copy->name == NULL)
	{
		free(dog_copy);
		return (0);
	}
	for (i = 0; i < size_name; i++)
		dog_copy->name[i] = name[i];

	dog_copy->owner = malloc((size_owner + 1) * sizeof(char));
	if (dog_copy->owner == NULL)
	{
		free(dog_copy->name);
		return (0);
	}
	for (i = 0; i < size_owner; i++)
		dog_copy->owner[i] = owner[i];

	dog_copy->age = age;

	return (dog_copy);
}
