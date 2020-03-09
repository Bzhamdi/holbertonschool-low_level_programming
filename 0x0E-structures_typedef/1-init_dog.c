#include "dog.h"
/**
 *init_dog - dog entity
 *@d: instance of dog
 *@name: entity name
 *@age: entity age
 *@owner:entity owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
d->name = name;
d->age = age;
d->owner = owner;
}
