#include<iostream>
using namespace std;
class Student{
private:
    string name;
    int ID;
    string department;
public:
    Student(){
        name="Unknown";
        ID=0.0;
        department="CSE";
    }
    Student(string n,int i,string d){
        name=n;
        ID=i;
        department=d;
    }
    void show(){
        cout<<"Name: "<<name<<endl;
        cout<<"ID: "<<ID<<endl;
        cout<<"Dept: "<<department<<endl;
        cout<<"----------------------"<<endl;
    }
};
int main(){
    Student s1;
    cout<<"Default constructor object"<<endl;
    s1.show();

    Student s2("Alex",42,"CSE");
    cout<<"Parameterized constructor object"<<endl;
    s2.show();
    return 0;
}
