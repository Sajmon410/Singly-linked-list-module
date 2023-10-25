# Singly-linked-list-module<br>
## Task:
* Create a module that represents a singly linked list<br>
* Export the module as a static library<br>
* Then create a function that reverses the order of the elements<br>
* Using **С17 & MISRA standard** <br>
## Solution: 
This project presents a static library "linked_list" for<br>
work with a singly linked list. List elements can be of type int_least32_t<br>
double and uint_least8_t depending on how it was set at the beginning of likend_list.h<br>
files. In linked_list.c there are functions createNode, insertInFront, insertAtEnd,<br>
reverseList, deleteNode, printList.<br>

* CreateNode function creates a new node (element) of the list.<br>
* The insertInFront function adds a new element to the beginning while insertAtEnd adds<br>
element at the end of the list. reverseList reverses the order of elements while printList<br>
prints all list elements.<br>
* The assumption is that int_least32_t, double, uint_least8_t are most often used, so I<br>
therefore implemented just those three types. Therefore, the program is limited to those 3 types data.<br>
* Files main.c and linked_list.c use printf or <stdio.h> library which breaks<br>
MISRA-C:2004 20.9/R standard.<br>
* The program uses dynamic memory allocation due to the lifetime of the data it violates<br>
MISRA-C:2004 20.4/R standard.<br>
