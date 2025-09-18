#include<iostream>
using namespace std;
class Student;
class Faculty{
public:
    void display(Student &s);
};
class Student{
private:
    string studentID;
protected:
    string name;
public:
    Student(string i,string n){
        studentID=i;
        name=n;
    }
    friend void Faculty::display(Student &s);
};
void Faculty::display(Student &s){
    cout<<"Student ID: "<<s.studentID<<endl;
    cout<<"Student name: "<<s.name<<endl;
}
int main(){
    Student s("012","Alex");
    Faculty f;
    f.display(s);
    return 0;
}
