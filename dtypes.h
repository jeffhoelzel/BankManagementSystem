// include guards
#ifndef DTYPES
#define DTYPES

// header files
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>

// global constants
#define ABORT_CHAR 'Q' // for function terminations returning chars
#define ENTER 13 // if user presses ENTER key (ASCII value)
#define TAB 9 // if user presses TAB key (ASCII value)
#define BACKSPACE 8 // if user presses BACKSPACE key (ASCII value)
#define MAX_SIZE 64 // max size of username and password buffers
#define MAX_MONEY_SIZE 16 // max size of money adding, withdrawing, and transfering buffers
#define SALES_TAX 0.086 // sales tax as a decimal for my current location

// data types
typedef struct account {
	struct account* nextAccount;
	char username[64];
	char password[64];
	char type;
	int age;
	double amount;
} Account;

typedef enum accountTypes {
	CHECKING = 'C',
	SAVINGS = 'S',
	RETIREMENT = 'R'
} AccountTypes;

typedef enum userChoices {
	DEPOSIT = 'D',
	WITHDRAW = 'W',
	TRANSFER = 'T',
	PURCHASE = 'P',
	VIEW_BAL = 'V',
	REMOVE_ACC = 'R'
} UserChoices;

// global function prototypes
/**
 * @brief Check if the user pressed ENTER key.
 * 
 * Check if the user pressed the ENTER key by comparing string to newline character.
 * 
 * @param userInput: the user's input which may or may not be a newline character.
 * @return true if the string is a newline character and false otherwise.
 */
bool checkIfEnter(char* userInput);
/**
 * @brief Prompts the to enter a choice, 'Y' or 'N'. 
 * 
 * Prompt the user to enter either 'Y' for yes, or 'N' for no. If the user 
 * pressed ENTER ask them to confirm they pressed ENTER and end the program 
 * if so. Otherwise, allow them to try again in the event of a misspress.
 * 
 * @param void
 * @return userChoice: a character either 'Y' or 'N'
 */
char getUserChoice();

// close guards
#endif // DTYPES