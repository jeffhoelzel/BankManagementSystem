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

typedef enum accountType {
	CHECKING = 'C',
	SAVINGS = 'S',
	BROKERAGE = 'B',
	RETIREMENT = 'R',
	LINE_CREDIT = 'L'
} AccountType;

// close guards
#endif // DTYPES