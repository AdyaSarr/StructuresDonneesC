#ifndef __SNDQUEUE__H__
#define __SNDQUEUE__H__

#include <stdio.h>
#include <stdlib.h>


typedef enum{
    False,
    True
}Bool;

typedef struct Player{
    int niveau;
    char pseudo[50];
}element_t;

typedef struct QueueElement{
    element_t value;
    struct QueueElement *first;
    struct QueueElement *last;
    struct QueueElement *nextQueue;
}QueueElement, *Queue;

Queue empty_queue(void);
Bool is_empty_queue(Queue queue);
element_t fist_player_queue(Queue queue);
element_t last_player_queue(Queue queue);
void display_player(element_t player);
void display_queue(Queue queue);
int lenght_queue(Queue queue);
Queue enqueue(Queue queue, element_t value);
Queue dequeue(Queue queue);
Queue clear_queue(Queue queue);
/**
 * void print_queue(void);
    void print_player(element_t);
    void enqueue(element_t value);
    void dequeue(void);
    void clear_queue(void);
*/
#endif