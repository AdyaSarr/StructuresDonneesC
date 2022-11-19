#ifndef __STACKPLAYER__H__
#define __STACKPLAYER__H__

    /*define of a type Bool*/
    typedef enum{
        False,
        True
    }Bool;

    /*define of player*/
    typedef struct Players
    {
        char pseudo[255];
        int niveau;
    }element_t;

    /*Define the stack*/
    typedef struct stack_player
    {
        element_t player;
        struct stack_player *next;
    }stack_player, *stack_player_type;
    
    /*Declaration functions*/
    stack_player_type empty_stack(void);
    Bool is_emppty_stack(stack_player_type stack);
    stack_player_type push_stack(stack_player_type stack, element_t element);
    stack_player_type pop_stack(stack_player_type stack);
    void display_stack(stack_player_type stack);
    element_t top_stack(stack_player_type stack);
    void display_player(element_t element);
    int length_stack(stack_player_type stack);
    stack_player_type clear_stack(stack_player_type stack);
    stack_player_type dump_stack(stack_player_type stack1, stack_player_type stack2);
#endif