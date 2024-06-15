// Inheritance:- the capability of a class to derive property and characteristics from another class
// matlab ek baar define kar do property ko phir baar baar use karo
// means lets imagine hum do ya usse jyada constructor banate hai aur un sabme kuch property same hai like:- name, to hum usse ek jagah define kar denge
// taki wo baar baar use ho sake.

// Public: ye external code me use ho skte hai, within class bhi use ho sakta hai, derived class me bhi use ho sakta hai
// protected: ye exxternal code me use nhi ho sakta, within class use ho sakta hai, derived class me bhi use ho sakta hai
// private: ye external code me use nhi ho sakta, within class use ho sakta hai, derive class me use nhi ho sakta
// public, protected, private: kahi bhi access ho sakte hai within the same class.

// #include<iostream>
// using namespace std;

// class Human
// {
//     private:
//     int a;
//     protected: 
//     int b;
//     public:
//     int c;
// };

// int main()
// {
//     Human rohit;
//     rohit.c = 10;
// }


// How to create derive class:-
// class Student:    _______           ________
//    (Child name) (access modifier) (Parent class)
// access modifier:- public, private, protected

// Hence we conclude that the strongest one is:- private > protected > public
// to jo bhi strong hoga uska wo apna chalyega class me

// Use of access modifier:-

#include<iostream>
using namespace std;

class Human
{
    public:
    string name;
    int age, weight;
};
class student: public Human
{
    int roll_num, fees;
};

int main()
{
    student A;
    A.name = "rohit";
}