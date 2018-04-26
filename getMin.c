 
/* This simple function returns the smallest number from an array. It takes
 * three parameters, one for the name and one for the size of the array as
 * well as one (pointer) for the position of index which contains the smallest
 * number at the time.. */

/* library import */
#include <stdio.h>

/* function returning the minimum from an existing array */
int getMin(int arr[], int size, int *index)
{
   /* local variable(s) definition */
   int min = 0;

   /* seeking through all the elements in the array */
   for(int i=0; i<size; i++)
   { 
       if(arr[i] < min || min == 0)
       {
           min = arr[i];//smallest number at the time
           *index = i;//position of index containing the smallest number at the time
       }
   }
   return (min);
}
