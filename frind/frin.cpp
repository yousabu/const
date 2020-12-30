#include<iostream>
using namespace std;

class Account{
    private:
        string name;
        double balance;
    public:
        Account():name("no Name"), balance(0.0){

        }
        Account(string name , double balance){
            setName(name);
            setBalance(balance);
        }
        void setName(string name){
            this->name = name;
        }
        void setBalance(double balance){
            this->balance=balance;
        }
        string getName(){
            return name;
        }
        double getBalance(){
            return balance;
        }
        void withDraw(double amount){
            balance-=amount;
        }
        void deposit(double amount){
            balance+=amount;
        }
        void printBalance();//prototype / signture
};
void Account::printBalance(){
    cout<<"\nMy Balance : "<<getBalance();
}
int main(){
    Account a1;
    Account a2("Youssef ", 2000.0);
    a1.printBalance();
    a1.deposit(100);
    a1.printBalance(); 
    a1.withDraw(30);
    a1.printBalance();
    a1.setBalance(3000);
    a1.printBalance();
    a2.printBalance();
}