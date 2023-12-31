
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Node.h"


int main() {

    // when declaring a pointer variable, we need to specify the type of data it will point to (char *str or char* str or char * str)
    char *str = (char *)malloc(20 * sizeof(char));

    if (str == NULL) {
        fprintf(stderr, "Error: malloc failed\n");
        exit(EXIT_FAILURE);
    }

    strcpy(str, "Hello, world!\n");
    printf("%s", str);

    Node node = {.str = "2", .next = NULL, .prev = NULL};
    Node node2 = {.str = "2", .next= NULL, .prev = &node}; // & is the address of node

    free(str);

}