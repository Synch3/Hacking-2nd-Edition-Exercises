#include <stdio.h>

void function() { //An example function with its own context --- Author uses context in place of scope.
    int var = 5;
    static int static_var = 5; //Static variable initialization - static variables are lexically scoped!!

printf("\t[in function] var = %d\n", var);
printf("\t[in function] static_var = %d\n", static_var);
var++;
static_var++;
}

int main() { //The main function with its own context
    int i;
    static int static_var = 1337; //Another static, in a different context --- (context means scope)

    for (i=0; i<5; i++) {
        printf("[in main] static_var = %d\n", static_var);
        function();
    }
}