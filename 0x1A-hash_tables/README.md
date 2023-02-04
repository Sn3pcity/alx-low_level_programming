0x1A. C - Hash tables

C

Algorithm

Data structure

 By: Julien Barbier

 Weight: 1

 Project will start Feb 2, 2023 6:00 AM, must end by Feb 4, 2023 6:00 AM

 Checker was released at Feb 2, 2023 6:00 PM

 An auto review will be launched at the deadline

Resources

Read or watch:



What is a HashTable Data Structure - Introduction to Hash Tables , Part 0

Hash function

Hash table

All about hash tables

why hash tables and not arrays

Learning Objectives

At the end of this project, you are expected to be able to explain to anyone, without the help of Google:



General

What is a hash function

What makes a good hash function

What is a hash table, how do they work and how to use them

What is a collision and what are the main ways of dealing with collisions in the context of a hash table

What are the advantages and drawbacks of using hash tables

What are the most common use cases of hash tables

Copyright - Plagiarism

You are tasked to come up with solutions for the tasks below yourself to meet with the above learning objectives.

You will not be able to meet the objectives of this or any following project by copying and pasting someone else’s work.

You are not allowed to publish any content of this project.

Any form of plagiarism is strictly forbidden and will result in removal from the program.

Requirements

General

Allowed editors: vi, vim, emacs

All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89

All your files should end with a new line

A README.md file, at the root of the folder of the project is mandatory

Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl

You are not allowed to use global variables

No more than 5 functions per file

You are allowed to use the C standard library

The prototypes of all your functions should be included in your header file called hash_tables.h

Don’t forget to push your header file

All your header files should be include guarded

More Info

Data Structures

Please use these data structures for this project:



/**

 * struct hash_node_s - Node of a hash table

 *

 * @key: The key, string

 * The key is unique in the HashTable

 * @value: The value corresponding to a key

 * @next: A pointer to the next node of the List

 */

typedef struct hash_node_s

{

     char *key;

     char *value;

     struct hash_node_s *next;

} hash_node_t;



/**

 * struct hash_table_s - Hash table data structure

 *

 * @size: The size of the array

 * @array: An array of size @size

 * Each cell of this array is a pointer to the first node of a linked list,

 * because we want our HashTable to use a Chaining collision handling

 */

typedef struct hash_table_s

{

     unsigned long int size;

     hash_node_t **array;

} hash_table_t;

Tests

We strongly encourage you to work all together on a set of tests



Python Dictionaries

Python dictionaries are implemented using hash tables. When you will be done with this project, you will be able to better understand the power and simplicity of Python dictionaries. So much is actually happening when you type d = {a: 1, b: 2}, but everything looks so simple for the user. Python doesn’t use the exact same implementation than the one you will work on today though. If you are curious on how it works under the hood, here is a good blog post about how dictionaries are implemented in Python 2.7 (not mandatory).



Note that all dictionaries are not implemented using hash tables and there is a difference between a dictionary and a hash table. Read more here (not mandatory).
Write a function that creates a hash table.



Prototype: hash_table_t *hash_table_create(unsigned long int size);

where size is the size of the array

Returns a pointer to the newly created hash table

If something went wrong, your function should return NULL

julien@ubuntu:~/0x1A. Hash tables$ cat 0-main.c 

#include <stdlib.h>

#include <string.h>

#include <stdio.h>

#include hash_tables.h



/**

 * main - check the code for

 *

 * Return: Always EXIT_SUCCESS.

 */

int main(void)

{

    hash_table_t *ht;



    ht = hash_table_create(1024);

    printf(%pn, (void *)ht);

    return (EXIT_SUCCESS);

}

julien@ubuntu:~/0x1A. Hash tables$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-hash_table_create.c -o a

julien@ubuntu:~/0x1A. Hash tables$ ./a 

0x238a010

julien@ubuntu:~/0x1A. Hash tables$ valgrind ./a

==7602== Memcheck, a memory error detector

==7602== Copyright (C) 2002-2013, and GNU GPL'd, by Julian Seward et al.

==7602== Using Valgrind-3.10.1 and LibVEX; rerun with -h for copyright info

==7602== Command: ./a

==7602== 

0x51fc040

==7602== 

==7602== HEAP SUMMARY:

==7602==     in use at exit: 8,208 bytes in 2 blocks

==7602==   total heap usage: 2 allocs, 0 frees, 8,208 bytes allocated

==7602== 

==7602== LEAK SUMMARY:

==7602==    definitely lost: 16 bytes in 1 blocks

