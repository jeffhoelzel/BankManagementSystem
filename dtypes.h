// include guards
#ifndef DTYPES
#define DTYPES

// data types
typedef struct account {
	char username[64];
	char password[64];
	char accountType;
	int userAge;
	double amount;
	struct Account* nextAccount;
} Account;

typedef enum accountTypes {
	CHECKING = 'C',
	SAVINGS = 'S',
	RETIREMENT = 'R'
} AccountTypes;

// close guards
#endif // DTYPES