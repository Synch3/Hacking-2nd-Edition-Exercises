#include <stdio.h>

int global_var;

int global_initialized_var = 5;

void function () { // Demo function
 int stack_var; //Lexical scope of stack_var

 printf("the function's stack_var is at address 0x%08x\n", &stack_var);
}

int main() {
    int stack_var; // Lexical scope - see line 8
    static int static_initialized_var =5;
    static int static_var;
    int *heap_var_ptr;

heap_var_ptr = (int *) malloc(4);

//Variables in the data segment.
printf("global_initialized_var is at address 0x%08x\n", &global_initialized_var);
printf("static_initialized_var is at address 0x%08x\n\n", &static_initialized_var);

//BSS segment variables
printf("static_var is at address 0x%08x\n", &static_var);
printf("global_var is at address 0x%08x\n\n", &global_var);

//Heap segment variable
printf("heap_var is at address 0x%08x\n\n", heap_var_ptr);

//stack segment variables
printf("stack_var is at address 0x%08x\n", &stack_var);
function();
}