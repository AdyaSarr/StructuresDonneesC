#include <stdio.h>
#include "stack_player.h"

int main(int argc, char const *argv[])
{
    stack_player_type mystack = empty_stack();
    stack_player_type mystack1 = empty_stack();
    stack_player_type dumpctack = empty_stack();

    element_t moi = {"Adya", 4};
    element_t ass = {"Assane", 12};
    element_t cou = {"Coundoul", 7};
    element_t sal = {"Saliou", 10};

    element_t go = {"gorgui", 4};
    element_t mo = {"Mouhamed", 1};
    element_t is = {"Issa", 7};

    display_stack(mystack);

    printf("\n-----------------------------------------------------------------------\n");

    display_stack(mystack1);

    printf("\n----------------------------Ajout dans la PILE mystack-------------------------------------------\n");

    mystack = push_stack(mystack, moi);
    mystack = push_stack(mystack, ass);
    mystack = push_stack(mystack, cou);
    mystack = push_stack(mystack, sal);
    display_stack(mystack);
    printf("Le joueur au sommet de la PILE est:");
    display_player(top_stack(mystack));
    printf("La Longueur de la PILE est : %d\n", length_stack(mystack));

    printf("\n--------------------------------Ajout dans la PILE mystack1---------------------------------------\n");
    mystack1 = push_stack(mystack1, go);
    mystack1 = push_stack(mystack1, mo);
    mystack1 = push_stack(mystack1, is);
    display_stack(mystack1);
    printf("Le joueur au sommet de la PILE est:");
    display_player(top_stack(mystack1));
    printf("La Longueur de la PILE est : %d\n", length_stack(mystack1));

    printf("\n---------------------------------Dump de mystack et mystack1--------------------------------------\n");

    dumpctack = dump_stack(mystack1, mystack);
    display_stack(dumpctack);
    printf("Le joueur au sommet de la PILE est:");
    display_player(top_stack(dumpctack));
    printf("La Longueur de la PILE est : %d\n", length_stack(dumpctack));

    printf("\n----------------------------------------------j-------------------------\n");

    mystack = clear_stack(mystack);
    mystack1 = clear_stack(mystack1);
    dumpctack = clear_stack(dumpctack);

    display_stack(mystack);
    display_player(top_stack(mystack));
    display_stack(mystack1);
    display_player(top_stack(mystack1));
    display_stack(dumpctack);
    display_player(top_stack(dumpctack));
    printf("La Longueur de la PILE est : %d\n", length_stack(mystack));
    printf("\n-----------------------------------------------------------------------\n");
    return 0;
}
