#include "list_funcs.h"

Node *create(short value){
    Node *new_element = (Node *) malloc(sizeof(Node));
    if (new_element == NULL){ return NULL; }
    new_element->value = value;
    new_element->next = NULL;
    return new_element;
}

void add(Node **head, short value){
    // create Node
    Node *new = create(value);
    // set next element = previous first element
    new->next = *head;
    // set new first element
    *head = new;
}

// free every element of linked list
void free_list(Node *head){
    Node *current = head;
    while (current != NULL){
        Node *next = current->next;
        free(current);
        current = next;
    }
}

void print_list(Node *head){
    Node *tmp = head;
    int length = 0;
    int i = 0;
    while (tmp != NULL){
        length++;
        tmp = tmp->next;
    }
    // reset head to head
    tmp = head;
    printf("linked list:\n");
    while (tmp != NULL){
        if (length > 15){
            if (i < 7) printf("%7d ", tmp->value);
            if (i == 6) printf(" ... ");
            if (i > length - 7)printf("%7d ", tmp->value);
        } else{
            printf("%7d ", tmp->value);
        }
        i++;
        tmp = tmp->next;
    }
    printf("\n");
}

void sorted_insert(Node **head, short value){
    Node *node = create(value);
    // head is null or already bigger than node->key
    if (*head == NULL || ((*head)->value >= node->value)){
        node->next = *head;
        *head = node;
        return;
    }
    Node *current = *head;
    while (current->next != NULL && current->next->value < node->value)
        current = current->next;
    node->next = current->next;
    current->next = node;
}

void is_list_sorted(Node *head){
    while (head->next != NULL){
        if (head->value > head->next->value){
            // print red not sorted
            printf("\033[1;31mnot sorted\033[0m -> ");
            return;
        }
        head = head->next;
    }
    // print green sorted
    printf("    \033[1;32msorted\033[0m -> ");
}

void fill_linkedlist(Node **head, int size){
    for (int i = 0; i < size; i++)
        add(head, (rand() % (32768 * 2)) - 32768);
}
