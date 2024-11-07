#include "queue.h"
#include <iostream>

/*
* this function initialize the queue to 0 values
* param: Queue* q - a pointer to the queue to initialize, unsigned int size - the size of the queue
* return: none
*/
void initQueue(Queue* q, unsigned int size)
{
	q->arr = new int[size];
	q->size = size;
	q->counter = 0;
	q->last = 0;
	for (int i = 0; i < size; i++)
	{
		q->arr[i] = 0;
	}
}

/*
* this function adds a "person" to the queue
* param: Queue* q - a pointer to the queue to add to a new "person", unsigned int newValu - the valu of the new"person"
* return: none
*/
void enqueue(Queue* q, unsigned int newValue)
{
	q->arr[q->last] = newValue;
	q->counter++;
	q->last++;
}

/*
* this function get out a person from the queue
* param: Queue* q - a pointer to the queue to delete from a "person"
* return: the person that got out if the queue is not empty, and -1 if the queue is empty 
*/
int dequeue(Queue* q)
{
	int temp = q->arr[0];
	for (int i = 0; i < q->size; i++)
	{
		q->arr[i] = q->arr[i + 1];
	}
	q->arr[q->size] = 0;
	q->arr[q->counter] = 0;
	q->counter--;
	q->last--;
	if (temp == 0)
	{
		return -1;
	}
	return temp;
}

/*
* this function cleans the queue to values 0
* param: Queue* q - a pointer to the queue to clean
* return: none
*/
void cleanQueue(Queue* q)
{
	for(int i = 0; i < q->size; i++)
	{
		q->arr[i] = 0;
	}
	q->counter = 0;
}

/*
* this function checks if the queue is empty 
* param: Queue* s - a pointer to the queue to check if he's empty 
* return: true if empty and false if not
*/
bool isEmpty(Queue* s)
{
	if (s->counter == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

/*
* this function checks if the queue id full
* param: Queue* s - a pointer to the queue
* return: true if empty and false if not
*/
bool isFull(Queue* s)
{
	if (s->counter == s->size)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void printQueue(Queue* q, unsigned int size)
{
	unsigned int i = 0;
	for (i = 0; i < q->size; i++)
	{
		std::cout << q->arr[i] << "";
	}
}