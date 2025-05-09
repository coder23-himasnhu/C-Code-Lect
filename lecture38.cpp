// Static Data Member:-
// Static means the Property belongs to the class not to the object.
// They are attribute of classes or class member.(ye ek hi baaar create hoga)
// It is declared using static keyword
// Only one copy of that member is created for the entire class and is shared by all the object
// It is initialized before
// agar hum bahut sare constructor banate hai to sabko count karne ke liye ek variable banaya jayega jiska aage static keyword likha jayega aur wo sare constructor ko target karega
// by example:- agar ek bank server hai us bank me kitne account account hai wo manually count to hoga nhi aur na hi hum usse baar baar increment karenge
// to hum static data ka use karte hai jo ye batayega ki bank me kitne account hai

// #include<iostream>
// using namespace std;

// class Customer
// {
//     string name;
//     int account_number, balance;
//     static int total_customer;

//     public:
//     Customer(string name, int account_number, int balance)
//     {
//         this->name = name;
//         this->account_number = account_number;
//         this->balance = balance;
//         total_customer++;
//     }
//     void display(){
//         cout<<name<<" "<<account_number<<" "<<balance<<" "<<total_customer<<endl;
//     }
// };

// int Customer::total_customer = 0;  //inital zero initialize kar diya hai yaha

// int main(){
//     Customer A1("Rohit", 1, 1000);
//     Customer A2("Mohit", 2, 1800);
//     A1.display();
//     A2.display();
// }

// jo last me 2 print ho raha hai wo ye bata raha hai ki kitne account hai us bank me


// static member function
// #include <iostream>
// using namespace std;

// class Customer
// {
//     string name;
//     int account_number, balance;
//     static int total_customer;
//     static int total_balance;

// public:
//     Customer(string name, int account_number, int balance)
//     {
//         this->name = name;
//         this->account_number = account_number;
//         this->balance = balance;
//         total_customer++;
//         total_balance += balance;
//     }
//     static void accesStatic()
//     {
//         cout << "Total Number of Coustomer:- " << total_customer << endl;
//         cout << "Total Balance in the bank:- " << total_balance << endl;
//     }
//     void deposit(int amount)
//     {
//         if (amount > 0)
//         {
//             balance += amount;
//             total_balance += amount;
//         }
//     }
//     void withdraw(int amount)
//     {
//         if (amount <= balance && amount > 0)
//         {
//             balance -= amount;
//             total_balance -= amount;
//         }
//     }
//     void display()
//     {
//         cout << name << " " << account_number << " " << balance << " " << total_customer << endl;
//     }
// };

// int Customer::total_customer = 0;
// int Customer::total_balance = 0;

// int main()
// {
//     Customer A1("Rohit", 1, 1000);
//     Customer A2("Mohit", 2, 1800);
//     // if deposit
//     A1.deposit(800);
//     A2.withdraw(500);
//     Customer::accesStatic();
// }

// const keywork ke bare me padho ye hai HomeWork

// Encapsulation:-
// Wrapping up of a data and information in a single unit, while controlling access to the them
// encapsulation ye kehta hai ki apne data ko hide karke rakho taki koi galat data na dal sake isko data hiding bhi kehte hai

// #include <iostream>
// using namespace std;

// class Customer
// {
//     string name;
//     int account_number, balance,age;

// public:
//     Customer(string name, int account_number, int balance, int age)
//     {
//         this->name = name;
//         this->account_number = account_number;
//         this->balance = balance;
//         this->age = age;
//     }
//     void deposit(int amount)
//     {
//         if (amount > 0)
//         {
//             balance += amount;
//         }
//         else{
//             cout<<"Invalid Amount\n";
//         }
//     }
//     void withdraw(int amount)
//     {
//         if (amount <= balance && amount > 0)
//         {
//             balance -= amount;
//         }
//     }
//     void display()
//     {
//         cout << name << " " << account_number << " " << balance<< endl;
//     }
// };

// int main()
// {
//     Customer A1("Rohit", 1, 1000,3);
//     Customer A2("Mohit", 2, 1800,4);
//     Customer A3("Mohan", 3, 2000,8);
//     A1.deposit(-10); //negative amount hum nhi dal sakte acoount me isliye hum usko condition me rakhte hai, agar koi negative amount dalta hai to hamara real amount change nhi hoga
//     A1.display();
// }



// Abstraction:- Displaying only essential information and hiding the detail.

//hamare sare code abstraction hi hai q ki wo hame kuch output deta hai, hame code se kuch matlab nhi hai.


// Friend function and class by Code With Harry:-
#include <iostream>
using namespace std;

class Complex;

class calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }

    int sumrealComplex(Complex, Complex);
};

class Complex
{
    int a, b;
    //Individual declaring functions as friend
    // friend int calculator ::sumrealComplex(Complex, Complex);

    //Declaring the entire calculator class as friend
    friend class calculator;
public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    void printNumber()
    {
        cout << "Your Number is:- " << a << " and " << b << endl;
    }
};

int calculator ::sumrealComplex(Complex o1, Complex o2)
{
    return (o1.a + o2.a);
}

int main()
{
    Complex o1, o2;
    o1.setNumber(1, 4);
    o2.setNumber(5, 7);
    calculator calc;
    int res = calc.sumrealComplex(o1, o2);
    cout << "The sum of real part of o1 and o2 is:- " << res << endl;
    return 0;
}


// Easy example of friend class....:-
#include <iostream>
using namespace std;

class A
{
   int x;
   friend class B;
};

class B
{
   public:
   void display(A t1)
   {
      t1.x = 20;
      cout<<"Value of X is:- "<<t1.x;
   }
};

int main()
{
   A obj1;
   B obj2;

   obj2.display(obj1);
}