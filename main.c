/*Simon Radosavljevic RA206/2020
Zadatak: Napraviti modul koji predstavlja jednostruko spregnutu listu
Modul izvesti kao staticku biblioteku
Zatim napraviti funkciju koja obrce redosled elemenata
Resenje: Ovaj projekat predstavlja staticku biblioteku "linked_list" za
rad sa jednostruko spregnutom listom. Elementi liste mogu biti tipa int_least32_t
double i uint_least8_t u zavisnosti od toga kako je podeseno na pocetku likend_list.h
datoteke. U linked_list.c nalaze se funkije createNode, insertInFront, insertAtEnd,
reverseList, deleteNode, printList. Funkcija createNode kreira novi cvor(element) liste.
Funkcija insertInFront dodaje novi element na pocetak dok insertAtEnd dodaje
element na kraj liste. reverseList obrce redosled elemenata dok printList
ispisuje sve elemente liste.
Pretpostavka je da se int_least32_t, double, uint_least8_t, najcesce koriste pa sam
zbog toga implementirao bas ta tri tipa. Samim tim program je ogranicen na ta 3 tipa
podataka.
Fajlovi main.c i linked_list.c koristi printf odnosno <stdio.h> bilbioteku sto krsi
MISRA-C:2004 20.9/R standard.
Program korsiti dinamicku alokaciju memorije zbog zivotnog veka podataka sto krsi
MISRA-C:2004 20.4/R standard.*/
#include<stdio.h>
#include "linked_list.h"

type main(void)
{
    Node* head = (Node*)NULL;
    insertInFront(&head, 5);
    insertInFront(&head, 6);
    insertInFront(&head, 1);
    insertAtEnd(&head, 0);
    insertAtEnd(&head, 5);
    insertAtEnd(&head, 1);
    printf("Originalna lista:\t\t\t\t");
    printList(head);
    deleteNode(&head, 0);
    printf("Lista nakon brisanja zadatog elementa:\t\t");
    printList(head);
    reverseList(&head);
    printf("Okrenuta lista:\t\t\t\t\t");
    printList(head);
    return 0;
}
