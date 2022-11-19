#include <stdio.h>
#include "stack_player.h"

int main(int argc, char const *argv[])
{
    stack_player_type mystack = empty_stack();
    element_t moi = {"Adya", 4};
    element_t ass = {"Assane", 12};
    element_t cou = {"Coundoul", 7};
    element_t sal = {"Saliou", 10};
    display_stack(mystack);
    printf("\n-----------------------------------------------------------------------\n");
    mystack = push_stack(mystack, moi);
    mystack = push_stack(mystack, ass);
    mystack = push_stack(mystack, cou);
    mystack = push_stack(mystack, sal);
    display_stack(mystack);
    printf("Le joueur au sommet de la PILE est:");
    display_player(top_stack(mystack));
    printf("La Longueur de la PILE est : %d\n", length_stack(mystack));
    printf("\n-----------------------------------------------------------------------\n");
    mystack = pop_stack(mystack);
    display_stack(mystack);
    printf("Le joueur au sommet de la PILE est:");
    display_player(top_stack(mystack));
    printf("La Longueur de la PILE est : %d\n", length_stack(mystack));
    printf("\n-----------------------------------------------------------------------\n");

    mystack = clear_stack(mystack);
    display_stack(mystack);
    display_player(top_stack(mystack));
    printf("La Longueur de la PILE est : %d\n", length_stack(mystack));
    printf("\n-----------------------------------------------------------------------\n");
    return 0;
}
