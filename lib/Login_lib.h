// include guards
#ifndef LOGIN_LIB
#define LOGIN_LIB

// header files
#include <stdio.h>
#include <string.h>

// function prototypes
/**
 * @brief Prompt the user for their username and store.
 * 
 * *INSERT LONGER DESCRIPTION*
 * 
 * @param void
 * @return username: the user's username as a string.
 */
char* getUsername();

/**
 * @brief Prompt the user for their password and store.
 * 
 * *INSERT LONGER DESCRIPTION*
 * 
 * @param void
 * @return password: the user's password as a string.
 */
char* getPassword();

/**
 * @brief Log the user into their account based upon their username and password.
 * 
 * *INSERT LONGER DESCRIPTION*
 * 
 * @param accountList: a linked list of bank accounts as a pointer to the Account struct.
 * 		  username: the user's username as a string.
 * 		  password: the user's password as a string. 
 * @return userAccount: a pointer to the user's Account struct.
 */
Account* authenticateAccount(Account* accountList, char* username, char* password);

// close guards
#endif