 
/* This simple function returns the total sum of all numbers in an array plus
 * the counting of them. It takes two parameters, one for the name and one for
 * the size of the array. */

/* library import */
#include <stdio.h>

/* function returning the percentage from limit */
int getCountSum(int arr[], int size)
{
   /* local variable(s) definition */
   int sum = 0;
   
   /* seeking through all the elements in the array */
   for(int i=0; i<size; i++)
   {
       sum += arr[i];
   }
   return (sum);
}
