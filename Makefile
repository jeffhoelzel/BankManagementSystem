# default C compiler
CC = gcc

default: all

# compile whole program
all: main

# main program as executeable
main: BankManagementMain.o CreateAccount_lib.o AccountInteraction_lib.o Login_lib.o
	echo "Linking and producing main"
	$(CC) BankManagementMain.o CreateAccount_lib.o AccountInteraction_lib.o Login_lib.o -o main

# compile main and libs
BankManagementMain.o: BankManagementMain.c
	$(CC) -c BankManagementMain.c

CreateAccount_lib.o: CreateAccount_lib.c
	$(CC) -c CreateAccount_lib.c

AccountInteraction_lib.o: AccountInteraction_lib.c
	$(CC) -c AccountInteraction_lib.c

Login_lib.o: Login_lib.c
	$(CC) -c Login_lib.c

# clean directory
clean:
	echo "Cleaning directory of object and executeable files"
	rm *.o main
