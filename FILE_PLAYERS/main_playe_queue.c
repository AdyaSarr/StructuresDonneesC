#include "queue_player.h"

int main(int argc, char const *argv[])
{
    element_t moi = {"Adya", 4};
    element_t ass = {"Assane", 12};
    element_t cou = {"Coundoul", 7};
    element_t sal = {"Saliou", 10};

    element_t go = {"gorgui", 4};
    element_t mo = {"Mouhamed", 1};
    element_t is = {"Issa", 7};

    print_queue();
    enqueue(moi);
    enqueue(ass);
    enqueue(cou);
    enqueue(sal);
    enqueue(go);
    enqueue(mo);
    enqueue(is);

    print_queue();
    printf("La taille de la FILE est: %d\n", queue_length());
    clear_queue();
    return 0;
}
