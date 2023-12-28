// include guards
#ifndef DTYPES
#define DTYPES

// header files
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

// global constants
#define ABORT_CHAR 'Q' // for function terminations returning chars
#define ENTER '\n' // if user presses ENTER key
#define TAB '\t' // if user presses TAB key
#define BACKSPACE '\b' // if user presses BACKSPACE key

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

// close guards
#endif // DTYPES