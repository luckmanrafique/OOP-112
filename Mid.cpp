#include <iostream>
using namespace  std;
class BookStall {
private:
    string name;
    string address;
    string contactinfo;
    double balance;
public:
    BookStall() {
        name = "" ;
        address = " ";
        contactinfo = " ";
        balance = 0.0;
    }
    BookStall(string n,string a,string c,double b){
        this->name=n;
        this->address=a;
        this->contactinfo=c;
        this->balance=b;
    }
    ~BookStall() {

    }
    double get_balace(){
        return balance;
    }
    void set_balance(double b){
        balance=b;
    }
    void input_book_stall(){
        cout<<"Name: ";
        cin>>name;
        cout<<"Address: ";
        cin>>address;
        cout<<"Contact info:";
        cin>>contactinfo;
        cout<<"Balance: ";
        cin>>balance;
    }
};
class Customer;
class Book {
private:
    string name;
    string author;
    int numberOfCopiesAvailabe;
    double price;
public:
    Book(){
        name=" ";
        author=" ";
        numberOfCopiesAvailabe=0;
        price=0.0;
    }
    Book(string n,string a, int c,double p){
        this->name=n;
        this->author=a;
        this->numberOfCopiesAvailabe=c;
        this->price=p;
    }
    ~Book(){

    }
    int get_copies(){
        return numberOfCopiesAvailabe;
    }
    int set_copies(int copy){
        numberOfCopiesAvailabe=copy;
    }
    string get_name(){
        return name;
    }
    double get_price(){
        return price;
    }
    void input_book_list(){
        cout<<"Name: ";
        cin>>name;
        cout<<"Author: ";
        cin>>author;
        cout<<"Number of copies availabe: ";
        cin>>numberOfCopiesAvailabe;
        cout<<"Price: ";
        cin>>price;
    }
    friend void Customer(Book b);
};
class Customer{
private:
    string name;
    string nationalID;
    double wallet;
    string deliveryAddress;
    string contactInfo;
public:
    Customer(){
        name=" ";
        nationalID=" ";
        wallet=0.0;
        deliveryAddress=" ";
        contactInfo=" ";
    }
    Customer(string n, string id, double w,string d,string c){
        this->name=n;
        this->nationalID=id;
        this->wallet=w;
        this->deliveryAddress=d;
        this->contactInfo=c;
    }
    ~Customer(){

    }
    double get_balance(){
        return wallet;
    }
    void set_Balance(double b){
        wallet=b;
    }
    void inputCustomer(){
        cout<<"Name: ";
        cin>>name;
        cout<<"National ID: ";
        cin>>nationalID;
        cout<<"Wallet: ";
        cin>>wallet;
        cout<<"Delivery Address: ";
        cin>>deliveryAddress;
        cout<<"Contact info: ";
        cin>>contactInfo;
        cout<<endl;
    }
    void showPersonalInfo(){
        cout<<"Name: "<<name<<endl;
        cout<<"National ID: "<<nationalID<<endl;
        cout<<"Wallet Balace: "<<wallet<<endl;
        cout<<"Delivery Addresss: "<<deliveryAddress<<endl;
        cout<<"Contact Info: "<<contactInfo<<endl;
        cout<<endl;
    }
    void purchase(Book book);
};
void Customer::purchase(Book book){
    string name;
    cout<<"Enter book name you want to purchase:";
    cin>>name;
    if(name==book.get_name()){
        if(this->get_balance()>=book.get_price()){
            int number;
            cout<<"How many number ofd  copues you want to buy:";
            cin>>number;
            cout<<"Bought Successfull"<<endl;
            this->set_Balance(this->get_balance()-book.get_price());
            book.set_copies(book.get_copies()-number);
        }
    }else cout<<"Book not found"<<endl;
}
int main() {
    /*int t=15;
    Book b[t];
    for(int i=1;i<=t;i++){
        cout<<i;
        b[i].input_book_list();
    }*/
    Book b[15];
    int x=3;
    BookStall bs[x];
    for(int i=1;i<x;i++){
        bs[i].input_book_stall();
        for(int i=1;i<5;i++){
            cout<<"Info of book "<<i;
            b[i].input_book_list();
        }
    }
    int n=5;
    Customer c[n];
    for(int i=0;i<n;i++){
        cout<<"Enter Info For Customer "<<i+1 <<endl;
        c[i].inputCustomer();
    }
    for(int i=0;i<n;i++){
        cout<<"Info of Customer "<<i+1 <<endl;
        c[i].showPersonalInfo();
    }
    
    return 0;
}
