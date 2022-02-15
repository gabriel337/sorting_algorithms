#ifndef SORT_H
#define SORT_H

#include <stddef.h>
#include <stdio.h>
/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
const int n;
struct listint_s *prev;
struct listint_s *next;
} listint_t;

/*prototypes given by intranet*/
void print_list(const listint_t *list);
void print_array(const int *array, size_t size);

/*task 0*/
void bubble_sort(int *array, size_t size);
void swap(int *first_element, int *second_element);

/*task 1*/
void insertion_sort_list(listint_t **list);
listint_t *create_listint(const int *array, size_t size);

void selection_sort(int *array, size_t size);


void recursion(int *array, int low, int high, size_t size);
int partition(int *array, int low, int high, size_t size);
void quick_sort(int *array, size_t size);

void shell_sort(int *array, size_t size);
#endif
