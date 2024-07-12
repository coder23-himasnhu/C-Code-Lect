// Expection Handling:- Exception is an unexpected portion that arises during the execution of a program and our
// program terminates suddenly with some errors/issues.
// execption run time pe hi aate hai

// Try:- It represent a block of code that may through a exeption placed inside the try block
// Catch:- It represent a block of code that is executed when a particular exception is thrown from the try block
// Throw:- An exception in C++ can be thrown using the throw keyword.
// runtime_error ek class hai, aur wo ek message pass karta hai jo code me dikh raha hai
#include<iostream>
using namespace std;

class Coustomer
{
    string name;
    int balance, account_number;

    public: 
    Coustomer(string name, int balance, int account_number)
    {
        this->name = name;
        this->balance = balance;
        this->account_number = account_number;
    };
    // deposit
    void deposit(int amount)
    {
        if(amount>0)
        {
            balance+=amount;
            cout<<amount<<" rs is credit successfully\n";
        }
        else{
            throw runtime_error("Amount should be greater than Zero\n");  //agar exception aaye to throw kar do in place of cout, mujhe pata hai ki ye runtime pe error dega isliye runtime_error function likh diya
        }
    }
    // withdraw
    void withdraw(int amount)
    {
        if(amount>0 && amount<=balance)
        {
            balance-=amount;
            cout<<amount<<" rs is debited successfully";
        }
        else if(amount<0){
            throw runtime_error("Amount should be greater than zero\n");  //agar exception aaye to throw kar do in place of cout
        }
        else{
            throw runtime_error("Your balance is low");  //runtime_error ek object dega isliye main() me runtime likha hai
        }
    }
};

int main()
{
    Coustomer C1("Rohit", 5000, 10);
    // C1.deposit(100);
    // C1.withdraw(6000);
// try and catch exception ko handle karta hai
    try{
        C1.deposit(100);
    C1.withdraw(6000);
    C1.deposit(100);  //because upar wale line ne exception throw kar diya hai to ya line nhi chalega
    }
    catch(const runtime_error &e)
    {
        cout<<"Exprection Occurred: "<<e.what()<<endl;
    }
}




// Eg:-
// #include<iostream>
// using namespace std;

// int main()
// {
//     int a,b;
//     cin>>a>>b;
//     try{
//         if(b==0)
//         throw "Divided by Zero is not define";
//         int c = a/b;
//         cout<<c<<endl;
//     }
//     catch(const char *e)
//     {
//         cout<<"Exception Occured: "<<e<<endl;
//     }
// }

// jab if else se sare kam ho rahe hai to try catch q use kar rahe hai, niche ka example dekho samajh aa jayega:-
// ye example me hum bahut bare memory allot kar rahe ho jo possible nhi hai, isko hum if-else se solve nhi kar sakte, isliye try-catch use karte hai

// #include<iostream>
// #include<exception>
// using namespace std;

// class exception
// {
//     protected:
//     string msg;

//     public:

//     exception(string msg)
//     {
//         this->msg = msg;
//     }
//     string what()
//     {
//         return msg;
//     }
// };

// int main()
// {
//     try{
//         int *p=new int[1000000000000000];
//     cout<<"Memory allocation successfully";
//     delete []p;
//     }
//     catch(const exception &e)  //exception ki jagah pe "bad_alloc" likh sakte hai q ki bad_alloc children hai exception ka
//     {
//         cout<<"expection Occured due to line 9: "<<e.what()<<endl;
//     }
// }

// exception ek class hai jisme bahut sare child class hai but mainly: std:bad_alloc, std:runtime_error use hota hai.
