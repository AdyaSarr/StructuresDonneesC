#include "snd_queue_player.h"

int main(int argc, char const *argv[])
{
    element_t moi = {4, "Adya"};

    Queue queueplaye1 = empty_queue();
    queueplaye1 = enqueue(queueplaye1, moi);

    clear_queue(queueplaye1);
    
    return 0;
}
