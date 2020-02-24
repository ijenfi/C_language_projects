/*
 ============================================================================
 Description : Function is supposed to implement sieve of Eratosthenes. Pseudocode:

		Input: an integer n > 1.

		Let A be an array of Boolean values, indexed by integers 2 to n,
		initially all set to true.
 
		for i = 2, 3, 4, ..., not exceeding âˆšn:
		 if A[i] is true:
			for j = i^2, i^2+i, i^2+2i, i^2+3i, ..., not exceeding n:
				A[j] := false.
 ============================================================================
	
					*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include"MaxPrimeFactor.h"

void *findMaxPrimeFactor(int number) { 
	int *arrayOfBoolean = NULL;
	int maxFactor = 0;
	arrayOfBoolean = malloc(number * sizeof(*arrayOfBoolean)); /* Length of the boolean array is supposed to be the same as the value of each number from the array of random numbers(every time it is called)*/
	if (arrayOfBoolean == NULL) {
		printf("ERROR: memory allocation did not succeed\n");
	} else {
		int i = 2, j = i*i; // loop counters
		for (i = 2; i < number; ++i) { // initializing the array elements to true
			arrayOfBoolean[i] = 1;
		}

		for (i = 2; i*i < number; i++) { // Implementation of the Sieve
			if (arrayOfBoolean[i]) {
				for (j = i * i; j < number; j += i) {
					arrayOfBoolean[j] = 0;
				}
			}
		}
		
		//Finding the largest prime factor   
		//int maxFactor = 0;
		for (i = 2; i < number; ++i) { 
			if ((*(arrayOfBoolean + i)== 1) && (number%i == 0) && (maxFactor < i)) {
				maxFactor = i;
				} 
			}
			if(maxFactor == 0) { //if the number is prime, then it is the maxFactor 
						maxFactor = number; 
					}
			
			if(number == 1) {
						printf("nothing, because 1 is not a prime number\n");
				} else {
					printf("%d\n", maxFactor);
			}
	}
	
	free(arrayOfBoolean);	
}