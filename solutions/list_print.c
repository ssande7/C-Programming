#include <stddef.h> // For size_t
#include <stdio.h> // For printf()

typedef struct List {
    size_t len;
    double* data;
} List;

List list_init(void); // Forward declare function. (void) means no args

void list_print(List);

int main(void) {
    List test_list = list_init(); // Create instance of List

    // Print it out.
    printf("test_list: ");
    list_print(test_list);
    
    return 0;
}


List list_init(void) {
    return (List) {.len = 0, .data = NULL};
}

void list_print(List list) {
    printf("{\n\tlen: %ld\n\tdata: %p\n}\n", list.len, (void*)list.data);
}