ABC.exe: main.o big.o fact.o pal.o rev.o
        gcc -o ABC.exe main.o big.o fact.o pal.o
main.o : main.c
        gcc -c main.c
big.o : big.c
        gcc -c big.c
fact.o : fact.c
        gcc -c fact.c
pal.o : pal.c
        gcc -c pal.c
rev.o : rev.c
        gcc -c rev.c
