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
} dog;

#endif
