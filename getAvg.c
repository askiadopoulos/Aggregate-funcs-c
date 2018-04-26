 
/* This simple function returns the average from all numbers in the array.
 * It takes two parameters, one for the name and one for the size of the array. */

/* library import */
#include <stdio.h>

/* function returning the average from an existing array */
float getAvg(int arr[], int size)
{
   /* local variable(s) definition */
   float avg, sum = 0;

   /* seeking through all the elements in the array */
   for(int i=0; i<size; i++)
   {
       sum += arr[i];//holds the total sum of all numbers
   }
   avg = (sum/size);//holds the calculation as the average   
   return (avg);
}
