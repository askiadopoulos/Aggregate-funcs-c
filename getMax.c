 
/* This simple function returns the greatest number from an array. It takes
 * three parameters, one for the name and one for the size of the array as
 * well as one (pointer) for the position of index which contains the greatest
 * number at the time.. */

/* library import */
#include <stdio.h>

/* function returning the maximum from an existing array */
int getMax(int arr[], int size, int *index)
{
   /* local variable(s) definition */
   int max = 0;

   /* seeking through all the elements in the array */
   for(int i=0; i<size; i++)
   {
       if(arr[i] > max)
       {
           max = arr[i];//greatest number at the time
           *index = i;//position of index containing the greatest number at the time
       }
   }
   return (max);
}
