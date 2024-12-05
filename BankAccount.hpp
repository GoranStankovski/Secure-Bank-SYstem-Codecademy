#ifndef BANKACCOUNT_HPP
#define BANKACCOUNT_HPP
#include <string>

class BankAccount{
  private:
    std::string accountNumber;
    double balance;

  public:
    BankAccount(std::string accNumber,  double initialBalance);

    std::string getAccountNumber() const;
    double getBalance() const;

    void setAccountNumber(const std::string accNumber);
    void setBalance(const double newBalance);

     class Transaction {
       public:
        static void deposit(BankAccount& account, double amount);
        static void withdraw(BankAccount& account, double amount);
    };

};

#endif

