// include guards
#ifndef ACCOUNTINTERACTION_LIB
#define ACCOUNTINTERACTION_LIB

// header files
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "dtypes.h"

// function prototypes
/**
 * @brief Print a menu displaying all of the options the user has choose from 
 * 		  regarding interacting with their specific account.
 * 
 * *INSERT LONGER DESCRIPTION*
 * 
 * @param accountType: a character representing the type of account the user owns.
 * @return choice: the user's choice picked from the menu
 */
int getUserActionChoice(char accountType);

/**
 * @brief Allow the user to tranfer money from their current account to another 
 * 		  account given that account's username.
 * 
 * *INSERT LONGER DESCRIPTION*
 * 
 * @param userAccount: a pointer to the user's account. 
 * @return void
 */
void transferMoney(Account* userAccount);

/**
 * @brief Allow the user to pay off any debt accrued on their account.
 * 
 * *INSERT LONGER DESCRIPTION*
 * 
 * @param userAccount: a pointer to the user's account.
 * @return void
 */
void payDebt(Account* userAccount);

/**
 * @brief Allow the user to make a purchase.
 * 
 * *INSERT LONGER DESCRIPTION*
 * 
 * @param userAccount: a pointer to the user's account.
 * 		  cost: the cost of the purchase as a double.
 * @return void
 */
void purchaseItem(Account* userAccount, double cost);

/**
 * @brief Allow the user to view the balance of their account.
 * 
 * *INSERT LONGER DESCRIPTION*
 * 
 * @param userAccount: a pointer to the user's account.
 * @return void
 */
void viewBalance(Account* userAccount);

/**
 * @brief User can choose what to do with their account based upon return value
 * 		  from the getUserActionChoice function.
 * 
 * *INSERT LONGER DESCRIPTION*
 * 
 * @param choice: an integer representing the user's choice from 
 * 				  getUserActionChoice.
 * @return void
 */
void interact(int choice);

// close guards
#endif // ACCOUNTINTERACTION_LIB