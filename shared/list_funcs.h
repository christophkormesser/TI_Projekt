//
// Created by Christoph Kormesser on 05.01.22.
//

#ifndef LIST_FUNCS_H
#define LIST_FUNCS_H

#include <stdlib.h>
#include <stdio.h>

typedef struct Node{
    short value;
    struct Node *next;
} Node;

Node *create(short value);

void push(Node **head, short value);

void free_list(Node *head);

void print_linkedlist(Node *head);

void sorted_insert(Node **head, short value);

void is_linkedlist_sorted(Node *head);

void fill_linkedlist_with_random_values(Node **head, int size);

#endif
