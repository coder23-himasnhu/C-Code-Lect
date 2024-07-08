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



// Multiple Inheritance:- bahut sare parents honge children ek hi hoga

// #include<iostream>
// using namespace std;

// class Engineer
// {
//     public:
//     string specialization;

//     void work()
//     {
//         cout<<"I have specialization in "<<specialization<<endl;
//     }
// };

// class Youtuber
// {
//     public:
//     int subscribers;

//     void contentcreator()
//     {
//         cout<<"I have a subscriber base of "<<subscribers<<endl;
//     }
// };

// class CodeTeacher: public Engineer, public Youtuber  //pehle konsa constructor call hoga wo yaha decide hoga(Engineer ya Youtuber)
// {
//     public:
//     string name;

//     CodeTeacher(string name, string specialization, int subscribers)
//     {
//         this->name = name;
//         this->specialization = specialization;
//         this->subscribers = subscribers;
//     }

//     void showcase()
//     {
//         cout<<"My name is "<<name<<endl;
//         work();
//         contentcreator();
//     }
// };

// int main()
// {
//     CodeTeacher A1("Rohit", "CSE", 49000);
//     A1.showcase();
// }


// Hierarchial Inheritance:- parent ek hi hoga aur bahut sare children honge jo apne parent ke property ko inherit karenge

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
// class Teacher: public Human
// {
//     int salary;

//     public:
//     Teacher(int salary, string name, int age)
//     {
//         this->salary = salary;
//         this->name = name;
//         this->age = age;
//     }
//     void display()
//     {
//         cout<<name<<" "<<age<<" "<<salary<<" "<<endl;
//     }
// };
// int main()
// {
//     Student A1("Rohit", 26, 32, 99);
//     A1.work();
//     Teacher A2(99, "Mohit", 23);
//     A2.display();
// }


// Hybrid Inheritance:- The combination of all inheritance

// #include<iostream>
// using namespace std;

// class Student
// {
//     public:
//     void print()
//     {
//         cout<<"I am Student\n";
//     }
// };
// class Male
// {
//     public:
//     void Maleprint()
//     {
//         cout<<"I am Male\n";
//     }
// };
// class Female
// {
//     public:
//     void Femaleprint()
//     {
//         cout<<"I am Female\n";
//     }
// };
// class Boy: public Student, public Male
// {
//     public:
//     void Boyprint()
//     {
//         cout<<"I am Boy\n";
//     };
// };
// class Girl: public Student, public Female
// {
//     public:
//     void Girlprint()
//     {
//         cout<<"I am Girl\n";
//     };
// };

// int main()
// {
//     Girl G1;
//     G1.Girlprint();
//     G1.print();  //girl ke do parent hai isliye ye dono ko print kar sakti hai
//     Boy B1;
//     B1.Maleprint();
// }


// Multipath Inheritance:- jab kisi class ke multiple path ho use multipath inheritance bolte hai, (agar do ya usse jyada class me
//  multiple element ho(like: name) to compiler confused ho jata hai, isko resolve karne ke liye "virtual" keyword ka use kiya jata hai
// jisse compiler ko ye lage ki wo name ek hi hai )

 #include<iostream>
using namespace std;

class Human
{
    public: 
    string name;

    void display()
    {
        cout<<"My name is "<<name<<endl;
    }
};
class Engineer : public virtual Human
{
    public:
    string specialization;

    void work()
    {
        cout<<"I have specialization in "<<specialization<<endl;
    }
};

class Youtuber : public virtual Human
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
    int salary;

    CodeTeacher()
    {

    }

    CodeTeacher(string name, string specialization, int subscribers, int salary)
    {
        this->name = name;  //yaha do name present hai engineer wala and youtube wala, so our terminal gets confused.
        this->specialization = specialization;
        this->subscribers = subscribers;
        this->salary = salary;
    }
};

int main()
{
    CodeTeacher A1("Rohit", "CSE", 49000, 99);
    A1.display();
}

// virtual lagane se hamare compiler ko ye pata chal gaya ki dono name ek hi hai

// multipath se bhi hum hybrid inheritance bana sakte hai