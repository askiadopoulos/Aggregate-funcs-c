
/* This simple function returns the percentage from all numbers that exceed the 
 * percentage limit in an array. It takes four parameters, one for the name
 * and one for the size of the array as well as one for the percentage limit
 * and one (pointer) for counting the numbers that exceed this percentage limit */

/* library import */
#include <stdio.h>

/* function returning the percentage from limit */
float getPct(int arr[], int size, float percent, int *counter)
{
   /* local variable(s) definition */
   float pct;
   int count = 0;
   
   /* seeking through all the elements in the array */
   for(int i=0; i<size; i++)
   {
       if(arr[i] > percent)
           count++;
   }
   
   
   /* Type Casting is used to register the result of the division between two
    * integers (count & size) in float data type variable pct */
   
   pct = (float) count/size * 100;//holds the calculation as the percentage
   *counter = count;//holds the numbers that exceed the percentage limit
   
   return (pct);
}
