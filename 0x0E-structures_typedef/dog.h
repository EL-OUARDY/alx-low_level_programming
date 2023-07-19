#ifndef HEADER_DOG
#define HEADER_DOG

/**
* struct dog - custom dog struct
* @name: name struct member
* @age: age struct member
* @owner: owner struct member
* Description: a declaration of a custom struct.
* and give it an alias using typedef
*/
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
