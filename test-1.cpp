#include<iostream>
using namespace std;
class Car{
    string model;
public:
    Car (string m){
        model=m;
    }
    void display(){
        cout<<"Model: "<<model<<endl;
    }
};
int main(){
    Car car1("Mitsubishi");
    car1.display();
    return 0;
}