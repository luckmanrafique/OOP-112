#include<iostream>
using namespace std;
class Student{
private:
    string name;
    string ID;
    double cgpa;
public:
    Student(string n,string i,double c){
        name=n;
        ID=i;
        cgpa=c;
    }
    Student(){
        name=" ";
        ID=" ";
        cgpa=0.0;
    }
    void setName(string n){
        name=n;
    }
    void setID(string i){
        ID=i;
    }
    void setCgpa(double c){
        cgpa=c;
    }
    string getName(){
        return name;
    }
    string getID(){
        return ID;
    }
    double getCgpa(){
        return cgpa;
    }
    void display(){
        cout<<"--------------------"<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"ID: "<<ID<<endl;
        cout<<"CGPA: "<<cgpa<<endl;
    }
    void input(){
        cout<<"Name: ";
        cin>>name;
        cout<<"ID: ";
        cin>>ID;
        cout<<"CGPA: ";
        cin>>cgpa;
    }
};
int main(){
    Student s1,s2;
    s1.input();
    cout<<"---------------"<<endl;
    s2.input();
    s1.display();
    s2.display();
    return 0;
}
