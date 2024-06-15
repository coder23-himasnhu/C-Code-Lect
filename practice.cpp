// copy constructor

#include<iostream>
using namespace std;

class Student
{
    public:
    string name;
    int roll;
};
int main()
{
    Student A1;
    A1.name = "himanshu";
    cout<<A1.name;
}