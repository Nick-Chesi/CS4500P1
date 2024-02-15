#include "list.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

list* createList(){
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

char* removeFromList(list* ll){
        // Checking if head is already null, if it is just return null!
        if(ll -> head == NULL){
                return NULL;
        }
        // Temp node set to the head of the linked list
        node* temp = ll -> head;
        // Setting the ll head to the ll head of next
        ll -> head = ll -> head -> next;
        // Setting item to temps item
        char* item = temp -> item;
        // Freeing memory
        free(temp);
        // Returning the item from temp
        return item;
}

void printList(list* ll){
        node* current = ll -> head;
        // While current is not NULL, print the current item
        // then go to the next node and repeat
        while(current != NULL){
                printf("%s\n", current -> item);
                current = current -> next;
        }
}

void flushList(list* ll){
        // While head is not NULL, remove item and free space
        while(ll -> head != NULL){
                char* item = removeFromList(ll);
                free(item);
        }
}

void freeList(list* ll){
        // Flush entire list and free memory from entire list
        flushList(ll);
        free(ll);
}
