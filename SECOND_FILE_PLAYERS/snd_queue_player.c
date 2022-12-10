#include "snd_queue_player.h"

Queue empty_queue(void){
    return NULL;
}

Bool is_empty_queue(Queue queue){
    if(queue==NULL)
        return True;
    return False;
}

element_t fist_player_queue(Queue queue){
    return queue->first->value;
}

element_t last_player_queue(Queue queue){
    return queue->last->value;
}

void display_player(element_t player){
    printf("Nom: [%s]-Nivau: [%d]", player.pseudo, player.niveau);
}

void display_queue(Queue queue){
    if (is_empty_queue(queue))
    {
        printf("Y'a rien a afficher la File est vide\n");
        return;
    }
    else
    {
        QueueElement *queueTemp = queue->first;
        while (!is_empty_queue(queueTemp))
        {
            display_player(queueTemp->value);
            queueTemp = queueTemp->nextQueue;
        }
        
    }
}

int lenght_queue(Queue queue){
    int lenght = 0;
    Queue temp = queue->first;
    while (!is_empty_queue(temp))
    {
        lenght++;
        temp = temp->nextQueue;
    }
    return lenght;
}

Queue enqueue(Queue queue, element_t value){
    QueueElement *queueTemp;
    queueTemp = malloc(sizeof(*queueTemp));
    if (queueTemp == NULL)
    {
        fprintf(stderr, "Erreur: allocation dynamique\n");
        exit(EXIT_FAILURE);
    }
    
    queueTemp->value = value;
    queueTemp->nextQueue = NULL;
    if (is_empty_queue(queue))
    {
        queue->first = queueTemp;
        queue->last = queueTemp;
        return queue;
    }
    else if (lenght_queue(queue)==1)
    {
        queue->first->nextQueue = queueTemp;
        queue->last = queueTemp;
        return queue;
    }else
    {
        queue->last->nextQueue = queueTemp;
        queue->last = queueTemp;
        return queue;
    }
}

Queue dequeue(Queue queue){
    if (is_empty_queue(queue))
    {
        printf("La file est vide impossible d'enlever un player\n");
        return empty_queue();
    }
    Queue temp = queue->first;
    if (is_empty_queue(queue) == 1)
    {
        queue->first = NULL;
        queue->last = NULL;
        return empty_queue();
    }
    queue->first = queue->nextQueue;
    free(temp);
    return queue;
}

Queue clear_queue(Queue queue){
    while (!is_empty_queue(queue))
    {
        queue = dequeue(queue);
    }
    return empty_queue();
}
