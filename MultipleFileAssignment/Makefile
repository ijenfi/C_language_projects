all: Assignment1.o Plane.o
	gcc -Wall -Wextra -std=c11 -o Assignment1 Assignment1.o Plane.o

Assignment1.o: Plane.c Plane.h
	gcc -Wall -Wextra -std=c11 -c Assignment1.c

Plane.o: Plane.c Plane.h
	gcc -Wall -Wextra -std=c11 -c Plane.c
clean:
	$(RM) *.o Assignment1
