# default C compiler
CC = gcc

default: all

# compile whole program
all: main

# main program as executeable
main: main.o dtypes.o CreateAccount_lib.o AccountInteraction_lib.o Login_lib.o
	echo "Linking and producing main"
	$(CC) -Wall main.o dtypes.o CreateAccount_lib.o AccountInteraction_lib.o Login_lib.o -o main

# compile main and libs
main.o: main.c
	$(CC) -Wall -c main.c

dtypes.o: dtypes.c
	$(CC) -Wall -c dtypes.c

CreateAccount_lib.o: CreateAccount_lib.c
	$(CC) -Wall -c CreateAccount_lib.c

AccountInteraction_lib.o: AccountInteraction_lib.c
	$(CC) -Wall -c AccountInteraction_lib.c

Login_lib.o: Login_lib.c
	$(CC) -Wall -c Login_lib.c

# clean directory
clean:
	echo "Cleaning directory of object and executeable files"
	rm -f *.o main.exe
