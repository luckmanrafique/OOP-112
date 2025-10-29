#include<iostream>
using namespace std;
class Bkash_pay{
private:
    double amount;
public:
    Bkash_pay(){
        this->amount=0.0;
    }
    ~Bkash_pay(){}
    void set_Bkash_amount(int bp){
        amount=bp;
    }
    inline double get_Bkash_amount(){
        return amount;
    }
};
class Nogod_pay{
private:
    double amount;
public:
    Nogod_pay(){
        this->amount=0.0;
    }
    ~Nogod_pay(){}
    void set_Nogod_amount(int bp){
        amount=bp;
    }
    inline double get_Nogod_amount(){
        return amount;
    }
};
class Lucky_payment:Bkash_pay,Nogod_pay{
private:
    double amount;
    double bp;
    double np;
public:
    Lucky_payment(){
        this->amount=0.0;
    }
    ~Lucky_payment(){}
    void set_Bkash_balace(double bp){
        set_Bkash_amount(get_Bkash_amount()+bp);
    }
    void set_Nogod_balace(double np){
        set_Nogod_amount(get_Nogod_amount()+np);
    }
    inline double get_Bkash_balace(){
        return get_Bkash_amount();
    }
    inline double get_Nogod_balace(){
        return get_Nogod_amount();
    }
};
void display(){
    cout<<"1. Bkash"<<endl;
    cout<<"2. Nogod"<<endl;
}
int main(){
    Lucky_payment pay;
    display();
    int choice;
    cout<<"Enter a number:";
    cin>>choice;
    if(choice==1){
        int amount;
        cout<<"Enter amount:";
        cin>>amount;
        pay.set_Bkash_balace(amount);
        cout<<"Your transaction has been successsfull"<<endl;
        cout<<"==========================="<<endl;
        cout<<"Your new balace is:"<<pay.get_Bkash_balace()<<endl;
    }
    if(choice==2){
        int amount;
        cout<<"Enter amount:";
        cin>>amount;
        pay.set_Nogod_balace(amount);
        cout<<"Your transaction has been successsfull"<<endl;
        cout<<"==========================="<<endl;
        cout<<"Your new balace is:"<<pay.get_Nogod_balace()<<endl;
    }
    return 0; 
}
