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
    if (){
    }
}
