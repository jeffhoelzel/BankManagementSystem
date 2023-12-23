// header files
#include "CreateAccount_lib.h"

// function implementations
bool checkIfEnter(char* userInput)
{
	// check if first index of string is '\n'
		// if true:
			// prompt the user to see if they are sure they want to quit
				// read in user response
					// function: fgets
				// convert user input to uppercase
					// function: toupper
				// if response is 'Y', return true
			// loop while response is invalid (i.e. not 'Y' or 'N')
				// notify user of error and prompt them to try again
					// function: printf
				// read in user input
					// function: fgets
				// convert user input to uppercase
					// function: toupper
				// check if response is 'Y'
					// if true, return true

	// return false by default (flow control falls through)
}
char getUserChoice()
{
	// declare/initialize variables

	// prompt the user to enter a 'Y' for yes, an 'N' for no, and ENTER
	//     to quit
		// function: printf

	// read in user input
		// function: fgets

	// check if user pressed ENTER
		// function: checkIfEnter

	// convert user input to uppercase
		// function: toupper

	// loop while user has not entered valid characters
		// print out error message telling user they entered invalid input
			// function: printf

		// prompt user to try again
			// function: printf

		// read in user input
			// function: fgets

		// check if user pressed ENTER
			// function: checkIfEnter

		// convert user input to uppercase
			// function: toupper

	// end loop

	// return the user's choice
}
char getUserAccountChoice()
{
	// declare/initialize variables

	// print a menu displaying the types of accounts a user can create
		// function: printf

	// prompt user to enter a character that corresponds to the account
	//     they wish to open
		// function: printf

	// read in user input
		// function: fgets

	// check if user pressed ENTER
		// function: checkIfEnter

	// convert user input to uppercase
		// function: toupper

	// loop while user has not entered valid characters
		// print out error message telling user they entered invalid input
			// function: printf

		// print a new menu for the user to choose from
			// function: printf

		// prompt user to try again
			// function: printf

		// read in user input
			// function: fgets

		// check if user pressed ENTER
			// function: checkIfEnter

		// convert user input to uppercase
			// function: toupper

	// end loop

	// return the user's choice
}
Account* createNewAccount(char accountType)
{
	// declare/initialize variables

	// prompt the user to enter a username
		// function: printf

	// read in user input
		// function: fgets

	// check if user pressed ENTER
		// function: checkIfEnter

	// prompt the user to enter a password
		// function: printf

	// read in user input
		// function: fgets

	// check if user pressed ENTER
		// function: checkIfEnter

	// prompt the user to confirm their password
		// function: printf

	// read in user input
		// function: fgets

	// check if user pressed ENTER
		// function: checkIfEnter

	// loop while passwords do not match
		// function: strcmp
		// notify user of error and prompt them to re-enter their password
			// function: printf

		// read in user input
			// function: fgets

		// check if user pressed ENTER
			// function: checkIfEnter

		// prompt the user to confirm their password
			// function: printf

		// read in user input
			// function: fgets

		// check if user pressed ENTER
			// function: checkIfEnter

	// end loop

	// prompt user to enter their age
		// function: printf

	// read in user input
		// function: fgets

	// check if user pressed ENTER
		// function: checkIfEnter

	// convert from string to int
		// function: atoi

	// loop while user has not entered an age between 13 and 120
		// notify user of error and prompt them to re-enter their age
			// function: printf

		// read in user input
			// function: fgets

		// check if user pressed ENTER
			// function: checkIfEnter

		// convert from string to int
			// function: atoi

	// end loop

// prompt user to enter cash value
		// function: printf

	// read in user input
		// function: fgets

	// check if user pressed ENTER
		// function: checkIfEnter

	// convert from string to double
		// function: atof

	// loop while user has not entered a cash value between $0.00 and $10,000.00
		// notify user of error and prompt them to re-enter their cash value
			// function: printf

		// read in user input
			// function: fgets

		// check if user pressed ENTER
			// function: checkIfEnter

		// convert from string to double
			// function: atof

	// end loop

	// check if linked list is empty
		// if true:
			// allocate space in the heap for our new account
				// function: malloc
			// assign username, password, account type, age, money to
			//     account fields
			// have the next account field point to NULL

		// otherwise:
			// allocate space in the heap for a new account
				// function: malloc
			// assign username, password, account type, age, money to
			//     account fields
			// have the next account field point to the head account
			// assign head account pointer to the new account pointer

	// return the new account
}