TARGET=a.out

a.out : main.o 21400481.o 21300039.o
	gcc -o a.out main.o 21400481.o 21300039.o

main.o : 21400481.h 21300039.h main.c
	gcc -c -o main.o main.c

21400481.o : 21400481.h 21400481.c
	gcc -c -o 21400481.o 21400481.c

21300039.o : 21300039.h 21300039.c
	gcc -c -o 21300039.o 21300039.c
clean :
	rm -f *.o
	rm -f $(TARGET)
