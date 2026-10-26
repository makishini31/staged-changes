#include<iostream>
using namespace std;
class Student
{
    private:
    int rollNo;
    string name;
    public:
    //Constructor
    Student (int r, string n)
    {
        rollNo = r;
        name = n;
        cout<<"Student Object created"<<endl;
    }
    //Member function
    void display()
    {
        cout<<"Roll Number:"<<rollNo<<endl;
    }
    //Destructor
    ~Student()
    {
        cout<<"Student object destroyed"<<endl;
    }
};
int main()
{
    Student s1(101,"Arun");
    s1. display();
    return 0;
}