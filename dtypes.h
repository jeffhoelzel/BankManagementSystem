// include guards
#ifndef DTYPES
#define DTYPES

// global constants
#define ABORT_CHAR 'Q'

// data types
typedef struct account {
	struct account* nextAccount;
	char username[64];
	char password[64];
	char accountType;
	int userAge;
	double amount;
} Account;

typedef enum accountTypes {
	CHECKING = 'C',
	SAVINGS = 'S',
	RETIREMENT = 'R'
} AccountTypes;

// close guards
#endif // DTYPES