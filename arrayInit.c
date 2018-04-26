 
/* This simple function initialize an array with elements through data entry.
 * It takes two parameters, one for the name and one (pointer) for the size
 * of the array. */

/* library import */
#include <stdio.h>

/* function initializing an array */
int arrayInit(int arr[], int *size)
{
    printf("\nEnter Array Size: ");
    scanf("%d", &*size);
    printf("\n");
    
    /* runs through all the elements in the array */
    for(int i=0; i<*size; i++)
   {
       printf("Array Index [%d]. Enter a number to register: ", i);
       scanf("%d", &arr[i]);
   }    
    return (*size);
}
