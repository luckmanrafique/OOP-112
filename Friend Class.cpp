#include<iostream>
using namespace std;
class Versity;
class Department{
public:
    void print(Versity &v);
};
class Versity{
private:
    string name;
protected:
    string location;
public:
    Versity(){
        name="BUBT";
        location="Dhaka";
    }
    friend void Department::print(Versity &v);
};
void Department::print(Versity &v){
    cout<<"Versity name: "<<v.name<<endl;
    cout<<"Location: "<<v.location<<endl;
}
int main(){
    Versity mV;
    Department mD;
    mD.print(mV);
    return 0;
}
