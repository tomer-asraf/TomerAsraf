#ifndef LINKEDLIST_H
#define LINKEDLIST_H

typedef struct linkedList
{
	unsigned int num;
	linkedList* next;
}linkedList;

void deleteNode(linkedList* head);
void addNode(linkedList* head, unsigned int num);
linkedList* createNode(unsigned int num);
void printList(linkedList* head);
#endif