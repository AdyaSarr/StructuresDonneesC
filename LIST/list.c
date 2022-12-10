#include "list.h"

List empty_list(void){
    return NULL;
}

Bool is_empty_list(List liste){
    if(liste == NULL)
        return True;
    return False;
}

int lenght_list(List liste){
    int lenght = 0;
    while (!is_empty_list(liste))
    {
        lenght++;
        liste = liste->nextList;
    }
    return lenght;
}

void display_etudiant(element_t etudiant){
    printf("Nom: [%s] - Prenom: [%s] - Identifiant: [%d] - Niveau: [%s]\n", etudiant.nom, etudiant.prenom, etudiant.identifiant, etudiant.niveau);
}

void display_list(List liste){
    if (is_empty_list(liste))
    {
        printf("La liste est vide\n");
        return;
    }
    while (!is_empty_list(liste))
    {
        display_etudiant(liste->value);
        liste = liste->nextList;
    }
}

List insert_front_list(List liste, element_t element){
    ElementList *listemp;
    listemp = malloc(sizeof(*listemp));

    if (listemp == NULL)
    {
        fprintf(stderr, "Erreur: allocation dynamique\n");
        exit(EXIT_FAILURE);
    }

    listemp->value = element;
    if (is_empty_list(liste))
    {
        liste->nextList = NULL;
        return listemp;
    }
    
    listemp->nextList = liste;
    return listemp;
    
}
List insert_back_list(List liste, element_t element){
    ElementList *listemp;
    listemp = malloc(sizeof(*listemp));

    if (listemp == NULL)
    {
        fprintf(stderr, "Erreur: allocation dynamique\n");
        exit(EXIT_FAILURE);
    }

    listemp->value = element;
    listemp->nextList = NULL;

    if(is_empty_list(liste))
        return listemp;
    
    List temp = liste;
    while (!is_empty_list(temp))
    {
        temp = temp->nextList;
    }
    temp->nextList = listemp;
    return liste;
    
}

List delete_back_list(List liste){
    if (is_empty_list(liste))
    {
        printf("La listes est vide\n");
        return empty_list();
    }
    ElementList *suivant, *precedent;
    suivant = liste;
    precedent = liste;
    while (!is_empty_list(suivant->nextList))
    {
        precedent = suivant;
        suivant = suivant->nextList;
    }
    precedent->nextList = NULL;
    free(suivant);
    return liste;
}

List delete_front_list(List liste){
    if (is_empty_list(liste))
    {
        printf("La liste est vide\n");
        return empty_list();
    }
    ElementList *tempList  = liste->nextList;
    free(liste);
    return tempList;   
}

List clear_list(List liste){
    while (!is_empty_list(liste))
    {
        liste = delete_front_list(liste);
    }
    return empty_list();
}