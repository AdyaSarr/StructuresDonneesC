#include <stdio.h>
#include <stdlib.h>
#include "stack_player.h"

/*------------------------------------------------------------------------------------------*/
stack_player_type empty_stack(void){
    return NULL;
}
/*------------------------------------------------------------------------------------------*/
Bool is_emppty_stack(stack_player_type stack){
    if (stack == NULL)
        return True;
    return False;
}
/*------------------------------------------------------------------------------------------*/
stack_player_type push_stack(stack_player_type stack, element_t element){
    stack_player *playertemp;
    playertemp = malloc(sizeof(*playertemp));

    if (playertemp == NULL)
    {
        fprintf(stderr, "Erreur: d'allocation dynamique\n");
        exit(EXIT_FAILURE);
    }
    playertemp->player = element;
    playertemp->next = stack;
    return playertemp;
}
/*------------------------------------------------------------------------------------------*/
stack_player_type pop_stack(stack_player_type stack){
    if (is_emppty_stack(stack))
        return empty_stack();
    
    stack_player * playertemp;
    playertemp = stack->next;
    free(stack);
    return playertemp;
}
/*------------------------------------------------------------------------------------------*/
void display_stack(stack_player_type stack){
    if (is_emppty_stack(stack))
    {
        printf("La PILE est vide!!!!!\n");
        return;
    }
    
    while (!is_emppty_stack(stack))
    {
        printf("Pseudo: [%s] - Niveau: [%d]\n", stack->player.pseudo, stack->player.niveau);
        stack = stack->next;
    }
}
/*------------------------------------------------------------------------------------------*/
void display_player(element_t element){
    printf("Pseudo: [%s] - Niveau: [%d]\n", element.pseudo, element.niveau);
}
/*------------------------------------------------------------------------------------------*/
element_t top_stack(stack_player_type stack){
    if (is_emppty_stack(stack))
    {
        printf("La Pile est vide\n");
        element_t voidplayer = {"aucun", -1};
        return voidplayer;
    }
    return stack->player;
}
/*------------------------------------------------------------------------------------------*/
int length_stack(stack_player_type stack){
    int lenght = 0;
    while (!is_emppty_stack(stack))
    {
        lenght++;
        stack = stack->next;
    }
    return lenght;
}
/*------------------------------------------------------------------------------------------*/
stack_player_type clear_stack(stack_player_type stack){
    while (!is_emppty_stack(stack))
    {
        stack = pop_stack(stack);
    }
    return empty_stack();
}
/*------------------------------------------------------------------------------------------*/
stack_player_type dump_stack(stack_player_type stack1, stack2){
    
}
/*------------------------------------------------------------------------------------------*/