/*
Descripton:	Functions to add flights
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "Plane.h"

void initialize(){

	for(int i = 0; i < SIZE; i++){
		strcpy(planes[i].name , "NULL");
		planes[i].seats = -1;
		planes[i].wingSpan = -1;
	}
}

void input(){
	
	int numberOfPlanes;
	printf("How many planes you want to add?");
	scanf("%d", &numberOfPlanes);
	/*printf("Number of planes asked is %d\n", numberOfPlanes);*/
	getchar();

	for(int i = 0; i < numberOfPlanes; i++){
					
			printf("Name:");
			getchar();			
			fgets(planes[i].name,30,stdin);

			printf("Seats:");
			scanf("%d", &planes[i].seats);

			printf("Wing Span:");				
			scanf("%f", &planes[i].wingSpan);
			printf("\n");
			if(planes[i].seats==-1){
			
			printf("Name %s",planes[i].name);
			printf("Name %d",planes[i].seats);
			printf("Name %lf\n",planes[i].wingSpan);
			}
		}
}
void printFunction(){
	for(int i=0; i<SIZE; i++){
		
		printf("Name: %s\n",planes[i].name);
		printf("Seats: %d\n",planes[i].seats);
		printf("Wing span: %lf\n",planes[i].wingSpan);
		printf("\n");
		}
}