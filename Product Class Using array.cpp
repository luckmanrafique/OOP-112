#include<iostream>
using namespace std;
class Product{
private:
    string name;
    string id;
    float price;
public:
    Product(){
        name=" ";
        id=" ";
        price=0.0;
    }
    Product(string n,string i,float p){
        name=n;
        id=i;
        price=p;
    }
    void input(){
        cout<<"Product name: ";
        cin>>name;
        cout<<"Product ID: ";
        cin>>id;
        cout<<"Price: ";
        cin>>price;
    }
    void display(){
        cout<<"Product name: "<<name<<endl;
        cout<<"Product ID: "<<id<<endl;
        cout<<"Product price: "<<price<<endl;
        cout<<"----------------------"<<endl;
    }
    float getPrice(){
        return price;
    }
};
int main(){
    Product products[2];
    float totalPrice=0.0;
    for(int i=0;i<2;i++){
        cout<<"Enter details for product "<<(i+1)<<":"<<endl;
        products[i].input();
    }
    cout<<"--------------------"<<endl;
    cout<<"Product details: "<<endl;
    for(int i=0;i<2;i++){
        products[i].display();
        totalPrice+=products[i].getPrice();
    }
    cout<<"Total price of all products: "<<totalPrice<<endl;
    return 0;
}
