/*****************************************************************************************
 *include
 *****************************************************************************************/
#include <stdio.h>
#include <string.h>
#include <stdint.h>
#include "function.h"
#include <stdbool.h>

/*****************************************************************************************
 *Define
 *****************************************************************************************/
#define MAX 1000


/*****************************************************************************************
 *Global variable
 *****************************************************************************************/



int main()
{
    uint8_t charactor = NULL;
    uint8_t arr[MAX];
    
    printf(" Program: manage the array of integers ");
    printf("\n Instruction to use the functions of the program:");
    printf("\n %10d Enter 'c' to create data for an array. ", 1);
    printf("\n %10d Enter 'p' to print all the elements of the array. ", 2);
    printf("\n %10d Enter 'i' to add a element to the array. ", 3);
    printf("\n %10d Enter 'd' to delete kth-element. ", 4);
    printf("\n %10d Enter 's' to arrange all the elements in ascending direction. ", 5);
    printf("\n %10d Enter 'x' dto arrange all the elements in descending direction. ", 6);
    printf("\n %10d Enter 't' to find whether value x already exist in the array ", 7);
    printf(" (x is entered from keyboard)?");
    printf("\n %10d Enter 'a' to print the max value in the array.", 8);
    printf("\n %10d Enter 'w' to print the min value in the array.", 9);
    printf("\n %10d Enter 'e' to exist the program.", 10);

    while (1)
    {
        fflush(stdin);
        printf("\n Please enter a charactor to use the functions:");
        scanf("%c", &charactor);
        if ( charactor == 'c' )
        {
            int n;
            clearData(arr);
            printf("Enter the number of elements:");
            scanf("%d", &n);
            createArr(arr, n);
        }

        else if (charactor == 'p')
        {
            printArr(arr);
        }

        else if (charactor == 'i')
        {
            addElement(arr);
        }

        else if (charactor == 'd')
        {
            int k;
            printf("\n Enter the index k of the element to delete:");
            scanf_s("%d", &k);
            Delete_kth_element(arr, k);
        }

        else if (charactor == 's')
        {
            ascending(arr);
            printArr(arr);
        }

        else if (charactor == 'x')
        {
            descending(arr);
            printArr(arr);
        }

        else if (charactor == 't')
        {
            if (search(arr) == true)
            {
                printf("\n The value already exist in the array.");
            }
            else printf("\n The value does not exist in the array.");
        }

        else if (charactor == 'a')
        {
            Print_max_value(arr);
        }

        else if (charactor == 'w')
        {
            Print_min_value(arr);
        }
    }
    return 0;
}