==7602==    indirectly lost: 8,192 bytes in 1 blocks

==7602==      possibly lost: 0 bytes in 0 blocks

==7602==    still reachable: 0 bytes in 0 blocks

==7602==         suppressed: 0 bytes in 0 blocks

==7602== Rerun with --leak-check=full to see details of leaked memory

==7602== 

==7602== For counts of detected and suppressed errors, rerun with: -v

==7602== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

julien@ubuntu:~/0x1A. Hash tables$
In PHP, hash tables are ordered. Wait… WAT? How is this even possible?







Before you continue, please take a moment to think about it: how you would implement it if you were asked to during an interview or a job. What data structures would you use? How would it work?



For this task, please:



Read PHP Internals Book: HashTable

Use the same hash function

Use these data structures:

/**

 * struct shash_node_s - Node of a sorted hash table

 *

 * @key: The key, string

 * The key is unique in the HashTable

 * @value: The value corresponding to a key

 * @next: A pointer to the next node of the List

 * @sprev: A pointer to the previous element of the sorted linked list

 * @snext: A pointer to the next element of the sorted linked list

 */

typedef struct shash_node_s

{

     char *key;

     char *value;

     struct shash_node_s *next;

     struct shash_node_s *sprev;

     struct shash_node_s *snext;

} shash_node_t;



/**

 * struct shash_table_s - Sorted hash table data structure

 *

 * @size: The size of the array

 * @array: An array of size @size

 * Each cell of this array is a pointer to the first node of a linked list,

 * because we want our HashTable to use a Chaining collision handling

 * @shead: A pointer to the first element of the sorted linked list

 * @stail: A pointer to the last element of the sorted linked list

 */

typedef struct shash_table_s

{

     unsigned long int size;

     shash_node_t **array;

     shash_node_t *shead;

     shash_node_t *stail;

} shash_table_t;

Rewrite the previous functions using these data structures:



shash_table_t *shash_table_create(unsigned long int size);

int shash_table_set(shash_table_t *ht, const char *key, const char *value);

The key/value pair should be inserted in the sorted list at the right place

Note that here we do not want to do exactly like PHP: we want to create a sorted linked list, by key (sorted on ASCII value), that we can print by traversing it. See example.

char *shash_table_get(const shash_table_t *ht, const char *key);

void shash_table_print(const shash_table_t *ht);

Should print the hash table using the sorted linked list

void shash_table_print_rev(const shash_table_t *ht);

Should print the hash tables key/value pairs in reverse order using the sorted linked list

void shash_table_delete(shash_table_t *ht);

You are allowed to have more than 5 functions in your file

julien@ubuntu:~/0x1A. Hash tables$ cat 100-main.c 

#include <stdlib.h>

#include <string.h>

#include <stdio.h>

#include "hash_tables.h"



/**

 * main - check the code

 *

 * Return: Always EXIT_SUCCESS.

 */

int main(void)

{

    shash_table_t *ht;



    ht = shash_table_create(1024);

    shash_table_set(ht, "y", "0");

    shash_table_print(ht);

    shash_table_set(ht, "j", "1");

    shash_table_print(ht);

    shash_table_set(ht, "c", "2");

    shash_table_print(ht);

    shash_table_set(ht, "b", "3");

    shash_table_print(ht);

    shash_table_set(ht, "z", "4");

    shash_table_print(ht);

    shash_table_set(ht, "n", "5");

    shash_table_print(ht);

    shash_table_set(ht, "a", "6");

    shash_table_print(ht);

    shash_table_set(ht, "m", "7");

    shash_table_print(ht);

    shash_table_print_rev(ht);

        shash_table_delete(ht);

    return (EXIT_SUCCESS);

}

julien@ubuntu:~/0x1A. Hash tables$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 100-main.c 100-sorted_hash_table.c 1-djb2.c 2-key_index.c -o sht  

julien@ubuntu:~/0x1A. Hash tables$ ./sht 

{y: 0}

{j: 1, y: 0}

{c: 2, j: 1, y: 0}

{b: 3, c: 2, j: 1, y: 0}

{b: 3, c: 2, j: 1, y: 0, z: 4}

{b: 3, c: 2, j: 1, n: 5, y: 0, z: 4}

{a: 6, b: 3, c: 2, j: 1, n: 5, y: 0, z: 4}

{a: 6, b: 3, c: 2, j: 1, m: 7, n: 5, y: 0, z: 4}

{z: 4, y: 0, n: 5, m: 7, j: 1, c: 2, b: 3, a: 6}

julien@ubuntu:~/0x1A. Hash tables$
