// header files
#include "dtypes.h"
#include "CreateAccount_lib.h"
#include "Login_lib.h"
#include "AccountInteraction_lib.h"

// define the account head extern variable
Account* headAccount = NULL;

// main program
int main()
{
	// declare/intialize variables
		// user's choice for creating a new account or not as char
	char userChoice = 'Y';
		// the account choice of the user as a char
	char accountChoice;
		// the new user's account as a struct Account pointer
	Account* newUserAccount = NULL;
		// the current user's account as a struct Account pointer
	Account* currentUserAccount = NULL;
		// temp account as struct Account pointer for freeing memory
	Account* tempAccount = headAccount;
		// the current user's username and password as strings
	char username[MAX_SIZE];
	char password[MAX_SIZE];

	// loop while user wants to create new accounts
	while (userChoice == 'Y')
	{
		// notify user that they must create a new account if this is their first 
		//     time running program, include directions to follow instructions
			// function: printf
		printf("=====================================================================\n");
		printf("Welcome to my simulated Bank Management System!\n\n");
		printf("To create a new account, please enter the informaton requested below.\n");
		printf("If at any point you wish to quit, press ENTER when a prompt is open. \n");
		printf("This will result in the program being terminated no matter where you \n");
		printf("are currently working or messing around in the program.\n\n");
		printf("Developed by: Jeffrey Hoelzel\n");
		printf("=====================================================================\n\n");

		// prompt the user to choose what type of account they want to open
			// function: getUserAccountChoice
		accountChoice = getUserAccountChoice();

		// allow the user to create a new account with their account type as param
			// function: createNewAccount
		newUserAccount = createNewAccount(accountChoice);

		// notify the user of account creation success
			// function: printf
		printf("\nYou have successfully created an account!\n");
		printf("Welcome %s!\n\n", newUserAccount->username);

		// prompt the user to log into their new account
			// function: printf
		printf("Please login.\n");

		// loop while the user has provided invalid credentials (while pointer is NULL)
		while (currentUserAccount == NULL)
		{
			// get the user's username
				// function: getUsername
			getUsername(username);

			// get the user's password
				// function: getPassword
			getPassword(password);

			// attemt to authenticate the user's account
				// function: authenticateAccount
			currentUserAccount = authenticateAccount(headAccount, username, password);
		}
		// end loop

		// allow the user to interact with their account
			// function: interact
		interact(currentUserAccount);

		// set current user account back to null
		currentUserAccount = NULL;

		// ask the user if they would like to create a new account
			// function: printf, getUserChoice
		printf("Would you like to create a new account?\n");
		userChoice = getUserChoice();
	}
	// end loop

	// loop while the temp account is not null
	while (tempAccount != NULL)
	{
		// have head account put to next field of head
		headAccount = headAccount->nextAccount;

		// free the temp account memory
			// function: free
		free(tempAccount);

		// assign temp account to head
		tempAccount = headAccount;
	}
	// end loop

	// notify user the program has ended
		// function: printf
	printf("\nProgram terminated.\n");

	// return success
	return 0;
}