/*
Descripton:	Program's reads the input from the user, collects zeros and ones 
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void binaryOutput(unsigned char number);
void hexOutput(int number);

int main(int argc, char *argv[]) {
	
	int finalResult[50]; 
	int number = 0;
	int bitsNumber = 0; 
	int amountNumbers = 0;
	int numberSize = 8;
	for (int i = 1; i < argc; i++) {

		int j = 0;
		while (argv[i][j])
		{
			if (argv[i][j] == '0' || argv[i][j] == '1')
			{
				number = number * 2;

				if (argv[i][j] == '1')
				{
					number++;
				}

				bitsNumber++;

			}

			j++;

			if (bitsNumber == numberSize) 
			{
				finalResult[amountNumbers++] = number; //Saves decimal to the result array
				bitsNumber = 0;           
				number = 0;
			}
		}

	}

	if (bitsNumber > 0)
		finalResult[amountNumbers++] = number;

	for (int i = 0; i < amountNumbers; i++)
	{
		printf("Binary:\t\t");
		binaryOutput(finalResult[i]);
		printf("\nDecimal:\t%d", finalResult[i]);
		printf("\nHex:\t\t");
		hexOutput(finalResult[i]);
		printf("\n\n");
	}
	return 0;
}

void binaryOutput(unsigned char number)
{
	unsigned char array[9] = { "00000000" }; 
	for (int i = 7; i >= 0; i--)
	{
		array[i] = (number % 2) + '0';
		number = number / 2;
	}
	printf("%s", array);
}


void hexOutput(int number)
{
	const char hexDigit[16] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F' };
	printf("%c", hexDigit[number / 16]);
	printf("%c", hexDigit[number % 16]);
}