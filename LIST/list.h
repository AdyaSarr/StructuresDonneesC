#ifndef __LIST__H__
#define __LIST__H__

    #include <stdio.h>
    #include <stdlib.h>

    typedef enum{
        False,
        True
    }Bool;

    typedef struct Etudiant{
        char nom[50];
        char prenom[60];
        int identifiant;
        char niveau[10];
    }element_t;

    typedef struct ElementList{
        element_t value;
        struct ElementList *nextList;
    }ElementList, *List;

    List empty_list(void);
    Bool is_empty_list(List liste);
    int lenght_list(List liste);
    void display_etudiant(element_t etudiant);
    void display_list(List liste);
    List insert_back_list(List liste, element_t element);
    List insert_front_list(List liste, element_t element);
    List delete_back_list(List liste);
    List delete_front_list(List liste);
    List clear_list(List liste);
#endif