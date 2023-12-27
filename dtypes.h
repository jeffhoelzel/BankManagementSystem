// include guards
#ifndef DTYPES
#define DTYPES

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

// close guards
#endif // DTYPES