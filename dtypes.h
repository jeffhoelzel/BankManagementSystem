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
	TRANSFER,
	PURCHASE,
	VIEW_BAL,
	DELETE
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

// close guards
#endif // DTYPES