#ifndef FUNCTIONS_H // this is a header guard; it prevents the compiler from including the same header file more than once
#define FUNCTIONS_H

#include "Node.h"

Node* createNode(char *str);
void addNode(Node **head, Node **tail, Node *node);
void printNode(Node *node);

#endif