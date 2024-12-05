#include "BankAccount.hpp"
#include <iostream>

BankAccount::BankAccount(std::string accNumber,  double initialBalance): accountNumber(accNumber), balance(initialBalance){}

std::string BankAccount::getAccountNumber()const  {
  return accountNumber;
}

double BankAccount::getBalance()const  {
  return balance;
}

void BankAccount::setAccountNumber(const std::string accNumber){
  accountNumber = accNumber;
}

void BankAccount::setBalance(const double newBalance){
  balance = newBalance;
}

void BankAccount::Transaction::deposit(BankAccount& account, double amount){
  if(amount>0){
    account.balance += amount;
    std::cout << "Deposited: " << amount << ", New Balance: $" << account.balance << std::endl;
  }else{
    std::cout << "Invalid deposit amount." << std::endl;
  }
}

void BankAccount::Transaction::withdraw(BankAccount& account, double amount) {
    if (amount > 0 && amount <= account.balance) {
        account.balance -= amount;
        std::cout << "Withdrawn: $" << amount 
                  << ", New Balance: $" << account.balance << std::endl;
    } else if (amount > account.balance) {
        std::cout << "Insufficient funds for withdrawal." << std::endl;
    } else {
        std::cout << "Invalid withdrawal amount." << std::endl;
    }
}








