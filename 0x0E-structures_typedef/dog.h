#ifndef dog_h
#define dog_h

/**
* struct dog - Dog description
* @name: name of the dog
* @age: age of dog
* @owner: The owner of the dog
*/
typedef struct dog
{
char *name;
float age;
char *owner;
}dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
