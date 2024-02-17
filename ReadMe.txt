# CS4500 PROJECT 1

Group members: Nicholas Chesi, Cole Bennett


**** To build the list_test executable:

1. Navigate to the directory that contains this readme on a unix system with GCC installed
2. run the command 'make'
3. The executable will be compiled automatically from the "list.h", "list.c", and "list_test.c" files

NOTE: The makefile was tested on the CentOS VM and MacOS locally, and worked in both cases.


**** To run the test:

1. run the command './list_test' in the same directory that you ran 'make'

If the output looks like this:

+++TEST LIST PRINT+++
TEST 1!
TEST 2!
TEST 3!
REMOVED ITEM: TEST 1!
THE LIST IS NOW: 
TEST 2!
TEST 3!
ADDED BACK AFTER FLUSHTEST 1!
TEST 2!
TEST HAS COMPLETED!

Then the test was successful and everything worked as expected. If the test procedure fails, an error message will be printed.


**** Project Component Explanations:

There are 3 c files in the project.

'list.h': Declares the structs and functions to be used in 'list.c'

'list.c': Implements a basic linked list in C, providing functions to create a new list in memory, add a node to the list, remove a node from the list, print the list, flush all nodes from the list, and delete the list from memory.

'list_test.c': Implements a testing procedure that demonstrates all functions in 'list.c' are working correctly. An error is printed to the console if any of the tests fail. The testing covers:

1. List creation
2. Adding nodes to the list
3. Printing the list contents to console
4. Removing nodes from the list
5. Clearing the list and freeing its memory


**** Challenges Overcome:

The implementation of the linked list went very smoothly overall. 

The most significant snag we hit was in the makefile, where we kept getting a 'Makefile:17: *** missing separator.  Stop.' 
output trying to build the files in the CentOS VM. We were able to trace the issue back to a copy-paste error in which the 
tab indents of the file had been replaced with space characters. Apparently make is very particular about needing tabs on 
lines that specify targets and dependencies, and this substitution was throwing the error. After restoring the tab characters the makefile worked properly.


**** Resources Used:

Linked list refresher: https://www.geeksforgeeks.org/what-is-linked-list/
Make file creation: https://www.cs.colby.edu/maxwell/courses/tutorials/maketutor/
Header files in C: https://www.tutorialspoint.com/cprogramming/c_header_files.htm
