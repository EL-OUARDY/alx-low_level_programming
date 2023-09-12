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
struct dog
{
	char *name;
	float age;
	char *owner;
};

/* create an alias for the dog struct */
typedef struct dog dog_t;

/* function declarations*/
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif
