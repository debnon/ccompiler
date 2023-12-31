#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "nodeOperations.h"
#include "Node.h"

Node* createNode(char *newStr) {

    Node *node = (Node *)malloc(sizeof(Node));
    if (node == NULL) {
        fprintf(stderr, "Node init. memory alloc. failed\n");
        exit(EXIT_FAILURE);
    }

    node->str = (char *)malloc((strlen(newStr) + 1) * sizeof(char));// like node.str but where we have a pointer to node. 
    if (node->str == NULL) {
        fprintf(stderr, "String node init. memory alloc. failed\n");
        free(node);
        exit(EXIT_FAILURE);
    }
    strcpy(node->str, newStr);
    
    node->prev = NULL;
    node->next = NULL;

    // Node* node = Node{.str = &*str, .next=NULL, .prev=NULL};
    return node;
}