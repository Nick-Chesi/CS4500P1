#include "list.h"
#include <stdio.h>
#include <string.h>

list* createlist(){
    // Allocating memory for the List
    list* ll = (list*)malloc(sizeof(list));
    // Could not allocate memory
    if (ll == NULL){
        return NULL;
    }
    // Setting ll head to null 
    ll -> head = NULL;
    // Returning the struct
    return ll;
}

int addToList(list* ll, char* item){
    // Allocating memory for the node
    node* newNode = (node* )malloc(sizeof(node));
    // Could not allocate memory for the node
    if (newNode == NULL){
        // -1 error code
        return -1;
    }

    // strdup allocates memory and copies the string
    newNode -> item = strdup(item);

    // Cleaning up the memory if node is NULL 
    // Also returning -1 error code
    if (newNode -> item == NULL){
        free(newNode);
        return -1;
    }

    // Assigning the new node to NULL
    newNode -> next = NULL;

    if (ll -> head == NULL){
        ll -> head = newNode;
    } else {
        // Setting current node to head
        node* current = ll -> head;
        // While the next node is not NULL set it to the current
        // to move down the list to add the new node
        while (current -> next != NULL){
            current = current -> next;
        }
        // Setting next node of current to new node
        current -> next = newNode;
    }

    // If adding to list successeds than return 0
    return 0;
}
