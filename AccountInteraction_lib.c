// include guards
#include "AccountInteraction_lib.h"

// function implementations
void transferMoney(Account* userAccount)
{
	// declare/initialize variables

	// loop while user has not provided a valid username (flag is false)
		// prompt user for the username of the account they wish to transfer to
			// function: printf

		// read in user input
			// function: fputs

		// check if user wants to quit
			// function: checkIfEnter
			// if true, return

		// set current account to account list

		// loop while current account is not null
			// assign head pointer to the next account field in head pointer

			// check if current account pointer's username is equal to username provided by user
				// function: strcmp
				// if true, set flag to true and break out of loop

		// end loop

	// end loop

	// prompt the user for a dollar amount to transfer
		// function: printf

	// read in user input
		// function: fputs

	// check if user wants to quit
		// function: checkIfEnter
		// if true, return

	// convert from string to double
		// function: atof

	// loop while the user's dollar amount is in valid (below $0 or above $10,000.00)
		// notify user of error
			// function: printf

		// prompt the user for a dollar amount to transfer
			// function: printf

		// read in user input
			// function: fgets

		// check if user wants to quit
			// function: checkIfEnter
			// if true, return

		// convert from string to double
			// function: atof

	// end loop

	// subtract money from current user's account

	// add money to the account user wishes to transfer money to

	// print a receipt of the transaction:
		// 1) print the old balance of user's account
		// 2) print how much money the user decided to transfer
		// 3) print the new balance of the user's account
			// function: printf
}
void addMoney(Account* userAccount)
{
	// declare/initialize variables

	// prompt the user to deposit some money
		// function: printf

	// read in user input
		// function: fgets

	// check if user wants to quit
		// function: checkIfEnter
		// if true, return

	// deposit money into account

	// print out a receipt of the transaction:
		// 1) print the old balance of user's account
		// 2) print how much money was added
		// 3) print the new balance of the account
			// function: printf
}
void withdrawMoney(Account* userAccount)
{
	// declare/initialize variables

	// prompt the user to withdraw some money
		// function: printf

	// read in user input
		// function: fgets

	// check if user wants to quit
		// function: checkIfEnter
		// if true, return

	// withdraw money from account

	// print out a receipt of the transaction:
		// 1) print the old balance of user's account
		// 2) print how much money was removed
		// 3) print the new balance of the account
			// function: printf
}
void purchaseItem(Account* userAccount, double cost, char item[64])
{
	// declare/initialize variables

	// calculate sales tax

	// calculate total cost

	// subtract cost from user's account

	// print a receipt of the transaction:
		// 1) print the name of the item purchases
		// 2) print how much the item costs before tax
		// 3) print how much sales tax is added to bill of sale
		// 4) print the total cost of the item
			// function: printf
}
void viewBalance(Account* userAccount)
{
	// print the balance of the user's account
		// function: printf
}
bool deleteAccount(Account* headAccount)
{
	// declare/initialize variables

	// get account username for deletion
		// function: getUsername

	// get account password for deletion
		// function: getPassword

	// set current account to head account

	// set previous account to head account

	// loop while current account is not null
		// check if current account's username is equal to user provided username
			// function: strcmp

			// if true, check if current account's password is equal to user provided password
				// function: strcmp
				// if true, 2 cases:
					// 1) if current node is the head, point to current account pointer's next account field
					// 2) set previous account's next account field to current account pointer's 
					//     next account field, free current account and set current account to null
						// function: free

					// return true

			// set previous account to current

			// set current account to current account's next account field

	// end loop

	// return false by default
}
char getUserActionChoice(Account* userAccount)
{
	// declare/initialize variables

	// print menu based on the account type of the user
		// case checking account
			// print a menu to include:
				// deposit money
				// withdraw money
				// transfering money
				// purchasing an item
				// viewing the balance
				// and deleting the account
					// function: printf

		// case savings account
			// print a menu to include: 
				// deposit money
				// transfering money
				// viewing the balance
				// and deleting the account
					// function: printf

		// case retirement account
			// check if user age is less than 65
				// if true, only allow them deposit money to the account, view the balance, or delete it
				// otherwise, allow them to do the same as a savings account + withdraw their money
					// function: printf

		// default case
			// notify caller of error and return abort int

	// prompt the user to enter a number corresponding to the action this wish to take
		// function: printf

	// read in user input
		// function: fgets

	// check if user wants to quit
		// function: checkIfEnter
		// if true, return abort char

	// convert from string to char
		// function: atoi

	// convert to uppercase
		// function: toupper

	// return user's choice

}
void interact(Account* userAccount)
{
	// declare/initialize variables

	// loop while user does not want to quit
		// prompt user to choose what they want to do with their account
			// function: getUserActionChoice

		// switch based upon what the user wants to do
			// case desposit money
				// function: depositMoney
			// case withdraw money
				// function: withdrawMoney
			// case transfer money
				// function: transferMoney
			// case purchase an item
				// function: purchaseItem
			// case view their account balance
				// function: viewBalance
			// case delete their account
				// function: deleteAccount
			// default case
				// print an error to the user
					// function: printf

		// prompt the user to continue
			// function: getUserChoice

	// end loop
}