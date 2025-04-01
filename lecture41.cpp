// Polymorphism:- means many Form
// eg:- there is man: the same man can be a father, husband, son, brother or any

// polymorphism can be divided in two types:- 1) Compile Time 2)Run Time
//  compile Time divided in two types:- 1) Function Overloading 2) Operator Overloading
// Run Time has only one type:- 1) Virtual Function

// compile time error:- jab bhi code run hota hai to compiler check karta hai ki humne koi comma ya bracket to nhi chhod diya na then after compiler usko machine code me convert kar deta hai
// Runtime Error:- ye error tab aata hai jab bhi hum array ke index se bahar array ko access karte hai
// Eg:- int i=10;
// int x;
// cin>>x;(if input of x is 0)
// cout<<i/x;

// "new" keyword run time me memory allocate karke dega heap me

// Eg:- of Function Overloading:- both the function has same name, par hamara compiler compile time pe bata diya ki konsa function lena konse parameter pe

// #include<iostream>
// using namespace std;

// class Area
// {
//     public:
//     int calculatearea(int i)  //for circle
//     {
//         return 3.14*i*i;
//     }
//     int calculatearea(int l, int b)  //for rectangle
//     {
//         return l*b;
//     }
// };
// int main()
// {
//     Area A1;
//     cout<<A1.calculatearea(4)<<endl;
//     cout<<A1.calculatearea(4,3);
// }

// Eg:- of Operator Overloading:- Operator(+) same hi hai but work alag alag hai, int ke liye add kar raha hai, aur string ke liye combine kar raha hai
// this operator overloading also show the behaviour of polymorphism
// operator ko as a function name liks sakte hai like name of function is: +,-,/
// int a=5;
// int b=10;
// cout<<a+b;  //output:- 15

// string str1 = "Rohit";
// stirng str2 = "Negi";
// cout<<str1+str2 //RohitNegi

// #include<iostream>
// using namespace std;

// class Complex
// {
//     int real, img;
//     public:
//     Complex()
//     {

//     };
//     Complex(int real, int img)
//     {
//         this->real = real;
//         this->img = img;
//     }
// void display()
// {
//     cout<<real<<"+i"<<img<<endl;
// };
// Complex operator +(Complex &C)
// {
//     Complex ans;
//     ans.real = real+C.real;
//     ans.img = img + C.img;
//     return ans;
// }

// };

// int main()
// {
//     Complex C1(3,4);
//     Complex C2(4,6);
    
//     Complex C3 = C1+C2;
//     C2.display();
// }


// Virtual Function: Why virtual function is called run time polymorsim?
//Virtual function are those which are present in the base class and ovveridden in the derived class.

// p=new Dog():- dog ka ek object create karo aur uska address p me store kara do
//  animal *p:- p type ka ek pointer hai, jo pointer kar raha hai animal ko
// virtual keyword jaha bhi dikhe to wo ye batayega ki usko run time me decide karna compile time pe nhi.


#include<iostream>
using namespace std;

class Animal
{
    public:
    virtual void speak()  //agar hum yaha virtual nhi lagate hai to huhu print hoga
    {
        cout<<"HuHu\n";
    }
};
class Dog: public Animal
{
    public:
    void speak()
    {
        cout<<"Bark\n";
    }
};

int main()
{
    Animal *p;
    p = new Dog();
    p->speak();
    //upar ke teen line aise bhi likh sakte the:-
    // Dog d1;
    // d1.speak();
}

// pure virtual function:- Jis function me kuch bhi assign na ho, 0 assign ho usse pure virtual function bolte hai
// A virtual function that has no bosy in the base class, is known as pure virtual function.
// This virtual function is defined inside ites derived classes.
// Eg:- virtual void speak()=0;
// condition:- jis class me pure virtual function hai, uska hum direct object create nhi kar sakte

// Abstract class:- A class that contains alteast one pure virtual function, is known as abstract class.
// Any class which any pure virtual function are called the Abstract class.(Abstract class ka object nhi bana sakte bcz. abstract means incomplete).
// Since abstract class contain one or more pure virtual function(ie functions without body), so object of an abstract classes can not created
// If any other class inherit the property of abstract class, then the same class also become the abstract class, but it also has a second option
// to complete(incomplete) the abstract class
//Why need Abstract class:- whenever we need to make our child class as a complete class, we need to create it as abstract class