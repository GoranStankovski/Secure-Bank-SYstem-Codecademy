#include <iostream>
#include "BankAccount.hpp"
#include "Bank.hpp"


int main(){

  Bank myBank;

  myBank.createAccount("1001", 5000.00);
  myBank.createAccount("1002", 3000.00);
  myBank.createAccount("1003", 2000.00);

  BankAccount* account1 = myBank.findAccount("1001");
  BankAccount* account2 = myBank.findAccount("1002");
  BankAccount* account3 = myBank.findAccount("1003");

 if (account1) {
        std::cout << "Account 1001 initial balance: $" << account1->getBalance() << std::endl;
    }

    if (account2) {
        std::cout << "Account 1002 initial balance: $" << account2->getBalance() << std::endl;
    }

    if (account3) {
        std::cout << "Account 1003 initial balance: $" << account3->getBalance() << std::endl;
    }

     int transferStatus = myBank.transferMoney("1001", "1002", 1000.00); // Transfer $1000 from Account 1001 to Account 1002

       if (transferStatus == 1) {
        std::cout << "Transfer successful!" << std::endl;
    } else if (transferStatus == 2) {
        std::cout << "Account Not Found!" << std::endl;
    } else if (transferStatus == 3) {
        std::cout << "Insufficient Funds!" << std::endl;
    }

     account1 = myBank.findAccount("1001");
    account2 = myBank.findAccount("1002");

    if (account1) {
        std::cout << "Account 1001 new balance: $" << account1->getBalance() << std::endl;
    }

    if (account2) {
        std::cout << "Account 1002 new balance: $" << account2->getBalance() << std::endl;
    }

    return 0;
}









