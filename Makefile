cc=gcc main.o insert.o bubble.o -o main


all:main

main:main.o insert.o bubble.o 
	
	gcc main.o insert.o bubble.o -o main


main.o:main.c
	gcc -c main.c

insert.o:insertion.c
	gcc -c insertion.c -o insert.o

bubble.o:bubble_sort.c
	gcc -c bubble_sort.c -o bubble.o


rm:
	rm -rf *.o 
