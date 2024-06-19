// Type of Inheritance:-
// 1) Single Inheritance:-A single derived class inherits from a single base class
// destructor call in reverse order of constructor

// eg:-
#include<iostream>
using namespace std;

class Human
{
    protected:
    string name;
    int age;

    public:
    void work()
    {
        cout<<"I am WOrking\n" ;
    }
};
class Student: public Human
{
    int roll_number, fees;

    public:
    Student(string name, int age, int roll_num, int fees)
    {
        this->name = name;
        this->age = age;
        this->roll_number = roll_num;
        this->fees = fees;
    }
};
int main()
{
    Student A1("Rohit", 26, 32, 99);
    A1.work();
}



// MultipleLevel Inheritance:-