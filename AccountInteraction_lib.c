// include guards
#include "AccountInteraction_lib.h"

// function implementations
void transferMoney(Account* userAccount, Account* headAccount)
{
	// declare/initialize variables
	Account* currentAccount;
	bool flag = false;
	char username[64];
	char moneyTransferredStr[MAX_MONEY_SIZE];
	double moneyTransferred;
	

	// loop while user has not provided a valid username (flag is false)
	while (!flag)
	{
		// prompt user for the username of the account they wish to transfer to
			// function: printf
		printf("Enter the username of the account to tranfer money to: ");

		// read in user input
			// function: fgets
		fgets(username, (MAX_SIZE * sizeof(char)), stdin);

		// check if user wants to quit
			// function: checkIfEnter
			// if true, return
		if (checkIfEnter(username))
			return;

		// remove trailing new line character
			// function: strcspn
		username[strcspn(username, "\n")] = '\0';

		// set current account to account list
		currentAccount = headAccount;

		// loop while current account is not null
		while (currentAccount != NULL)
		{
			// assign head pointer to the next account field in head pointer
			headAccount = headAccount->nextAccount;

			// check if current account pointer's username is equal to username provided by user
				// function: strcmp
			if (strcmp(currentAccount->username, username) == 0)
			{
				// if true, set flag to true and break out of loop
				flag = true;
				break;
			}
			// assign current account to head account
			currentAccount = headAccount;
		}
		// end loop

		// check if flag is still false
			// if true, print and error to the user to try another account, or quit
		if (!flag)
			printf("Error: Account not found, please try another username or quit.\n");
	}
	// end loop

	// prompt the user for a dollar amount to transfer and warn user of overdrafting
		// function: printf
	printf("Warning: Overdrafting will occur if you do not mind your account balance.\n");
	printf("Enter dollar amount to tranfer to account ($0 - $10,000.00): ");

	// read in user input
		// function: fgets
	fgets(moneyTransferredStr, (MAX_MONEY_SIZE * sizeof(char)), stdin);

	// check if user wants to quit
		// function: checkIfEnter
		// if true, return
	if (checkIfEnter(moneyTransferredStr))
		return;

	// convert from string to double
		// function: atof
	moneyTransferred = atof(moneyTransferredStr);

	// loop while the user's dollar amount is in valid (below $0 or above $10,000.00)
	while (0.0 > moneyTransferred || moneyTransferred > 10000.00)
	{
		// notify user of error
			// function: printf
		printf("Error: Transfers must be between $0 and $10,000.00.\n");

		// prompt the user for a dollar amount to transfer
			// function: printf
		printf("Enter dollar amount to tranfer to account: ");

		// read in user input
			// function: fgets
		fgets(moneyTransferredStr, (MAX_MONEY_SIZE * sizeof(char)), stdin);

		// check if user wants to quit
			// function: checkIfEnter
			// if true, return
		if (checkIfEnter(moneyTransferredStr))
			return;

		// convert from string to double
			// function: atof
		moneyTransferred = atof(moneyTransferredStr);
	}
	// end loop

	// subtract money from current user's account
	userAccount->amount -= moneyTransferred;

	// add money to the account user wishes to transfer money to
	currentAccount->amount += moneyTransferred;

	// print a receipt of the transaction:
		// function: printf
	printf("--\n");
		// 1) print the old balance of user's account
	printf("Previous Balance:		$%.2lf\n", userAccount->amount + moneyTransferred);
		// 2) print how much money the user decided to transfer
	printf("You Transfered:			$%.2lf (to account %s)\n", moneyTransferred, username);
		// 3) print the new balance of the user's account
	printf("Current Balance:		$%.2lf\n", userAccount->amount);
}
void depositMoney(Account* userAccount)
{
	// declare/initialize variables
	char moneyInStr[MAX_MONEY_SIZE];
	double moneyIn;

	// prompt the user to deposit some money
		// function: printf
	printf("Enter amount to deposit ($0 - $10,000.00): ");

	// read in user input
		// function: fgets
	fgets(moneyInStr, (MAX_MONEY_SIZE * sizeof(char)), stdin);

	// check if user wants to quit
		// function: checkIfEnter
		// if true, return
	if (checkIfEnter(moneyInStr))
		return;

	// convert from string to double
		// function: atof
	moneyIn = atof(moneyInStr);

	// loop while the user's dollar amount is in valid (below $0 or above $10,000.00)
	while (0.0 > moneyIn || moneyIn > 10000.00)
	{
		// notify user of error
			// function: printf
		printf("Error: Depoits must be between $0 and $10,000.00.\n");

		// prompt the user for a dollar amount to transfer
			// function: printf
		printf("Enter dollar amount to deposit into account: ");

		// read in user input
			// function: fgets
		fgets(moneyInStr, (MAX_MONEY_SIZE * sizeof(char)), stdin);

		// check if user wants to quit
			// function: checkIfEnter
			// if true, return
		if (checkIfEnter(moneyInStr))
			return;

		// convert from string to double
			// function: atof
		moneyIn = atof(moneyInStr);
	}
	// end loop

	// deposit money into account
	userAccount->amount += moneyIn;

	// print out a receipt of the transaction:
		// function: printf
	printf("--\n");
		// 1) print the old balance of user's account
	printf("Previous Balance:		$%.2lf\n", userAccount->amount - moneyIn);
		// 2) print how much money was added
	printf("You Deposited:			$%.2lf\n", moneyIn);
		// 3) print the new balance of the account
	printf("Current Balance:		$%.2lf\n", userAccount->amount);
}
void withdrawMoney(Account* userAccount)
{
	// declare/initialize variables
	char moneyOutStr[MAX_MONEY_SIZE];
	double moneyOut;

	// prompt the user to withdraw some money and warn user of overdrafting
		// function: printf
	printf("Warning: Overdrafting will occur if you do not mind your account balance.\n");
	printf("Enter an amount to withdraw ($0 - $10,000.00): ");

	// read in user input
		// function: fgets
	fgets(moneyOutStr, (MAX_MONEY_SIZE * sizeof(char)), stdin);

	// check if user wants to quit
		// function: checkIfEnter
		// if true, return
	if (checkIfEnter(moneyOutStr))
		return;

	// convert from string to double
		// function: atof
	moneyOut = atof(moneyOutStr);

	// loop while the user's dollar amount is in valid (below $0 or above $10,000.00)
	while (0.0 > moneyOut || moneyOut > 10000.00)
	{
		// notify user of error
			// function: printf
		printf("Error: Withdraws must be between $0 and $10,000.00.\n");

		// prompt the user for a dollar amount to transfer
			// function: printf
		printf("Enter dollar amount to withdraw from account: ");

		// read in user input
			// function: fgets
		fgets(moneyOutStr, (MAX_MONEY_SIZE * sizeof(char)), stdin);

		// check if user wants to quit
			// function: checkIfEnter
			// if true, return
		if (checkIfEnter(moneyOutStr))
			return;

		// convert from string to double
			// function: atof
		moneyOut = atof(moneyOutStr);
	}
	// end loop

	// withdraw money from account
	userAccount->amount -= moneyOut;

	// print out a receipt of the transaction:
		// function: printf
	printf("--\n");
		// 1) print the old balance of user's account
	printf("Previous Balance:		$%.2lf\n", userAccount->amount + moneyOut);
		// 2) print how much money was removed
	printf("You Withdrawed:			$%.2lf\n", moneyOut);
		// 3) print the new balance of the account
	printf("Current Balance:		$%.2lf\n", userAccount->amount);
}
void purchaseItem(Account* userAccount, double cost, char item[64])
{
	// declare/initialize variables
	double salesTax;
	double totalCost;

	// calculate sales tax
	salesTax = cost * SALES_TAX;

	// calculate total cost
	totalCost = cost + salesTax;

	// subtract cost from user's account
	userAccount->amount -= totalCost;

	// print a receipt of the transaction:
		// function: printf
	printf("--\n");
		// 1) print the name of the item purchases
	printf("Item Purchased: 	%s\n", item);
		// 2) print how much the item costs before tax
	printf("Subtotal: 		$%.2lf\n", cost);
		// 3) print how much sales tax is added to bill of sale
	printf("Tax: 			$%.2lf\n--\n", salesTax);
		// 4) print the total cost of the item
	printf("Total: 			$%.2lf\n", totalCost);
}
void viewBalance(Account* userAccount)
{
	// print the balance of the user's account
		// function: printf
	printf("--\n");
	printf("Account Balance: $%.2lf\n", userAccount->amount);
}
bool deleteAccount(Account* headAccount)
{
	// declare/initialize variables
	Account* currentAccount;
	Account* prevAccount;
	char username[64];
	char password[64];

	// get account username for deletion
		// function: getUsername
	getUsername(username);

	// get account password for deletion
		// function: getPassword
	getPassword(password);

	// set current account to head account
	currentAccount = headAccount;

	// set previous account to head account
	prevAccount = headAccount;

	// loop while current account is not null
	while (currentAccount != NULL)
	{
		// check if current account's username is equal to user provided username
			// function: strcmp
		if (strcmp(currentAccount->username, username) == 0)
		{
			// if true, check if current account's password is equal to user provided password
				// function: strcmp
			if (strcmp(currentAccount->password, password) == 0)
			{
				// if true, 2 cases:
					// 1) if current node is the head, point to current account pointer's next account field
				if (currentAccount == headAccount)
					headAccount = currentAccount->nextAccount;
				else
				{
					// 2) set previous account's next account field to current account pointer's 
					//     next account field, free current account and set current account to null
						// function: free
					prevAccount->nextAccount = currentAccount->nextAccount;
					free(currentAccount);
					currentAccount = NULL;
				}

				// return true
				return true;
			}
		}
		// set previous account to current
		prevAccount = currentAccount;

		// set current account to current account's next account field
		currentAccount = currentAccount->nextAccount;
	}
	// end loop

	// return false by default
	return false;
}
char getUserActionChoice(Account* userAccount)
{
	// declare/initialize variables
	char userChoiceStr[3];
	char userChoice;

	// print menu based on the account type of the user
	switch (userAccount->type)
	{
		// case checking account
			// print a menu to include:
				// deposit money
				// withdraw money
				// transfering money
				// purchasing an item
				// viewing the balance
				// and deleting the account
					// function: printf
		case CHECKING:
			printf("===================\n");
			printf("Deposit 	(D)\n");
			printf("Withdraw 	(W)\n");
			printf("Transfer 	(T)\n");
			printf("Purchase Item 	(P)\n");
			printf("View Balance 	(V)\n");
			printf("Remove Account	(R)\n");
		break;

		// case savings account
			// print a menu to include: 
				// deposit money
				// transfering money
				// viewing the balance
				// and deleting the account
					// function: printf
		case SAVINGS:
			printf("===================\n");
			printf("Deposit 	(D)\n");
			printf("Transfer 	(T)\n");
			printf("View Balance 	(V)\n");
			printf("Remove Account	(R)\n");
		break;

		// case retirement account
			// check if user age is less than 65
				// if true, only allow them deposit money to the account, view the balance, or delete it
				// otherwise, allow them to do the same as a savings account + withdraw their money
					// function: printf
		case RETIREMENT:
			printf("===================\n");
			if (userAccount->age < 65)
			{
				printf("Deposit 	(D)\n");
				printf("View Balance 	(V)\n");
				printf("Remove Account	(R)\n");
			}
			else
			{
				printf("Deposit 	(D)\n");
				printf("Withdraw 	(W)\n");
				printf("Transfer 	(T)\n");
				printf("View Balance 	(V)\n");
				printf("Remove Account	(R)\n");
			}
		break;

		// default case
			// notify caller of error and return abort char
		default:
			printf("Error: Account type does not exist.\n");
			return ABORT_CHAR;
		break;

	}

	// prompt the user to enter a character corresponding to the action this wish to take
		// function: printf
	printf("--\nEnter a character corresponding the to action you want to choose: ");

	// read in user input
		// function: fgets, strlen
	fgets(userChoiceStr, sizeof(userChoiceStr), stdin);

	// check if user wants to quit
		// function: checkIfEnter
		// if true, return abort char
	if (checkIfEnter(userChoiceStr))
		return ABORT_CHAR;

	// convert from string to char
	userChoice = userChoiceStr[0];

	// convert to uppercase
		// function: toupper
	userChoice = toupper(userChoice);

	// return user's choice
	return userChoice;
}
void interact(Account* userAccount)
{
	// declare/initialize variables
	bool accountDeleted;
	char continueInt = 'Y';
	char userChoice;
	double cost;
	char costStr[MAX_MONEY_SIZE];
	char item[MAX_SIZE];

	// loop while user does not want to quit
	while (continueInt == 'Y')
	{
		// prompt user to choose what they want to do with their account
			// function: getUserActionChoice
		userChoice = getUserActionChoice(userAccount);

		// switch based upon what the user wants to do
		switch (userChoice)
		{
			// case desposit money
				// function: depositMoney
			case DEPOSIT:
				depositMoney(userAccount);
			break;
			// case withdraw money
				// function: withdrawMoney
			case WITHDRAW:
				withdrawMoney(userAccount);
			break;

			// case transfer money
				// function: transferMoney
			case TRANSFER:
				transferMoney(userAccount, headAccount);
			break;

			// case purchase an item, get cost of item and item name
				// function: purchaseItem
			case PURCHASE:
				printf("What do you want to purchase? ");
				fgets(item, (MAX_SIZE * sizeof(char)), stdin);
				
				if (checkIfEnter(item))
					return;

				printf("How much does it cost? ");
				fgets(costStr, MAX_MONEY_SIZE * sizeof(char), stdin);

				if (checkIfEnter(costStr))
					return;

				cost = atof(costStr);

				purchaseItem(userAccount, cost, item);
			break;

			// case view their account balance
				// function: viewBalance
			case VIEW_BAL:
				viewBalance(userAccount);
			break;

			// case delete their account
				// function: deleteAccount
			case REMOVE_ACC:
				accountDeleted = deleteAccount(headAccount);
				
				if (accountDeleted)
					printf("Account successfully deleted.\n");
				else
					printf("Account does not exist.\n");
			break;

			// default case
				// print an error to the user
					// function: printf
			default: 
				printf("Error: Invalid choice.\n");
			break;
		}

		// prompt the user to continue
			// function: getUserChoice, printf
		printf("\nDo you want to continue?\n");
		continueInt = getUserChoice();
	}
	// end loop
}