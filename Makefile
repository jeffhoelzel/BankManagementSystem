CC = gcc

BankManagementMain.exe: BankManagementMain.o CreateAccount_lib.o AccountInteraction_lib.o Login_lib.o
	$(CC) BankManagementMain.o CreateAccount_lib.o AccountInteraction_lib.o Login_lib.o -o BankManagementMain.exe

BankManagementMain.o: BankManagementMain.c
	$(CC) -c BankManagementMain.c

CreateAccount_lib.o: CreateAccount_lib.c
	$(CC) -c CreateAccount_lib.c

AccountInteraction_lib.o: AccountInteraction_lib.c
	$(CC) -c AccountInteraction_lib.c

Login_lib.o: Login_lib.c
	$(CC) -c Login_lib.c