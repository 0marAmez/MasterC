#ifndef NODE_H
#define NODE_H

#include <stdint.h>

typedef struct  Node Node;
 
 struct Node{
    Node *left;
    Node *right;
    uint8_t symbol;
    uint64_t frequency;
 };
 



#endif // MACRO
