#ifndef NODE_H
#define NODE_H

typedef struct Node {
    char *str;
    struct Node *next;
    struct Node *prev;
} Node; // this is part of the typedef syntax for aliasing a struct; independent of the struct name

#endif