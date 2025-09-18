#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int age;
    char grade;

public:
    Student(string n, int a, char g) {
        name = n;
        age = a;
        grade = g;
    }

    void showInfo() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Grade: " << grade << endl;
        cout << "----------------------" << endl;
    }
};

int main() {
    Student students[2] = {
        Student("Alex", 20, 'A'),
        Student("Henry", 22, 'B')
    };

    for (int i = 0; i < 2; i++) {
        students[i].showInfo();
    }

    return 0;
}
