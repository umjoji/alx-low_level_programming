#ifndef _DOG_H_
#define _DOG_H_

/**
 * dog_t - typedef for struct dog
 */

typedef struct dog dog_t;

/**
 * struct dog - describes a dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * 
 * Description: this struct descibes a dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif
