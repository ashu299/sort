

all:main

main:main.o insert.o bubble.o selection.o quick.o merge.o
	gcc main.o insert.o bubble.o selection.o quick.o  merge.o -o main

main.o:main.c
	gcc -c main.c

insert.o:insertion.c
	gcc -c insertion.c -o insert.o

bubble.o:bubble_sort.c
	gcc -c bubble_sort.c -o bubble.o

selection.o:selection.c
	
	gcc -c selection.c -o selection.o

quick.o:quick_sort.c
	gcc -c quick_sort.c -o quick.o

merge.o:
	gcc -c merge.c -o merge.o

rm:
	rm -rf *.o 
