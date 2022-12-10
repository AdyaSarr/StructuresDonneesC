#include "list.h"

int main(int argc, char const *argv[])
{
    List liste1 = empty_list();
    element_t moi = {"SARR", "Adya", 2019, "Licence 2"};
   // display_etudiant(moi);
    element_t sal = {"DIOP", "Saliou", 2022, "Licence 3"};
    //display_etudiant(sal);
    element_t cou = {"COUNDOUL", "Cheikh Gaye", 2018, "Licence 3"};
    //display_etudiant(cou);
    element_t ass = {"MBENGUE", "Assane", 2023, "Master 1"};
    //display_etudiant(ass);
    liste1 = insert_back_list(liste1, moi);
    liste1 = insert_front_list(liste1, sal);
    liste1 = insert_front_list(liste1, cou);
    liste1 = insert_front_list(liste1, ass);
    printf("Le nombre de Personnes dans la file est %d:\n", lenght_list(liste1));
    display_list(liste1);
    liste1 = clear_list(liste1);
    display_list(liste1);
    return 0;
}
