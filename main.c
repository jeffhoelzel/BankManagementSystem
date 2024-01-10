// header files
#include "dtypes.h"
#include "CreateAccount_lib.h"
#include "Login_lib.h"
#include "AccountInteraction_lib.h"

// define the account head extern variable
extern Account* headAccount = NULL;

// main program
int main()
{
	// declare/intialize variables

	// loop while user wants to create new accounts
		// notify user that they must create a new account if this is their first 
		//     time running program, include directions to follow instructions
			// function: printf

		// prompt the user to choose what type of account they want to open
			// function: getUserAccountChoice

		// allow the user to create a new account with their account type as param
			// function: createNewAccount

		// loop while the user has provided invalid credentials (while pointer is NULL)
			// get the user's username
				// function: getUsername

			// get the user's password
				// function: getPassword

			// attemt to authenticate the user's account
				// function: authenticateAccount

		// end loop

		// allow the user to interact with their account
			// function: interact

		// ask the user if they would like to create a new account
			// function: printf, getUserChoice
	// end loop

	// return success
	return 0;
}