/**
 * helpers.c
 *
 * Computer Science 50
 * Problem Set 3
 *
 * Helper functions for Problem Set 3.
 */
       
#include <cs50.h>

#include "helpers.h"

/**
 * Returns true if value is in array of n values, else false.
 */
bool search(int value, int values[], int n)
{
    // TODO: implement a searching algorithm
   
   /*
    // linear search
    for(int i = 0; i < n; i++){
        if(values[i] == value){
            return true;
        }
    }
    return false;
    */
    
    
}

/**
 * Sorts array of n values.
 */
void sort(int values[], int n)
{
    // TODO: implement an O(n^2) sorting algorithm
    int i,j;
    for(i = 0; i < n-1;i++){
        for(j = 0; j < n-i-1;j++){
            if(values[j] > values[j + 1]){
                swap(&values[j],&values[j + 1]);
            }
        }
    }
}

/**
 * Swap function for sorting array of n values.
 */
 void swap(int *x,int *y){
     int temp = *x;
     *x = *y;
     *y = temp;
 }