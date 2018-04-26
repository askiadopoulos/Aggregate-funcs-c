/* 
 * File:   main.c
 * Author: a.skiadopoulos
 *
 * Created on 21 Φεβρουαρίου 2018, 11:58 πμ
 */

/* This is a simple algorithmic program that demonstrates how we can
 * implement mathematical functions for making aggregate operations
 * using a user-defined static data structure at runtime. */

/* library import */
#include <stdio.h>
#include <conio.h>

/* explicit function declaration */
int arrayInit(int arr[], int *size);
int getMax(int arr[], int size, int *index);
int getMin(int arr[], int size, int *index);
int getOdd(int arr[], int size);
int getEven(int arr[], int size);
int getCountSum(int arr[], int size);
float getAvg(int arr[], int size);
float getPct(int arr[], int size, float percent, int *counter);


/* main method */
int main() {
    
    /* local function argument(s) definition */
    int index, counter;
    
    int arrSize = 0, arrName[arrSize];
    
    /* call function(s) */
    int init = arrayInit(arrName, &arrSize);
    
    float pctDef = 0;//percentage limit
    printf("Enter Percentage Limit: ");
    scanf("%f", &pctDef);
    printf("\n\n");
    
    /* call function(s) */
    int max = getMax(arrName, arrSize, &index);
    printf("\nMax Number | Index Position: %d | [%d]\n", max, index);
    
    int min = getMin(arrName, arrSize, &index);
    printf("\nMin Number | Index Position: %d | [%d]\n", min, index);
    
    int odd = getOdd(arrName, arrSize);
    printf("\nOdd Number(s) Counting: %d\n", odd);
    
    int even = getEven(arrName, arrSize);
    printf("\nEven Number(s) Counting: %d\n", even);
    
    int countSum = getCountSum(arrName, arrSize);
    printf("\nTotal Sum | Counting: %d | %d\n", countSum, arrSize);
    
    float avg = getAvg(arrName, arrSize);
    printf("\nAverage: %.2f\n", avg);
    
    
    /* Two ways for printing the percentage symbol (%):
     * - use the percentage symbol twice inside a printf() statement (%%)
     * - use the format specifier (%c) together with the percentage symbol
     *   ASCII code (37) inside a printf() statement */
    
    float pct = getPct(arrName, arrSize, pctDef, &counter);
    printf("\nPercentage | Counting of numbers Higher than [%.f%%]: %.2f%c | %d\n", pctDef, pct, 37, counter);
    printf("\n\n");
    
    
    /* Function getch() is used to read/get a single character from the keyboard.
     * It does not echo to the screen or use any buffer, so the entered character
     * is immediately returned without waiting for the enter key. */
    
    char s;
    do
    {
        printf("\nPress [ESC] key to terminate process...");
        s = getch();
    }while(s != 27);
    
    printf("\n");
    return 0;
}
