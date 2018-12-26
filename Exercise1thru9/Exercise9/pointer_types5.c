#include <stdio.h>

//Why doesn't this file work? ---- Segmentation fault (core dumped)

int main () {
    int i;

    char char_array[5] = {'a', 'b', 'c', 'd', 'e'};
    int int_array[5] = {1, 2, 3, 4, 5};

    unsigned int hacky_nonpointer;

    hacky_nonpointer = (unsigned int) char_array;
    

    for (i = 0; i < 5; i++){ //Iterate through the char array with an unsigned integer.
        printf("[hacky_nonpointer] points to %p, which contains the integer '%c'\n",
            hacky_nonpointer, *((char *) hacky_nonpointer));
        hacky_nonpointer = hacky_nonpointer + sizeof(char);
    }

    hacky_nonpointer = (unsigned int) int_array;

    for (i = 0; i < 5; i++){ //Iterate through the int array with an unsigned integer.
        printf("[hacky_nonpointer] points to %p, which contains the char %d\n",
            hacky_nonpointer, *((int *) hacky_nonpointer));
        hacky_nonpointer = hacky_nonpointer + sizeof(int);
    }
}