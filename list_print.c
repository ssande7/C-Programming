#include <stddef.h> // For size_t
#include <stdio.h> // For printf()

typedef struct List {
    size_t len;
    double* data;
} List;

List list_init(void); // Forward declare function. (void) means no args


int main(void) {
    List test_list = list_init(); // Create instance of List

    // Print it out.
    /*****
    TODO:
    Create a list_print function and change the line below to use it.
    *****/
    printf("test_list: {\n\tlen: %ld\n\tdata: %p\n}\n", test_list.len, (void*)test_list.data);
    
    return 0;
}


List list_init(void) {
    return (List) {.len = 0, .data = NULL};
}