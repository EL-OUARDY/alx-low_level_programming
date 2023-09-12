#ifndef H_DOG
#define H_DOG

/**
* struct dog - custom dog struct
* @name: struct member
* @age: struct member
* @owner: struct member
* Description: a declaration of a custom struct thar holds dog's fields
* and give it an alias using typedef
*/
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

#endif
