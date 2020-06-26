#include <vector>
#include <string>
#include "Transaction.h"


//never using a namespace in a header file, because an error can occur, spell it out

/// <summary>
/// class that calls the Account but 
/// needs to connect to the Transaction header
/// </summary>
class Account
{

	private:
		int balance;
		std::vector<Transaction> log;
	/// <summary>
	/// calls the public functions
	/// </summary>
	public:
		Account();
		std::vector<std::string> Report();
		bool Deposit(int amt);
		bool Withdraw(int amt);
		int GetBalance() { return balance; } //putting the brackets makes it an inline function
};