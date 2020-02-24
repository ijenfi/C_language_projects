/*
Descripton:	.h file of plane.c / contain structure of plane
*/

#ifndef PLANE_H
#define PLANE_H
#define SIZE 5

struct plane{
	char name[30];
	int seats;
	float wingSpan;
};

struct plane planes[SIZE];
void initialize();
void input();
void printFunction();
#endif
