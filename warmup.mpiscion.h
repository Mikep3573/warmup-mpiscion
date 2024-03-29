#define MAX_NAME_LENGTH 63

typedef struct {
    unsigned int weight;
    char name[1 + MAX_NAME_LENGTH];
} Thing;

Thing *createThing(char *name, unsigned int weight);

int compareThings(Thing *thingOne, Thing *thingTwo);
