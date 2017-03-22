main : 1.o 2.o 3.o 4.o
	gcc 1.o 2.o 3.o 4.o -o main
4.o : 4.c
	gcc -c 4.c -o 4.o
3.o : 3.c
	gcc -c 3.c -o 3.o
2.o : 2.c
	gcc -c 2.c -o 2.o
1.o : 1.c
	gcc -c 1.c -o 1.o

clean : 
	rm *.o
