#ifndef identifer
#define identifer

/**
* struct dog - Descripción
* dog - strctured
* @name: variable name
* @age: variable age
* @owner: vriable owner
*
* Description: Dog variable
*
*/
struct dog
{
char *name;
float age;
char *owner;
};
typedef struct dog dog_t;
void print_dog(struct dog *d);
void init_dog(struct dog *d, char *name, float age, char *owner);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
