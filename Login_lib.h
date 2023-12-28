// include guards
#ifndef LOGIN_LIB
#define LOGIN_LIB

// header files
#include <stdio.h>
#include <string.h>
#include "dtypes.h"

// function prototypes
/**
 * @brief Prompt the user for their username and store.
 * 
 * Prompt the user for their username, and store in variable username to 
 * return to caller. If user presses enter without anything typed, the function
 * will return.
 * 
 * @param void
 * @return username: the user's username as a string.
 */
char* getUsername();

/**
 * @brief Prompt the user for their password and store.
 * 
 * Prompt the user for their password, and store in variable password to
 * return to caller. This function will not allow the user to quit the program. 
 * Password will be hidden, characters are to be replaced with asterisks.
 * 
 * @param void
 * @return password: the user's password as a string.
 */
char* getPassword();

/**
 * @brief Log the user into their account based upon their username and password.
 * 
 * Given the account list (as a linked list), the username, and the password 
 * of an account, this function will log the user in by having the current user 
 * be pointed to by the return value. From there, the user is free to do whatever
 * they please with their account, provided their information is correct.
 * 
 * @param accountList: a linked list of bank accounts as a pointer to the Account struct.
 * 		  username: the user's username as a string.
 * 		  password: the user's password as a string. 
 * @return userAccount: a pointer to the user's Account struct.
 */
Account* authenticateAccount(Account* accountList, char* username, char* password);

// close guards
#endif // LOGIN_LIB