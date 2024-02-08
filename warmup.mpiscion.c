//mpiscion CS3010 Fall 2023

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "warmup.mpiscion.h"

/**
 * TODO-> Description of function
*/
Thing *createThing(char *name, unsigned int weight) {
    // Allocate memory for the 'Thing'
    Thing *ptr = malloc(sizeof(Thing));

    // Check if name is NULL
    if (name == NULL) {
      return NULL;  // If-so, return NULL
    }

    // Check the length of the name is greater than zero and less than or equal to 63
    if (strlen(name) > 0 && strlen(name) <= MAX_NAME_LENGTH) {
        // Set the name
        strcpy(ptr->name, name);
    }
    else {
        return NULL;  // Return NULL if not
    }

    // Check that weight is greater than zero
    if (weight > 0) {
        // Set the weight
        ptr->weight = weight;
    }
    else {
        return NULL;  // Return NULL if not
    }

    // Return ptr if all checks pass
    return ptr;
}

/**
 * TODO -> Description of function
*/
int compareThings(Thing *thingOne,Thing *thingTwo) {
    int compared = strcmp(thingOne->name, thingTwo->name);
    if (compared > 0) {
        return 1;
    }
    else if (compared < 0) {
        return -1;
    }
    else {
        if (thingOne->weight > thingTwo->weight) {
            return 1;
        }
        else if (thingOne->weight < thingTwo->weight) {
            return -1;
        }
        else {
            return 0;
        }
    }
}

int main() {
    Thing *thing1;
    Thing *thing2;
    thing1 = createThing(NULL, 10);
    thing2 = createThing("thing2", 2);
    printf("The name is %s and the weight is %u\n", thing1->name, thing1->weight);

    return 0;
}

