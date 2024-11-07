
#ifndef QUEUE_H
#define QUEUE_H


/* a queue contains positive integer values. */
typedef struct Queue
{
	int* arr;
	int size;
	int counter;
	int last;

} Queue;

void initQueue(Queue* q, unsigned int size);
void cleanQueue(Queue* q);

void enqueue(Queue* q, unsigned int newValue);
int dequeue(Queue* q); // return element in top of queue, or -1 if empty
void printQueue(Queue* q, unsigned int size);

bool isEmpty(Queue* s);
bool isFull(Queue* s);

#endif /* QUEUE_H */
