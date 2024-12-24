#include<iostream>
using namespace std;

class Student
{
    public:
    string name;
    int roll;
    Student()
    {
        cout<<"default constructor";
    }
};

int main()
{
    Student s;
}