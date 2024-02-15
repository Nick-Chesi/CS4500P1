#include "list.h"
#include <stdio.h>

void printListError(int errorType);

int main(){
        // Creating test list
        list* testList = createList();

        // If list failed exit with -1
        if (testList == NULL){
                printf("List failed to be created!\n");
                return -1;
        }

        // Testing additions to the list, Checking the return in
        // and then passing error if it is not 0
        if (addToList(testList, "TEST 1!") != 0){
                printListError(0);
        }

        if (addToList(testList, "TEST 2!") != 0){
                printListError(0);
        }

        if(addToList(testList, "TEST 3!") != 0){
                printListError(0);
        }

        // Printing the list out!
        printf("+++TEST LIST PRINT+++");
        printList(testList);

        // Testing a removed Item form the list
        char* removedFromList = removeFromList(testList);

        if(removedFromList != NULL){
                printf("REMOVED ITEM: %s\n", removedFromList);
                // Freeing memory
                free(removedFromList);
        } else {
                printf("LIST IS EITHER EMPTY OR AN ERROR OCCURED!");
        }

        // Printing Seeing what remians in the list
        printf("THE LIST IS NOW: \n");
        printList(testList);

        // Freeing the list
        freeList(testList);
        printList(testList);

        // Adding back to the list to check integrity of memory!
        if (addToList(testList, "TEST 1!") != 0){
        printListError(0);
    }

    if (addToList(testList, "TEST 2!") != 0){
        printListError(0);
    }

        printf("ADDED BACK AFTER FLUSH");
        printList(testList);

        // Free the new listt
        freeList(testList);

        return 0;
}

void printListError(int errorType){
        switch(errorType){
                // List addition Error
                case 0:
                        printf("COULD NOT ADD TO LIST!\n");
                        break;
                default:
                        printf("UNKNOWN ERROR TYPE!\n");
                        break;
        }
}
