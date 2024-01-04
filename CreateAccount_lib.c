// header files
#include "CreateAccount_lib.h"

// function implementations
char getUserAccountChoice()
{
	// declare/initialize variables
	char userAccountStr[3];
	char userAccount;

	// print a menu displaying the types of accounts a user can create and prompt
	//     the user to choose an account from the list
		// function: printf
	printf("Choose one of the following accounts by typing in the corresponding character:\n");
	printf("==============================================================================\n");
	printf("Checking (C)\nSavings (S)\nRetirement (R)\n");

	// read in user input
		// function: fgets
	fgets(userAccountStr, sizeof(userAccountStr), stdin);

	// check if user pressed ENTER
		// function: checkIfEnter
		// if true, return abort character
	if (checkIfEnter(userAccountStr))
		return ABORT_CHAR;

	// get first char in string
	userAccount = userAccountStr[0];

	// convert user input to uppercase
		// function: toupper
	userAccount = toupper(userAccount);

	// loop while user has not entered valid characters
	while (userAccount != 'C' && userAccount != 'S' && userAccount != 'R')
	{
		// print out error message telling user they entered invalid input
			// function: printf
		printf("Error: Response must be chosen from the list above.\n");

		// print a new menu for the user to choose from
			// function: printf
		printf("Checking (C)\nSavings (S)\nRetirement (R)\n");

		// prompt user to try again
			// function: printf
		printf("Please try again: ");

		// read in user input
			// function: fgets
		fgets(userAccountStr, sizeof(userAccountStr), stdin);

		// check if user pressed ENTER
			// function: checkIfEnter
			// if true, return abort character
		if (checkIfEnter(userAccountStr))
			return ABORT_CHAR;

		// get first char in string
		userAccount = userAccountStr[0];

		// convert user input to uppercase
			// function: toupper
		userAccount = toupper(userAccount);
	}
	// end loop

	// return the user's choice
	return userAccount;
}
Account* createNewAccount(char accountType)
{
	// declare/initialize variables
	Account* newAccount = NULL;
	char userAgeStr[6];
	int userAge;
	char userCashAmountStr[16];
	double userCashAmount;
	char confirmPassword[64];
	bool flag = false;

	// check if linked list is empty
	if (headAccount == NULL)
	{
		// if true:
			// allocate space in the heap for our new account
				// function: malloc
		newAccount = (Account*)malloc(sizeof(newAccount));

		// if malloc failed, return null
		if (newAccount == NULL)
			return NULL;

			// assign head account to new account pointer
		headAccount = newAccount;

			// have the next account field point to NULL
		newAccount->nextAccount = NULL;
	}
	else
	{
		// otherwise:
			// allocate space in the heap for a new account
				// function: malloc
		newAccount = (Account*)malloc(sizeof(newAccount));

		// if malloc failed, return null
		if (newAccount == NULL)
			return NULL;

			// have the next account field point to the head account
		newAccount->nextAccount = headAccount;

			// assign head account pointer to the new account pointer
		headAccount = newAccount;
	}

	// prompt the user to enter a username
		// function: printf
	printf("Enter a username (64 characters max): ");

	// read in user input
		// function: fgets
	fgets(newAccount->username, sizeof(newAccount->username), stdin);

	// check if user pressed ENTER
		// function: checkIfEnter
		// if true, return null
	flag = checkIfEnter(newAccount->username);
	if (flag)
		return NULL;

	// loop while user has decided not to quit
	while (!flag)
	{
		// prompt user to enter a username
			// function: printf
		printf("Enter a username (64 characters max): ");

		// read in user input
			// function: fgets
		fgets(newAccount->username, sizeof(newAccount->username), stdin);

		// check if user pressed ENTER
			// function: strcmp
			// if true, retrun 
			// otherwise, break out of loop
		if (strcmp(newAccount->username, "\n") == 0)
			return NULL;
		else
			break;
	}
	// end loop

	// prompt the user to enter a password
		// function: printf
	printf("Enter a password (64 characters max): ");

	// read in user input
		// function: fgets
	fgets(newAccount->password, sizeof(newAccount->password), stdin);

	// check if user pressed ENTER
		// function: checkIfEnter
		// if true, return null
	if (checkIfEnter(newAccount->password))
		return NULL;

	// prompt the user to confirm their password
		// function: printf
	printf("Confirm your password: ");

	// read in user input
		// function: fgets
	fgets(confirmPassword, sizeof(confirmPassword), stdin);

	// check if user pressed ENTER
		// function: checkIfEnter
		// if true, return null
	if (checkIfEnter(confirmPassword))
		return NULL;

	// loop while passwords do not match
		// function: strcmp
	while (strcmp(newAccount->password, confirmPassword) != 0)
	{
		// notify user of error
			// function: printf
		printf("Error: Passwords must match in order to continue.\n");

		// prompt user to re-enter their password
			// function: printf
		printf("Enter a password (64 characters max): ");

		// read in user input
			// function: fgets
		fgets(newAccount->password, sizeof(newAccount->password), stdin);

		// check if user pressed ENTER
			// function: checkIfEnter
			// if true, return null
		if (checkIfEnter(newAccount->password))
			return NULL;

		// prompt the user to confirm their password
			// function: printf
		printf("Confirm your password: ");

		// read in user input
			// function: fgets
		fgets(confirmPassword, sizeof(confirmPassword), stdin);

		// check if user pressed ENTER
			// function: checkIfEnter
			// if true, return null
		if (checkIfEnter(confirmPassword))
			return NULL;
	}
	// end loop

	// prompt user to enter their age
		// function: printf
	printf("Enter your age (between 13 and 120): ");

	// read in user input
		// function: fgets
	fgets(userAgeStr, sizeof(userAgeStr), stdin);

	// check if user pressed ENTER
		// function: checkIfEnter
		// if true, return null
	if (checkIfEnter(userAgeStr))
		return NULL;

	// convert from string to int
		// function: atoi
	userAge = atoi(userAgeStr);

	// loop while user has not entered an age between 13 and 120
	while (13 > userAge || userAge > 120)
	{
		// notify user of error based upon number entered
			// function: printf
		if (userAge < 13)
			printf("Error: Must be at least 13 to create a new account.\n");
		else
			printf("Error: Must be reasonable age to create a new account (less than 120).\n");

		// prompt user to re-enter their age
			// function: printf
		printf("Enter your age (between 13 and 120): ");

		// read in user input
			// function: fgets
		fgets(userAgeStr, sizeof(userAgeStr), stdin);

		// check if user pressed ENTER
			// function: checkIfEnter
			// if true, return null
		if (checkIfEnter(userAgeStr))
			return NULL;

		// convert from string to int
			// function: atoi
		userAge = atoi(userAgeStr);
	}
	// end loop

	// prompt user to enter cash value
		// function: printf
	printf("Enter your cash (between $0 and $10,000.00): ");

	// read in user input
		// function: fgets
	fgets(userCashAmountStr, sizeof(userCashAmountStr), stdin);

	// check if user pressed ENTER
		// function: checkIfEnter
		// if true, return null
	if (checkIfEnter(userCashAmountStr))
		return NULL;

	// convert from string to double
		// function: atof
	userCashAmount = atof(userCashAmountStr);

	// loop while user has not entered a cash value between $0.00 and $10,000.00
	while (0.00 > userCashAmount || userCashAmount > 10000.00)
	{
		// notify user of error
			// function: printf
		printf("Error: Cash amount must be between $0.00 and $10,000.00.\n");

		// prompt user to re-enter their cash value
			// function: printf
		printf("Enter your cash (between $0 and $10,000.00): ");

		// read in user input
			// function: fgets
		fgets(userCashAmountStr, sizeof(userCashAmountStr), stdin);

		// check if user pressed ENTER
			// function: checkIfEnter
			// if true, return null
		if (checkIfEnter(userCashAmountStr))
			return NULL;

		// convert from string to double
			// function: atof
		userCashAmount = atof(userCashAmountStr);
	}
	// end loop

	// assign account type, age, money to new account fields
	newAccount->type = accountType; 
	newAccount->age = userAge;
	newAccount->amount = userCashAmount;

	// return the new account
	return newAccount;
}