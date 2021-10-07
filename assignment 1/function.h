/*****************************************************************************************
 *include
 *****************************************************************************************/
#include <stdbool.h>


#ifndef _FUNCTION_H_
#define _FUNCTION_H_


/*****************************************************************************************
 *API application program interface
 *****************************************************************************************/
/* initialize data for an array whose length is n */
void createArr(uint8_t* a, uint8_t n); 

/* set all data in array equal NULL */
uint8_t* clearData(uint8_t* arr);

/* print all current values of the array */
void printArr(uint8_t* arr);

/* add a values to the array */
void addElement(uint8_t* arr);

/* delete the kth-element in the array */
void Delete_kth_element(uint8_t* arr, uint8_t k);

/* swap 2 values store in the 2 pointers var1, var2 */
void Swap(uint8_t* var1, uint8_t* var2);     

/* arrange the data in array in ascending direction */
void ascending(uint8_t* arr);          

/* arrange the data in array in descending direction */
void descending(uint8_t arr[]);			

/* search value x in the array */
bool search(uint8_t* arr);
  

/* print the max value in the array */
void Print_max_value(uint8_t* arr);    

/* print the min value in the array */
void Print_min_value(uint8_t* arr);

#endif /* _FUNCTION_H_ */

