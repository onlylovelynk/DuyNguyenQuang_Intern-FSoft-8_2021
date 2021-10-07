/*****************************************************************************************
 *include
 *****************************************************************************************/

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>
#include <stdint.h>
#include "function.h"


/*****************************************************************************************
 *Define
 *****************************************************************************************/

#define MAX 100


/*****************************************************************************************
 *Global variable
 *****************************************************************************************/
uint8_t g_size = 0;


/*****************************************************************************************
 *code
 *****************************************************************************************/

/* initialize data for an array whose length is n */
void createArr(uint8_t* arr, uint8_t n)
{
    if (n >= MAX) printf("\n n must be smaller than %d", MAX);

    for (uint8_t i = 0;i < n;i++)
    {
        printf("enter value for arr[%d]: ",i);
        scanf("%d", &arr[i]);
        g_size++;
    }
}

/* set all data in array equal NULL */
uint8_t* clearData(uint8_t* arr)
{
    for (int i = 0; i < MAX; i++)
    {
        arr[i] = NULL;
    }
    return arr;
}

/* print all current values of the array */
void printArr(uint8_t* arr)
{
    for (uint8_t i = 0;i < g_size;i++)
    {
        printf("\t%d", arr[i]);
    }
}

/* add a values to the array */
void addElement(uint8_t* arr)
{
    if (g_size >= MAX) ("\n the array is full! ");
    printf("\n Enter value for the new element ");
    scanf("%d", &arr[g_size]);
    g_size++;
}

/* delete the kth-element in the array */
void Delete_kth_element(uint8_t* arr, uint8_t k)
{
    if (k >= MAX) printf("\n k must be smaller than %d ", MAX);
    if (arr[k - 1] == NULL)
    {
        printf("there is no value in kth element!");
    }

    arr[k - 1] = NULL;
}

/* swap 2 values store in the 2 pointers var1, var2 */
void Swap(uint8_t* var1, uint8_t* var2)
{
    uint8_t temp = *var1;
    *var1 = *var2;
    *var2 = temp;
}

/* arrange the data in array in ascending direction */
void ascending(uint8_t* arr)
{
    for (uint8_t i = 0; i < g_size - 1;i++)
    {
        for (uint8_t j = i + 1;j < g_size;j++)
        {
            if (arr[i] > arr[j]) Swap(&arr[i], &arr[j]);
        }
    }
}

/* arrange the data in array in descending direction */
void descending(uint8_t arr[])
{
    for (uint8_t i = 0; i < g_size - 1;i++)
    {
        for (uint8_t j = i + 1;j < g_size;j++)
        {
            if (arr[i] < arr[j])   Swap(&arr[i], &arr[j]);
        }
    }
}

/* search value x in the array */
bool search(uint8_t* arr)
{
    uint8_t x;
    uint8_t i = 0;
    bool retval = false;
    
    printf("\n Enter the value to search: ");
    scanf("%d", &x);
    
    while (i < g_size)
    {
        if (arr[i] == x)
        {
            retval = true;
        }
        ++i;
    }
   
    return retval;
}

/* print the max value in the array */
void Print_max_value(uint8_t* arr)
{
    ascending(arr);
    printf("\n The max value of the array: %3d", arr[g_size - 1]);
}

/* print the min value in the array */
void Print_min_value(uint8_t* arr)
{
    descending(arr);
    printf("\n The min value of the array:%3d", arr[g_size - 1]);
}

