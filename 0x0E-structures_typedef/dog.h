#ifndef dog_h
#define dog_h
/**
 * struct dog - dog parameters
 * @name: its name
 * @age: its age
 * @owner: its owner
 *
 * Description: This is a structue containing details of a dog.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
 * dog_t - defination od structure similar to dog.
 */
typedef struct dog dog_t;


void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif
