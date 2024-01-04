// header files
#include "dtypes.h"

// define the head account pointer
Account* headAccount = NULL;

// function implementations
bool checkIfEnter(char* userInput)
{
	// declare/initialize variables
	char confirmationStr[3];
	char confirmation;

	// check if first index of string is '\n'
	if (userInput[0] == '\n')
	{
		// if true:
			// prompt the user to see if they are sure they want to quit
				// function: printf
		printf("Are you sure you want to quit? [Y|N]? ");

				// read in user response
					// function: fgets
		fgets(confirmationStr, sizeof(confirmationStr), stdin);

		// get first char in string (should be 'Y' or 'N')
		confirmation = confirmationStr[0];

				// convert user input to uppercase
					// function: toupper
		confirmation = toupper(confirmation);

				// if response is 'Y', return true
				// otherwise, return false if response is 'N', and notify user
		if (confirmation == 'Y')
			return true;
		else if (confirmation == 'N')
		{
			printf("Termination canceled.\n");
			return false;
		}

			// loop while response is invalid (i.e. not 'Y' or 'N')
		while (confirmation != 'Y' && confirmation != 'N')
		{
				// notify user of error and prompt them to try again
					// function: printf
			printf("Error: Response must be 'Y' or 'N'.\n");
			printf("Please try again: ");

				// read in user input
					// function: fgets
			fgets(confirmationStr, sizeof(confirmationStr), stdin);

			// get first char in string (should be 'Y' or 'N')
			confirmation = confirmationStr[0];

				// convert user input to uppercase
					// function: toupper
			confirmation = toupper(confirmation);

				// check if response is 'Y'
					// if true, return true
					// otherwise, return false if response is 'N', and notify user
			if (confirmation == 'Y')
				return true;
			else if (confirmation == 'N')
			{
				printf("Termination canceled.\n");
				return false;
			}
		}
	}

	// return false by default (flow control falls through)
	return false;
}
char getUserChoice()
{
	// declare/initialize variables
	char userInputStr[3];
	char userInput;

	// prompt the user to enter a 'Y' for yes, an 'N' for no, and ENTER
	//     to quit
		// function: printf
	printf("Yes (Y), No (N), or Cancel (ENTER): ");

	// read in user input
		// function: fgets
	fgets(userInputStr, sizeof(userInputStr), stdin);

	// check if user pressed ENTER
		// function: checkIfEnter
		// if true, return abort character
	if (checkIfEnter(userInputStr))
		return ABORT_CHAR;

	// get first char in string (should be 'Y' or 'N')
	userInput = userInputStr[0];

	// convert user input to uppercase
		// function: toupper
	userInput = toupper(userInput);

	// loop while user has not entered valid characters
	while (userInput != 'Y' && userInput != 'N')
	{
		// print out error message telling user they entered invalid input
			// function: printf
		printf("Error: Response must be 'Y', 'N', or 'ENTER'.\n");

		// prompt user to try again
			// function: printf
		printf("Please try again: ");

		// read in user input
			// function: fgets
		fgets(userInputStr, sizeof(userInputStr), stdin);

		// check if user pressed ENTER
			// function: checkIfEnter
			// if true, return abort character
		if (checkIfEnter(userInputStr))
			return ABORT_CHAR;

		// get first char in string (should be 'Y' or 'N')
		userInput = userInputStr[0];

		// convert user input to uppercase
			// function: toupper
		userInput = toupper(userInput);
	}
	// end loop

	// return the user's choice
	return userInput;
}