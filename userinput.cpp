#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
    int rollNo;
    string name;

public:
   
    Student(int r, string n) : rollNo(r), name(n)
    {
        cout << "Student Object created" << endl;
    }

    void display()
    {
        cout << "Roll Number: " << rollNo << endl;
        cout << "Name: " << name << endl;
    }

   
    ~Student()
    {
        cout << "Student object destroyed" << endl;
    }
};

int main()
{
    int r;
    string n;

    cout << "Enter roll number: ";
    cin >> r;

    cin.ignore();  
    cout << "Enter name: ";
    getline(cin, n);

    Student s1(r, n);
    s1.display();

    return 0;
}