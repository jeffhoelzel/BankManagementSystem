// header files
#include "Login_lib.c"

// function implementations
char* getUsername()
{
	// declare/initialize variables

	// prompt user to enter their username
		// function: printf

	// read in user input
		// function: fgets

	// check if user pressed ENTER and assign result to username flag
		// function: checkIfEnter
		// if true, assign return string to username and password

	// loop while user has decided not to quit
		// prompt user to enter their username
			// function: printf

		// read in user input
			// function: fgets

		// check if user pressed ENTER without prompt
			// function: strcmp
			// if true, assign return string to username and password
			// othwerwise, break out of loop

	// end loop 

	// return username
}
char* getPassword()
{
	// initialize/declare variables

	// prompt user to enter their password
		// function: printf

	// loop while user is typing their password
		// get current character from the standard input stream
			// function: getc

		// check if current character is ENTER or TAB
			// if true, assign password at index to null terminator and break
			//     out of the loop

		// or if current character is a BACKSPACE
			// if true, check if index > 0
				// if true, decrement i and print backspace (to delete asterisk(s))
					// function: printf

		// otherwise, assign password at index i++ to current character, and print
		//     an asterisk
			// function: printf

	// end loop

	// return password
}
Account* authenticateAccount(Account* accountList, char* username, char* password)
{
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
}