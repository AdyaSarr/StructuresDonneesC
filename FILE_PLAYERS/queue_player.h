#ifndef __QUEUE__H__
#define __QUEUE__H__

#include <stdio.h>
#include <stdlib.h>

    /*definition of type bool*/
    typedef enum{
        False,
        True
    }Bool;

    typedef struct Player{
        char nom[50];
        int level;
    }element_t;
    
    typedef struct QueuePlayer{
        struct QueuePlayer * nextQueue;
        element_t value;
    }QueuePlayer, *Queue;
    
    /**
     * Parametre de la File
    */

   static QueuePlayer *first = NULL;
   static QueuePlayer *last  = NULL;
   static int nombre_element = 0;

    Bool is_empty_queue(void);
    int queue_length(void);
    element_t first_element_queue(void);
    element_t last_element_queue(void);
    void print_queue(void);
    void print_player(element_t);
    void enqueue(element_t value);
    void dequeue(void);
    void clear_queue(void);
#endif