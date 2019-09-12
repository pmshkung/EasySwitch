.PHONY: all main clean

INCPATH = -I./ -I./utils -I./switchs -I../utils -I../switchs

CFLAGS += -DSWITCH_FOR_B
CFLAGS += $(INCPATH)

main: main.o switchs.o
	gcc main.o switchs.o -o main

main.o: main.c
	gcc -c $(CFLAGS) main.c -o main.o

switchs.o: switchs/switchs.c
	gcc -c $(CFLAGS) switchs/switchs.c -o switchs.o

clean:
	rm -rf *.o *.exe
