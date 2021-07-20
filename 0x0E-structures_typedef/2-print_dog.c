#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * print_dog - prints a struct dog.
 * @d: struct dog in dog.h
 *
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	(*d).name != NULL ? printf("Name: %s\n", (*d).name)
		: printf("Name: (nil)\n");

	printf("Age: %f\n", (*d).age);

	(*d).owner != NULL ? printf("owner: %s\n", (*d).owner)
		: printf("Owner: (nil)\n");
}
