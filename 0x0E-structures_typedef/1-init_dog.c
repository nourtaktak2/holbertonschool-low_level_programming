#include "dog.h"

/**
* init_dog - main function
* @e: parameter
* @name:dog name 
* @age: dog age
* @owner: dog owner
* Return: nothing
*/

void init_dog(struct dog *e, char *name, float age, char *owner)
{
if (e == 0)
return;
(*e).name = name;
(*e).age = age;
(*e).owner = owner;
}
