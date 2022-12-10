#include "list.h"

int main(int argc, char const *argv[])
{
    List liste1 = empty_list();
    element_t moi = {"SARR", "Adya", 2019, "Licence 2"};
    liste1 = insert_back_list(liste1, moi);
    display_list(liste1);
    liste1 = clear_list(liste1);
    return 0;
}
