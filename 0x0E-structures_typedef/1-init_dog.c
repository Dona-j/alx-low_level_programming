#include "dog.h"

/**
 * init_dog - dog structure function
 * @*d: dog struct tag_name
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
