// header files
#include "Login_lib.h"

// function implementations
void getUsername(char username[64])
{
	// declare/initialize variables
	bool flag;

	// prompt user to enter their username
		// function: printf
	printf("Enter your username: ");

	// read in user input
		// function: fgets
	fgets(username, (MAX_SIZE * sizeof(char)), stdin);

	// check if user pressed ENTER and assign result to username flag
		// function: checkIfEnter
		// if true, assign return string "N/A" to username
			// function: strcpy
	flag = checkIfEnter(username);
	if (flag)
	{
		strcpy(username, "N/A");
		return;
	}

	// loop while user has decided not to quit
	while (!flag)
	{
		// prompt user to enter their username
			// function: printf
		printf("Enter your username: ");

		// read in user input
			// function: fgets
		fgets(username, (MAX_SIZE * sizeof(char)), stdin);

		// check if user pressed ENTER without prompt
			// function: strcmp
			// if true, assign return string "N/A" to username
				// function: strcpy
			// othwerwise, break out of loop
		if (strcmp(username, "\n") == 0)
		{
			strcpy(username, "N/A");
			return;
		}
		else
			break;
	}
	// end loop 
}
void getPassword(char password[64])
{
	// initialize/declare variables
	char ch;
	int idx = 0;

	// prompt user to enter their password
		// function: printf
	printf("Enter your password: ");

	// loop while user is typing their password (until break is reached)
	while (true)
	{
		// get current character from the standard input stream (hide user typing)
			// function: getch
		ch = getch();

		// check if current character is ENTER or TAB
		if (ch == ENTER || ch == TAB)
		{
			// if true, assign password at index to null terminator and break
			//     out of the loop
			password[idx] = '\0';
			break;
		}
		else if (ch == BACKSPACE) // or if current character is a BACKSPACE
		{
			// if true, check if index > 0
			if (idx > 0)
			{
				// if true, decrement i and print backspace (to delete asterisk(s))
					// function: printf
				idx--;
				printf("\b \b");
			}
		}
		else // otherwise: 
		{
			// assign password at index i++ to current character, and print an asterisk
				// function: printf
			password[idx++] = ch;
			printf("* \b");
		}
		
	}
	// end loop

	// print new line
		// function: printf
	printf("\n");
}
// Account* authenticateAccount(Account* accountList, char* username, char* password)
// {
	// initialize/declare variables

	// loop while the current account pointer is not null
		// assign the head pointer to next pointer field in head

		// check if current account pointer's username is equal to username param
			// function: strcmp
			// if true, check if current account pointer's password is equal to password param
				// function: strcmp
				// if true, return the current account pointer

	// end loop

	// return null by default (function fell through)
// }