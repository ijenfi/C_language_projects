/*
 ============================================================================
 Description : Main file, where we read the length of the array 
	       as the command line argument. It is ensured that the user
	       can input only integers without letter or spaces.
	       Also in the main function we call other functions to be executed.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include"ArrayOfRandom.h"
#include"MaxPrimeFactor.h"

int main(int argc, char* argv[]) {
	
	int arrayLength = 0;
	if (argc == 2) { // checking if the number of arguments is adequate
			for (int j = 0; j <= argv[1][j]; ++j) { // checking every character
				if (argv[1][j] >= 48 && argv[1][j] <= 57) {   // ASCII codes from 48 to 57 represent characters from '0' to '9' respectively 
					arrayLength = atoi(argv[1]); // atoi function converts the command line arguments into integers. 
				} else {
					printf("The input should be positive integer value.\n"); // once the invalid character is found, the error message is printed
					exit(0); // exiting the program
					}
				
			}
	} else {
		printf("Please input exactly 1 value\n"); // if the user tries to put values with spaces, print error message
		exit(0);  // exit the program
	}
	int *array = arrayOfRandom(arrayLength);// calling of the function that creates the array of random integers

	for (int i = 0; i < arrayLength; i++)
	{
		printf("Largest prime factor of %d is ", *(array + i));
		findMaxPrimeFactor(*(array + i));
	}
		
	return 0;
}