#include "Bank.hpp"


Bank::Bank() {
}

void Bank::createAccount(const std::string& accountNumber, double initialBalance){
  BankAccount newAccount (accountNumber, initialBalance);
  accounts.push_back(newAccount);
}

BankAccount* Bank::findAccount(const std::string& accountNumber){
  for(int i = 0; i < accounts.size(); i++){
     if (accounts[i].getAccountNumber() == accountNumber) {
            return &accounts[i]; 
        }
  }
  return nullptr;
}

int Bank::transferMoney(const std::string& sourceAccountNumber, const std::string& targetAccountNumber, double amount) {
    BankAccount* sourceAccount = findAccount(sourceAccountNumber);
    BankAccount* targetAccount = findAccount(targetAccountNumber);

    if (sourceAccount == nullptr || targetAccount == nullptr) {
        return 2; // Account Not Found
    }

    if (sourceAccount->getBalance() >= amount) {
        BankAccount::Transaction::withdraw(*sourceAccount, amount); // Withdraw from source account
        BankAccount::Transaction::deposit(*targetAccount, amount); // Deposit into target account
        return 1; // Success
    } else {
        return 3; // Insufficient Funds
    }
}




