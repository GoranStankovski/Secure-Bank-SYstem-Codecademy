#ifndef BANK_HPP
#define BANK_HPP

#include "BankAccount.hpp"
#include <vector>

class Bank{
  private:
  std::vector<BankAccount> accounts;

  public:
  Bank();

  void createAccount(const std::string& accountNumber, double initialBalance);

  BankAccount* findAccount(const std::string& accountNumber);
  
  int transferMoney(const std::string& sourceAccountNumber, const std::string& targetAccountNumber, double amount);
};
#endif






