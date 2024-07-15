// #include<iostream>
// using namespace std;

// class Human
// {
//     protected:
//     string name;
//     int age;

//     public:
//     void work()
//     {
//         cout<<"I am WOrking\n" ;
//     }
// };
// class Student: public Human
// {
//     int roll_number, fees;

//     public:
//     Student(string name, int age, int roll_num, int fees)
//     {
//         this->name = name;
//         this->age = age;
//         this->roll_number = roll_num;
//         this->fees = fees;
//     }
// };
// int main()
// {
//     Student A1("Rohit", 26, 32, 99);
//     A1.work();
// }



#include<iostream>
using namespace std;

class Human
{
    string name;
    int age;
}
class Student:public Human
{
    int roll;

    Student(string name, int age, int roll)
    {
        this->name = name;
        this->age = age;
        this->roll = roll;
    }
}

int main()
{
    Student S1;
    S1.
}