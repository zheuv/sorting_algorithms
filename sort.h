#ifndef SORT_H
#define SORT_H

#include <stdlib.h>
#include <stdio.h>

/**
 * struct information - Holds information about array sorting
 * @myBoolean: Indicates if the array is sorted
 * @myInteger: Position where sorting needs to resume
 */
struct information
{
    int myBoolean;
    size_t myInteger;
};

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


/**
 * print_array - Prints an array of integers
 * @array: The array to be printed
 * @size: Number of elements in @array
 */
void print_array(const int *array, size_t size);

/**
 * print_list - Prints a list of integers
 * @list: The list to be printed
 */
void print_list(const listint_t *list);

/**
 * is_array_sorted - Checks if an array is sorted
 * @array: The array to check
 * @size: Number of elements in @array
 * Return: A struct containing information about array sorting
 */
struct information is_array_sorted(int *array, size_t size);

/**
 * bubble_sort - Sorts an array using the bubble sort algorithm
 * @array: The array to be sorted
 * @size: Number of elements in @array
 */
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);

#endif /* SORT_H */

