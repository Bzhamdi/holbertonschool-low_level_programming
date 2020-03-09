#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *new_dog - dog entity
 *@name: entity name
 *@age : entity age
 *@owner: entity owner
 *Return: dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
int a, b, i, j;
dog_t  *mydog;
a = 1;
b = 1;
mydog = malloc(sizeof(struct dog));
if (mydog == NULL)
return (NULL);
while (name[a])
a++;
mydog->name = malloc(a);
if (mydog->name == NULL)
{
free(mydog);
return (NULL);
}
while (owner[b])
b++;
mydog->owner = malloc(b);
if (mydog->owner == NULL)
{
free(mydog->name);
free(mydog);
return (NULL);
}
for (i = 0; name[i] != '\0'; i++)
mydog->name[i] = name[i];
mydog->name[i] = '\0';
for (j = 0; owner[j] != '\0'; j++)
mydog->owner[j] = owner[j];
mydog->owner[j] = '\0';
mydog->age = age;
return (mydog);
}


