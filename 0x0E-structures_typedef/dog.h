#ifndef DOG_H
#define DOG_H

/**
 * @struct dog - a cute dog
 *
 * name: dog name parameter
 * 
 * @age: dog age parameter
 *
 * @owner: dog owner parameter
 * 
 * Description - a beautiful dog
 */

 struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /** #define DOG_H*/

