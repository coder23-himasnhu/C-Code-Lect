// Constructor:-
// It is a special function that is invoked automatically at the time of Object Creation.(jaise hi hum object ko form karte hai constructor khud se create ho jata hai )
// -> Name of the Constructor should be same as class name
// -> It does not has any return type (constructor ko void nhi lagana hai)
// -> it is used to initialize the value

// there are two type of constructor:- 1) Default constructor(it doesnt has any parameter) 2) Parameter constructor(it has some parameter in their fucntion)
// this:- jo bhi object hum create karte hai uske address ko store karke rakhta hai
// By default compiler ek constructor khud se banata hai jo class me hota hai but usse hum dekh nhi skate
// but if we create any type of constructor then compiler doesnt create any by default construtor.
// agar ek constructor 3 parameter le raha hai to dusra constructor usi class me 3 parameter nhi le sakta


// #include<iostream>
// using namespace std;

// class Coustomer
// {
//     string name;
//     int acco;
//     int balance;
//     public:
//     Coustomer()
//     {
//         cout<<"default Contructor";
//     }
// };

// int main()
// {
//     Coustomer C1;
// }



// #include<iostream>
// using namespace std;

// class Coustomer
// {
//     string name;
//     int account_num;
//     int balance;

//     public:
//     // Default Constructor
//     Coustomer()
//     {
//         name="ROhit";
//         account_num=5;
//         balance=100;
//     }

//     void display(){
//         cout<<name<<" "<<account_num<<" "<<balance<<endl;
//     }
// };

// int main()
// {
//     Coustomer A1,A2;
//     A1.display();  //display is function defined upper part of code
//     A2.display();
// }



// #include<iostream>
// using namespace std;

// class Coustomer
// {
//     string name;
//     int account_num;
//     int balance;

//     public:
//     // Default Constructor
//     Coustomer()
//     {
//         name="ROhit";
//         account_num=5;
//         balance=100;
//     }
//     // parameterized constructor
//     Coustomer(string a, int b, int c)
//     {
//         name = a;
//         account_num = b;
//         balance = c;
//     }
//     Coustomer(string a, int b){
//         name=a;
//         account_num=b;
//     }
//     void display(){
//         cout<<name<<" "<<account_num<<" "<<balance<<endl;
//     }
// };

// int main()
// {
//     Coustomer A1;
//     Coustomer A2("Rohit", 23, 1000); //it gives parameter so it takes only those constructor which has 3 parameter
//     Coustomer A3("Mohit", 25);
//     A1.display();
//     A2.display();
//     A3.display(); //this line print the garbage value
// }   

// Note:- All the constructor name is same but there parameter is differnt so this is constructor overloading

// #include<iostream>
// using namespace std;

// class Coustomer
// {
//     string name;
//     int account_num;
//     int balance;

//     public:
//     Coustomer(string name, int account_num, int balance)
//     {
//         // agar hum yaha this nhi lagate to ye function parameter ko samjh leta aur error aa jata (function scope)
//         this->name = name;
//         this->account_num = account_num;
//         this->balance = balance;
//     }
//     void display(){
//         cout<<name<<" "<<account_num<<" "<<balance<<endl;
//     }
// };

// int main()
// {
//     Coustomer A1("Rohit", 18, 25);
//     A1.display();
// }


// inline constructor


// #include<iostream>
// using namespace std;

// class Coustomer
// {
//     string name;
//     int account_num;
//     int balance;

//     public:
//     // inline constructor
//     inline Coustomer(string a , int b, int c): name(a), account_num(b), balance(c){}; 
//     void display(){
//         cout<<name<<" "<<account_num<<" "<<balance<<endl;
//     }
// };

// int main()
// {
//     Coustomer A1("Rohit", 18, 25);
//     A1.display();
// }


// Copy Constructor:-
// how to copy constructor:-
// Coustomer A2(A1) it simply copy the constructor
// copy constructor is automatically present in the class itself
// but if we create copy constructor then compiler does not create by default copy constructor
// name is same as class in copy constructor

// #include<iostream>
// using namespace std;

// class Coustomer
// {
//     string name;
//     int account_num;
//     int balance;

//     public:
//     // inline constructor
//     inline Coustomer(string a , int b, int c): name(a), account_num(b), balance(c){}; 
//     void display(){
//         cout<<name<<" "<<account_num<<" "<<balance<<endl;
//     }
//     // user define copy constructor 
//     Coustomer(Coustomer &B)
//     {
//         name= B.name;
//         account_num= B.account_num;
//         balance= B.balance;
//     }
// };

// int main()
// {
//     Coustomer A1("Rohit", 18, 25);
//     A1.display();
//     Coustomer A2(A1);  //this line copy the constructor
//     A2.display();
// }

// Destructor:- It is an instance member function that is invoked automatically whenever an object is going to be destroyed.
// It is a last function that is going to be called before an object is destroyed
// destructor does not take any parameter and it does not have any return type
// destructure reverse order me kaam karta hai aur cnstructor line wise me kaam nhi karta
//destrcutor bhi by default create ho jata hai compiler se but if hum use create karte hai to compiler hamare liye destrcutor create nhi karega
// destructor ek bhi baar create hoga while constructor baar baar create kar sakte hai

#include<iostream>
using namespace std;

class Coustomer{
    string name;
    int *data;

    public:
    Coustomer()
    {
        name="rohit";
        data= new int;
        *data=10;
        cout<<"constructor is call"<<endl;
    }
    // destructure
    ~Coustomer()
    {
        delete data;
        cout<<"destrucure is call";
    }
};

int main()
{
    Coustomer A1;
}