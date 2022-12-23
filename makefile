.PHONY: all, clean,run
all: Laba
clean:
	rm Laba *.o
run: Laba
	./Laba
main.o: main.c
	gcc -c main.c
funcs.o: funcs.c
	gcc -c funcs.c
Laba: main.o funcs.o
	gcc main.o funcs.o -o Laba
