/*
Description:   First function: Returns a random number (use time as seed) on range [0 - 1000]
			   Second function: Returns the sum of odd numbers between 0 and the random number you just generated
			   Third function: Takes the sum you just counted and checks if it is a number in Tetranacci sequence
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int randomNumber();
int sumOfOdd(int randomNum);
void isTetranacci(int sum);

int main(){
	
	int random = randomNumber();
  	
	printf("Random number: %d\n", random);

	int sum = sumOfOdd(random);
	
	printf("Sum of odd numbers:%d\n", sum);

	isTetranacci(sum);

	return 0;
}

int randomNumber()
{	
	srand(time(NULL));
	int randomNumber = rand() % 1001;

	return  randomNumber;

}

int sumOfOdd(int randomNum)
{	
	int sumOfoddNumber = 0;
	for(int i = 1; i < randomNum; i = i+2)
	{
		sumOfoddNumber = sumOfoddNumber + i;
	}
	
	return sumOfoddNumber;
}

void isTetranacci(int sum)
{	

	int tetraOne = 0, tetraTwo = 0, tetraThree = 0, tetraFour = 1, nextNumber = 1;
	while(1)
	{
		nextNumber = tetraOne + tetraTwo + tetraThree + tetraFour;
		if (nextNumber == sum || sum == 0)
		{	
			printf("Number %d is Tetrannaci\n", sum);
			break;
		}
		if (nextNumber > sum)
		{
			printf("Number %d is not Tetrannaci\n", sum);
			break;
		}
		tetraOne = tetraTwo;
		tetraTwo = tetraThree;
		tetraThree = tetraFour;
		tetraFour = nextNumber;
	}
	
}
	