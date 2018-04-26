 
/* This simple function returns all even numbers from an array. It takes
 * two parameters, one for the name and one for the size of the array. */

/* library import */
#include <stdio.h>

/* function returning the even numbers from an existing array */
int getEven(int arr[], int size)
{
   /* local variable(s) definition */
   int even = 0;

   /* seeking through all the elements in the array */
   for(int i=0; i<size; i++)
   {
       if((arr[i]%2) == 0)
           even++;
   }
   return (even);
}
