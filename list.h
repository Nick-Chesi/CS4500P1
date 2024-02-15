#ifndef LIST_H
#define LIST_H

#include <stdio.h>

typedef struct Node node;

struct Node {
        char* item;
        node* next;
};

typedef struct List {
        node* head;
} list;

// Allocates space for a new list and sets its head to NULL
list* createList();

// Allocates a new node and copiues the string from item to this node
// Use malloc, strlen, and strncpy, or strdup. Adds this new node to the 
// end of the list, returns 0 if successful, non-zero otherwise
int addToList(list* ll, char* item);

// Removes the head of the list ll, extracts the string stored in the head
// and returns a pointer to this string. Also frees the removed head node.
char* removeFromList(list* ll);

// Prints every string in each node of the list ll, with a new line
// character at the end of each string
void printList(list* ll);

// Flushes clears the entire list and re-initalizes the list. The passed
// pointer ll should still point to a valid and empty list when this function
// returns. Any memory allocated to store nodes in the list is to be freed.
void flushList(list* ll);

// De-allocates all data for the list. Ensure all memmory allocated is freed.
// All is freed including any strings in and the list ll itself.
void freeList(list* ll);

#endif
