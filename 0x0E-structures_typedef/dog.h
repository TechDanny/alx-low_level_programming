#ifndef MAIN_H_
#define MAIN_H_
/**
 * struct dog - short description
 * @name:character name
 * @age:age number
 * @owner:dog owner
 *
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif