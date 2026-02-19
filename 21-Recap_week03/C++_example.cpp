#include <iostream>
using namespace std;

//Abstract Base Class
class Account{
protected:
    string name;
    double balance;

public:
    Account(string n, double b){
        name = n;
        balance = b;
    }

    virtual double calculateInterest() = 0;  //Abstraction

    void deposit(double amount){
        balance += amount;
    }

    double getBalance() const{
        return balance;
    }

    //Operator Overloading (>)
    bool operator > (Account& other){
        return balance > other.balance;
    }

    virtual ~Account(){
        cout << "Account closed for: " << name << endl;
    }
};

//Derived Class
class SavingsAccount : public Account{
public:
    SavingsAccount(string n, double b) : Account(n, b) {}

    double calculateInterest() override{   //Polymorphism
        return balance * 0.05;
    }
};

int main(){
    SavingsAccount acc1("Ali", 5000);
    SavingsAccount acc2("Ahmed", 3000);

    cout << "Interest (Ali): " << acc1.calculateInterest() << endl;
    cout << "Interest (Ahmed): " << acc2.calculateInterest() << endl;

    if(acc1 > acc2)   //> overloaded
        cout << "Ali has higher balance" << endl;
    else
        cout << "Ahmed has higher balance" << endl;

    return 0;
}
