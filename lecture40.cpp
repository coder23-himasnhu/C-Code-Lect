// Type of Inheritance:-
// 1) Single Inheritance:-A single derived class inherits from a single base class
// destructor call in reverse order of constructor

// eg:-
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



// MultipleLevel Inheritance:-

// #include<iostream>
// using namespace std;

// class Person
// {
//     protected:
//     string name;

//     public:
//     void introduce()
//     {
//         cout<<"hello my name is "<<name<<endl;
//     }
// };

// class Employee: public Person{
//     protected:
//     int salary;

//     public:
//     void monthly_salary()
//     {
//         cout<<"My monthly salary is "<<salary<<endl;
//     }
// };

// class Manager: public Employee
// {
//     public:
//     string department;

//     Manager(string name, int salary, string department)
//     {
//         this->name = name;
//         this->salary = salary;
//         this->department = department;
//     };
//     void work()
//     {
//         cout<<"I am leading the department"<<department<<endl;
//     }
// };

// int main()
// {
//     Manager A1("Rohit", 200, "Finance");
//     A1.work();
//     A1.monthly_salary();
//     A1.introduce();
//     A1.department = "ro";  //we can write in it because, it is public
// }



// Multiple Inheritance

#include<iostream>
using namespace std;

class Engineer
{
    public:
    string specialization;

    void work()
    {
        cout<<"I have specialization in "<<specialization<<endl;
    }
};

class Youtuber
{
    public:
    int subscribers;

    void contentcreator()
    {
        cout<<"I have a subscriber base of "<<subscribers<<endl;
    }
};

class CodeTeacher: public Engineer, public Youtuber  //pehle konsa constructor call hoga wo yaha decide hoga(Engineer ya Youtuber)
{
    public:
    string name;

    CodeTeacher(string name, string specialization, int subscribers)
    {
        this->name = name;
        this->specialization = specialization;
        this->subscribers = subscribers;
    }

    void showcase()
    {
        cout<<"My name is "<<name<<endl;
        work();
        contentcreator();
    }
};

int main()
{
    CodeTeacher A1("Rohit", "CSE", 49000);
    A1.showcase();
}


// 40 minute