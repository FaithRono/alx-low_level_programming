#ifndef DOG_H
#define DOG_H
/**
  * struct dog - new type defining a dog
  * @name: name of the dog
  * @age: the age of the dog
  * @owner: owner of the dog
  */
struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
  * dog_t - typedef for struct dog
  */
typedef struct dog dog_j;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_j *new_dog(char *name, float age, char *owner);
void free_dog(dog_j *d);

#endif