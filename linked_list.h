#ifndef LINKED_LIST_H
#define LINKED_LIST_H
#include <stdint.h>
#include <inttypes.h>
#include <assert.h>

#define ELEMENT_TYPE_INT

#ifdef ELEMENT_TYPE_INT
#define ELEMENT_PRINT "d"
typedef int_least32_t type;
#endif

#ifdef ELEMENT_TYPE_CHAR
#define ELEMENT_PRINT "c"
typedef uint_least8_t type;
#endif

#ifdef ELEMENT_TYPE_DOUBLE
#define ELEMENT_PRINT "lf"
typedef double type;
#endif

typedef struct node
{
    type data;
    struct node* next;
}Node;

Node* createNode(type data_c);
void insertInFront(Node** head_f, type data_f);
void insertAtEnd(Node** head_e, type data_e);
void reverseList(Node** head_r);
void deleteNode(Node** head, type key);
void printList(Node* head_i);
type main(void);
#endif
