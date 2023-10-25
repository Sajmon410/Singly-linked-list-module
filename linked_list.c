#include <stdio.h>
#include "linked_list.h"
#include <stdlib.h>

Node* createNode(type data_c)
{
    Node* newNode = (Node*)malloc(sizeof(Node));
    assert(newNode);
    newNode->next = (Node*)NULL;
    newNode->data = data_c;
    return newNode;
}

void insertInFront(Node** head_f, type data_f)
{
    Node* newNode_f = createNode(data_f);
    assert(newNode_f);
    newNode_f->next = *head_f;
    *head_f = newNode_f;
}

void insertAtEnd(Node** head_e, type data_e)
{
    Node* newNode_e = createNode(data_e);
    assert(newNode_e);
    newNode_e->next = (Node*)NULL;
        if (*head_e == NULL)
        {
            *head_e = newNode_e;
        } else
        {
            Node* last = *head_e;
            while (last->next != NULL)
            {
                last = last->next;
            }
            last->next = newNode_e;
        }
}

void reverseList(Node** head_r)
{
    Node* prev=(Node*)NULL;
    Node* current=*head_r;
    Node* next_r=(Node*)NULL;
    while(current!=NULL)
    {
        next_r=current->next;
        current->next=prev;
        prev=current;
        current=next_r;
    }
    *head_r=prev;
}

void deleteNode(Node** head, type key)
{
    Node* temp = *head, *prev_d;
    if ((temp != NULL)
        && (temp->data == key))
    {
        *head = temp->next;
        free(temp);
    }
    else
    {
        while ((temp != NULL)
            && (temp->data != key))
        {
            prev_d = temp;
            temp = temp->next;
        }
        if (temp != NULL)
        {
            prev_d->next = temp->next;
            free(temp);
        }
    }
}

void printList(Node* head_i)
{
    Node* current_i = head_i;
    while (current_i != NULL)
    {
        printf("%"ELEMENT_PRINT" ",current_i->data);
        current_i = current_i->next;
    }
    printf("\n");
}
