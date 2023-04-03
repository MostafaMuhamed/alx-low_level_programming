C - More singly linked lists

As part of this programming project, I honed my skills in creating and working with singly linked lists using the C programming language.

Header file 📁
The file "lists.h" contains the necessary definitions and function prototypes for all types and functions implemented in the project.

Tasks 📃
Here's a brief overview of the functions I wrote for the project:

Print list
The function "0-print_listint.c" prints all the elements of a "listint_t" linked list and returns the number of nodes in the list.

List length
The function "1-listint_len.c" returns the number of elements in a "listint_t" linked list.

Add node
The function "2-add_nodeint.c" adds a new node to the beginning of a "listint_t" linked list. If the operation fails, it returns NULL; otherwise, it returns the address of the new element.

Add node at the end
The function "3-add_nodeint_end.c" adds a new node to the end of a "listint_t" linked list. If the operation fails, it returns NULL; otherwise, it returns the address of the new element.

Free list
The function "4-free_listint.c" frees the memory occupied by a "listint_t" linked list.

Free
The function "5-free_listint2.c" frees the memory occupied by a "listint_t" linked list and sets its head pointer to NULL.

Pop
The function "6-pop_listint.c" removes the head node of a "listint_t" linked list and returns its data. If the list is empty, it returns 0.

Get node at index
The function "7-get_nodeint.c" locates a node at a given index in a "listint_t" linked list and returns its address. If the node does not exist, it returns NULL.

Sum list
The function "8-sum_listint.c" returns the sum of all the data in a "listint_t" linked list. If the list is empty, it returns 0.

Insert
The function "9-insert_nodeint.c" inserts a new node to a "listint_t" linked list at a specified position. If it cannot add the new node at the given index, or the operation fails, it returns NULL; otherwise, it returns the address of the new node.

Delete at index
The function "10-delete_nodeint.c" deletes the node at a specified index in a "listint_t" linked list. If it succeeds, it returns 1; if it fails, it returns -1.

Reverse list
The function "100-reverse_listint.c" reverses a "listint_t" linked list using only one loop and two variables. It returns a pointer to the first node of the reversed list.

Print (safe version)
The function "101-print_listint_safe.c" prints a "listint_t" linked list safely, meaning it can handle lists that contain loops, and returns the number of nodes in the list.

Free (safe version)
The function "102-free_listint_safe.c" frees a "listint_t" linked list safely, meaning it can handle lists that contain loops. It returns the size of the list that was freed and sets the head pointer to NULL.

Find the loop
The function "103-find_loop.c" locates the loop contained in a "listint_t" linked list using only two variables. If it cannot find a loop,
