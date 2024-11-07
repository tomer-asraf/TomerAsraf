#include "linkedList.h"

int main()
{
	linkedList* head = createNode(1);
	addNode(head, 2);
	addNode(head, 3);
	addNode(head, 4);
	deleteNode(head);
	addNode(head, 4);
	printList(head);
	return 0;
}