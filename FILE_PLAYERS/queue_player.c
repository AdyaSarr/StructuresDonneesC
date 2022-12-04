#include "queue_player.h"

Bool is_empty_queue(void){
    if(first == NULL && last == NULL)
        return True;
    return False;
}

int queue_length(void){
    return nombre_element;
}

element_t first_element_queue(void){
    if(is_empty_queue())
        exit(1);
    
    return first->value;
}

element_t last_element_queue(void){
    if(is_empty_queue())
        exit(1);
    
    return last->value;
}

void print_player(element_t element){
    printf("Nom : [%s] - Niveau [%d]", element.nom, element.level);
}
void print_queue(void){

    if(is_empty_queue()){
        printf("La File est vide\n");
        return;
    }

    QueuePlayer *queueTemp = first;
    while (queueTemp != NULL)
    {
        print_player(queueTemp->value);
        print_queue();
        queueTemp = queueTemp->nextQueue;
    }
    printf("\n");
}

void enqueue(element_t value){
    
    QueuePlayer *queueTemp;
    queueTemp = malloc(sizeof(*queueTemp));

    if (queueTemp == NULL)
    {
        fprintf(stderr, "Erreur: Allocation dynamique");
        exit(EXIT_FAILURE);
    }
    queueTemp->value = value;
    queueTemp->nextQueue = NULL;
    if (is_empty_queue())
    {
        first = queueTemp;
        last = queueTemp;
    }else
    {
        last->nextQueue = queueTemp;
        last = queueTemp;   
    }
    nombre_element++;
    
}

void dequeue(void){

    if (is_empty_queue())
    {
        printf("La File est vide\n");
        return;
    }
    else
    {
        QueuePlayer *queueTemp = first;
        if (queue_length() == 1)
        {
            first = NULL;
            last = NULL;
        }
        else
        {
            first = first->nextQueue;
        }
        free(queueTemp);
        nombre_element--;
    }    
}

Queue clear_queue(void){
    if (is_empty_queue())
    {
        printf("La File est vide\n");   
        return NULL;
    }
    else
    {
        QueuePlayer * queueTemp = first;
        while (queueTemp != NULL)
        {
            dequeue();
            nombre_element--;
        }
        return NULL;   
    }
    
    
}