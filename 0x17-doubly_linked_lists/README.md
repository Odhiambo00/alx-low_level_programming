## 0x17. C - Doubly linked lists

### This repository contains solutions for 0x17. C - Doubly linked lists project tasks

### General data structure used for the project tasks:
```c
/**
   * struct dlistint_s - doubly linked list
    * @n: integer
     * @prev: points to the previous node
      * @next: points to the next node
       *
        * Description: doubly linked list node structure
	 *
	  */
typedef struct dlistint_s
{
	    int n;
	        struct dlistint_s *prev;
		    struct dlistint_s *next;
} dlistint_t;
```
