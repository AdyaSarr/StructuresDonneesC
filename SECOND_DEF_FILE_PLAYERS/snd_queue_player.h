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
Bool is_empty_queue(void);
#endif