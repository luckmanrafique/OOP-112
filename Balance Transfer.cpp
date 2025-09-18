#include<iostream>
using namespace std;
class BankAccount{
private:
    string accountNumber;
    double balance;
public:
    BankAccount(string a,double b){
        accountNumber=a;
        balance=b;
    }
    double getBalance(){
        return balance;
    }
    void setBalance(double b){
        balance=b;
    }
    void showBalance(){
        cout<<"Account no: "<<accountNumber<<endl;
        cout<<"Balance: "<<balance<<endl;
        cout<<"---------------------"<<endl;
    }
};
void transfer(BankAccount &A, BankAccount &B, double amount){
    if(A.getBalance()>=amount){
        B.setBalance(B.getBalance()+amount);
        A.setBalance(A.getBalance()-amount);
        cout<<"Transfer Succesfull"<<endl;
        cout<<"---------------------"<<endl;
    }
    else{
        cout<<"Not enough balance"<<endl;
    }
}
int main(){
    BankAccount A("A001",500);
    BankAccount B("B001",100);
    A.showBalance();
    B.showBalance();
    transfer(A,B,300);
    A.showBalance();
    B.showBalance();
    return 0;
}
