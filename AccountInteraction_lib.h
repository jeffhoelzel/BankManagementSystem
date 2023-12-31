// include guards
#ifndef ACCOUNTINTERACTION_LIB
#define ACCOUNTINTERACTION_LIB

// header files
#include "dtypes.h"
#include "Login_lib.h"

// function prototypes
/**
 * @brief Allow the user to tranfer money from their current account to another 
 * 		  account given that account's username.
 * 
 * Given a pointer to the user's account and the head of the account's list, prompt them for 
 * a username and dollar amount to transfer money from their current account to this other 
 * account, and then print a receipt for their transaction.
 * 
 * @param userAccount: a pointer to the user's account. 
 * 		  headAccount: a pointer to the head of the account's list.
 * @return void
 */
void transferMoney(Account* userAccount, Account* headAccount);

/**
 * @brief Allow the user to deposit money to their current account.
 * 
 * Given a pointer to the user's account allow the user to deposit a dollar amount to their 
 * account.
 * 
 * @param userAccount: a pointer to the user's account. 
 * @return void
 */
void depositMoney(Account* userAccount);

/**
 * @brief Allow the user to withdraw money to their current account.
 * 
 * Given a pointer to the user's account allow the user to withdraw a dollar amount to 
 * their account.
 * 
 * @param userAccount: a pointer to the user's account. 
 * @return void
 */
void withdrawMoney(Account* userAccount);

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
 * Prompt the user to delete their account if the username matches one in memory
 * and password they provided is correct. Correctly restructure the linked list
 * if neccessary and notify user if account deletion is successful.
 * 
 * @param headAccount: a pointer to the head of the account's list.
 * @return true if function found and deleted the account and false otherwise.
 */
bool deleteAccount(Account* headAccount);

/**
 * @brief Print a menu displaying all of the options the user has choose from 
 * 		  regarding interacting with their specific account.
 * 
 * Given the account type as a character from a pointer to the user's account, print a list 
 * specific to that type of account and allow the user to pick from it. Return an integer 
 * value representing which option the user decided to choose.
 * 
 * @param accountType: a character representing the type of account the user owns.
 * 		  userAccount: a pointer to the user's account.
 * @return choice: the user's choice picked from the menu as a character.
 */
char getUserActionChoice(Account* userAccount);

/**
 * @brief User can choose what to do with their account based upon return value
 * 		  from the getUserActionChoice function.
 * 
 * Implement the entire system for the user's choice and execution based upon the 
 * integer value of their choice and given a pointer to their logged-in account.
 * 
 * @param userAccount: a pointer to the user's account.
 * @return void
 */
void interact(Account* userAccount);

// close guards
#endif // ACCOUNTINTERACTION_LIB