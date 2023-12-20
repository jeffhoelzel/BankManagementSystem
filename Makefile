srcDir := src
libDir := lib

CC = gcc

BankManagementMain: BankManagementMain.o CreateAccount_lib.o AccountInteraction_lib.o Login_lib.o
	$(CC) BankManagementMain.o CreateAccount_lib.o AccountInteraction_lib.o Login_lib.o -o BankManagementMain

BankManagementMain.o: BankManagementMain.c
	$(CC) -c -I src/BankManagementMain.c

CreateAccount_lib.o: CreateAccount_lib.c
	$(CC) -c -I src/CreateAccount_lib.c

AccountInteraction_lib.o: AccountInteraction_lib.c
	$(CC) -c -I src/AccountInteraction_lib.c

Login_lib.o: Login_lib.c
	$(CC) -c -I src/Login_lib.c
