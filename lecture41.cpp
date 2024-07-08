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
// int a=5;
// int b=10;
// cout<<a+b;  //output:- 15

// string str1 = "Rohit";
// stirng str2 = "Negi";
// cout<<str1+str2 //RohitNegi

#include<iostream>
using namespace std;

class Complex
{
    int real, img;
    public:
    Complex(int real, int img)
    {
        this->real = real;
        this->img = img;
    }
};
void display()
{
    cout<<real<<"+i"<<img;
};
int main()
{
    Complex C1;
    C1(3,2);
}