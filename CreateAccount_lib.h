// include guards
#ifndef CREATEACCOUNT_LIB
#define CREATEACCOUNT_LIB

// header files
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "dtypes.h"

// function prototypes
/**
 * @brief Prompts the user with menu of choices from which to choose an 
 * 		  account to create from.
 * 
 * *INSERT LONGER DESCRIPTION*
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
 * *INSERT LONGER DESCRIPTION*
 * 
 * @param accountType: a character in the form of the enum AccountType 
 * 		  that specifies the type of account the user wants to create.
 * @return newAccount: a pointer to the Account struct created by this 
 * 		   function.
 */
Account createNewAccount(char accountType);

// close guards
#endif // CREATEACCOUNT_LIB