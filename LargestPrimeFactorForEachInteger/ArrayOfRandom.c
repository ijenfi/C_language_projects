/*
 ============================================================================
 Description : Function is supposed to create an array of random numbers in the range of 1000000.
	It takes arrayLength as a parameter from the main function
 ============================================================================
	
					*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include"ArrayOfRandom.h"

int *arrayOfRandom(int arrayLength) {
	srand(time(NULL)); // seed generator for pseudo-random numbers
	int *array = NULL;
	array = (int*)malloc(arrayLength * sizeof(*array)); /* we allocate memory equal to the size of the array
													 multiplied with the size of the integer, which is 4 */
	if (array == NULL) {
		printf("ERROR: memory allocation did not succeed\n");
	} else {
		int i = 0; // loop counter
		int range = 1000000;
		for (i = 0; i < arrayLength; i++) {
			*(array + i) = rand() % range + 1; // range of random integers from 1 to 1000000
		}

	}
	return array;
	free(array); // Freeing the reserved memory for the array	
}