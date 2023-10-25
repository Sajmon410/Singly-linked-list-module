# Singly-linked-list-module
## Task: Create a module that represents a singly linked list
## Export the module as a static library
## Then create a function that reverses the order of the elements
## Solution: This project presents a static library "linked_list" for
## work with a singly linked list. List elements can be of type int_least32_t
## double and uint_least8_t depending on how it was set at the beginning of likend_list.h
## files. In linked_list.c there are functions createNode, insertInFront, insertAtEnd,
## reverseList, deleteNode, printList. The createNode function creates a new node (element) of the list.
## The insertInFront function adds a new element to the beginning while insertAtEnd adds
 ##element at the end of the list. reverseList reverses the order of elements while printList
## prints all list elements.
## The assumption is that int_least32_t, double, uint_least8_t are most often used, so I
## therefore implemented just those three types. Therefore, the program is limited to those 3 types
## data.
##Files main.c and linked_list.c use printf or <stdio.h> library which breaks
## MISRA-C:2004 20.9/R standard.
## The program uses dynamic memory allocation due to the lifetime of the data it violates
## MISRA-C:2004 20.4/R standard.
