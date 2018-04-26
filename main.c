/* 
 * File:   main.c
 * Author: a.skiadopoulos
 *
 * Created on 29 Μαρτίου 2018, 9:44 πμ
 */

/* In this algorithmic program an integer array of 5 elements is
 * initialized by the user and then the program finds the maximum number
 * and the average of all the numbers stored as elements in the array. */

#include <stdio.h>

int main() {
    
    int myArr[5], i, length, max = 0;
    float avg, sum = 0;
    
    
    /* sizeof() operator: Returns the size of its operand (e.g. a variable). 
     * When operand is a data type (such as int, float, char… etc) it
     * simply returns the amount of memory allocated to that data type. */
    
    length = sizeof(myArr) / sizeof(int);
    
    for(i=0; i<length; i++)
    {
        printf("Give number for element [%d]: ", i);
        scanf("%d", &myArr[i]);
        sum += myArr[i];
        
        if (myArr[i] > max)
        
            max = myArr[i];      
    }
    avg = sum/length;
    
    printf("\nMax number: %d\n", max);
    printf("Average number: %.2f\n\n", avg);
    
    return 0;
}

