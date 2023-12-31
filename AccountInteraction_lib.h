// include guards
#ifndef ACCOUNTINTERACTION_LIB
#define ACCOUNTINTERACTION_LIB

// header files
#include "dtypes.h"

// function prototypes
/**
 * @brief Allow the user to tranfer money from their current account to another 
 * 		  account given that account's username.
 * 
 * Given a pointer to the user's account, prompt them for a username and dollar amount to 
 * transfer money from their current account to this other account, and then print a receipt 
 * for their transaction.
 * 
 * @param userAccount: a pointer to the user's account. 
 * @return void
 */
void transferMoney(Account* userAccount);

/**
 * @brief Allow the user to make a purchase.
 * 
 * Given a pointer to the user's account, the total cost of the item, and the name of the
 * item itself, remove the cost of the item from the user's account and then print a receipt
 * of the transaction including cost, sales tax, and the name of the item.
 * 
 * @param userAccount: a pointer to the user's account.
 * 		  cost: the cost of the purchase as a double.
 * 		  item: the item the user is going to purchase as a string.
 * @return void
 */
void purchaseItem(Account* userAccount, double cost, char item[64]);

/**
 * @brief Allow the user to view the balance of their account.
 * 
 * Given a pointer to the user's account, print the balance for the user to view.
 * 
 * @param userAccount: a pointer to the user's account.
 * @return void
 */
void viewBalance(Account* userAccount);

/**
 * @brief Deletes an account after being provided with a username and 
 * 		  password. 
 * 
 * Given a pointer to the user's account, allow them to delete their account if the 
 * username and password they provided is correct. Correctly restructure the linked list
 * if neccessary and notify user if account deletion is successful.
 * 
 * @param void
 * @return void
 */
void deleteAccount();

/**
 * @brief Print a menu displaying all of the options the user has choose from 
 * 		  regarding interacting with their specific account.
 * 
 * Given the account type as a character, print a list specific to that type of account
 * and allow the user to pick from it. Return an integer value representing which option the 
 * user decided to choose.
 * 
 * @param accountType: a character representing the type of account the user owns.
 * @return choice: the user's choice picked from the menu
 */
int getUserActionChoice(char accountType);

/**
 * @brief User can choose what to do with their account based upon return value
 * 		  from the getUserActionChoice function.
 * 
 * Implement the entire system for user choice and execution based upon the integer value
 * of their choice.
 * 
 * @param choice: an integer representing the user's choice from 
 * 				  getUserActionChoice.
 * @return void
 */
void interact(int choice);

// close guards
#endif // ACCOUNTINTERACTION_LIB