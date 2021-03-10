//
// Created by Lorian-Andrei Sandu on 10.03.2021.
//
#include "Sort.h"

Sort::Sort(int number, int minimum, int maximum)
{   Node *p=new Node;
    p->prev = nullptr;
    p->n = rand() % (maximum - minimum + 1) + minimum;
    for (int i = 1;i < number;i++) {
        Node* new_node = new Node;
        new_node->n = rand() % (maximum - minimum + 1) + minimum;
        new_node->prev = p;
        new_node->next = nullptr;
        p->next = new_node;
    }

}