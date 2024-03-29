#ifndef dog_h
#define dog_h

/**
* struct dog - Dog description
* @name: name of the dog
* @age: age of dog
* @owner: The owner of the dog
*/
struct dog
{
char *name;
float age;
char *owner;
};
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void free_dog(dog_t *d);
#endif
