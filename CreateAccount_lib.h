// include guards
#ifndef CREATEACCOUNT_LIB
#define CREATEACCOUNT_LIB

// header files
#include "dtypes.h"

// head of accounts linked list
extern Account* headAccount;

// function prototypes
/**
 * @brief Prompts the user with menu of choices from which to choose an 
 * 		  account to create from.
 * 
 * Prompt the user to enter a choice of account types using the enum AccountTypes
 * located in the dtypes.h libarary. Check to make sure user entered a valid 
 * charcter, if they pressed ENTER, ask them to press ENTER again to ensure 
 * they want to end the program. If they pressed a character that is not valid 
 * (i.e. not on the list), allow the user to try again. When the user enters a 
 * valid character, save and return that character to be used in other functions.
 * 
 * @param void
 * @return userChoice: a character representing the type of account the 
 * 		   user wants to create.
 */
char getUserAccountChoice();

/**
 * @brief Creates a bank account for the user where certain accounts can 
 * 		  perform certain actions.
 * 
 * Using the Account struct from the dtypes.h libarary, create a new account. 
 * Prompt the user to enter a username and password for this online bank account,
 * and make sure they confirm this password by typing it in again; if the passwords 
 * do not match, have them re-enter their password from start to finish. Prompt the
 * user to enter their age (must be between 13 and 120), and an amount of money they wish to
 * load onto the account (must be positive and less than $10,000.00). Have the struct
 * field nextAccount point to the next available account in the linked list.
 * 
 * @param accountType: a character in the form of the enum AccountType 
 * 		  that specifies the type of account the user wants to create.
 * @return newAccount: a pointer to the Account struct created by this 
 * 		   function.
 */
Account* createNewAccount(char accountType);

// close guards
#endif // CREATEACCOUNT_LIB