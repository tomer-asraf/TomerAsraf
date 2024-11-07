#include "iostream"
#include "linkedList.h"

/*
* this function deletes node from the list
* param: linkedList head - pointer to the head of the list, linkedList deleteNode - the node to delete from the list
*/
void deleteNode(linkedList* head)
{
	linkedList* curr = NULL;
	linkedList* temp = NULL;
	curr = head;
	while(curr->next->next)
	{
		curr = curr->next;
	}
	temp = curr->next;
	curr->next = temp->next;
	free(temp);
	
}

/*
* this function adds node to the list
* param: linkedList* head - pointer to the head of the list
* return: none
*/
void addNode(linkedList* head, unsigned int num)
{
	linkedList* curr = NULL;
	curr = head;
	while (curr)
	{
		if (curr->next == NULL)
		{
			curr->next = createNode(num);
			break;
		}
		curr = curr->next;
	}
}

/*
* this function creats new node to add to the list
* param: none
* return: linkedlist pointer
*/
linkedList* createNode(unsigned int num)
{
	linkedList* newNode = new linkedList;
	newNode->num = num;
	newNode->next = NULL;
	return newNode;
}

/*
* this function prints the list
*/
void printList(linkedList* head)
{
	linkedList* curr = NULL;
	curr = head;
	while (curr)
	{
		std::cout << curr->num << "";
		curr = curr->next;
	}
}