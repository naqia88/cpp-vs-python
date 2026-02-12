#include <iostream>

class BankAccount{
private:
    double balance;   //Encapsulated data

public:
    BankAccount(double b){
        balance = b;
    }

    void deposit(double amount){
        if(amount > 0)
            balance += amount;
    }

    double getBalance(){
        return balance;
    }
};

int main(){
    BankAccount acc(1000);
    acc.deposit(500);
    std::cout << "Balance: " << acc.getBalance() << std::endl;
    return 0;
}
