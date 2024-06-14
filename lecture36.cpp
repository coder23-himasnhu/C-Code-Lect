// OOPS in C++
// Defination:- It is approach or a programming pattern where the program are structure around Object rather than Function and Logic.
// in CPP we can define User define Datatype 
// lets imagine we have a box called "Student" in which there is four box name "name, roll, class, subject" so here "Student" is user define Data type
// predefined data types are:- int, float, char, BigInt

// #include<iostream>
// using namespace std;

// int main()
// {
//     // for student 1
//     string name;
//     int age, roll_num;
//     string grade;

//     cin>>name>>age>>roll_num>>grade;

//     // for student 2
//     string name1;
//     int age1, roll_num1;
//     string grade1;

//     cin>>name1>>age1>>roll_num1>>grade1;
    
// }
// so for many students it is difficult to manage so the concept introduce called class 
// there are three access modifier in the class called private, public, protected;
// in default if we does not specified access modiefier than by default it is Private

// #include<iostream>
// using namespace std;

// class Student //here the student is called User-defined Data-type
// {
//     public:  //so this function element can be used outside the function
//     string name;
//     int age, roll_num;
//     string grade;
// };

// int main()
// {
//     Student S1;
//     S1.name="Rohit";
//     S1.age=10;
//     S1.roll_num=21;
//     S1.grade="A+";

//     cout<<S1.age;

//     Student S2;
//     S2.name="Rohit";
//     S2.age=11;
//     S2.roll_num=41;
//     S2.grade="B-";

//     cout<<S2.age;
// }

// hum class ke andar data aur functions dono dal sakte hai
// Class:- It is User defined data type (Or) Blueprint for Creating Objects

// #include<iostream>
// using namespace std;

// class Student //here the student is called User-defined Data-type
// {
//     private:
//     string name;
//     int age, roll_num;
//     string grade;
//     // function Getter and Setter
//     public:
//     void setName(string s){
//         name=s;
//     }
//     void setage(int a){
//         age=a;
//     }
//     void setroll(int r){
//         roll_num=r;
//     }
//     void setGrade(string g){
//         grade=g;
//     }

//     void getname(){
//         cout<<name<<endl;
//     }
//     void getage(){
//         cout<<age<<endl;
//     }
// };

// int main()
// {
//     Student S1;
//     S1.setName("Rohit");
//     S1.setage(21);
//     S1.setroll(15);
//     S1.setGrade("A++++");
//     S1.getname();
//     S1.getage();
// }

//why we use this if we can use such things using array
// in the oops we can set conditions to protect the data like:-make a function in setname to check if name is ==0 or not if it is zero then the 
// output name is invalid 

// Object:-It is an entity that has a state and behaviour (or) anything that exist in physical world (or) it is instance of a class
// ek class ke multiple object ban sakte hai

// #include<iostream>
// using namespace std;

// class a{
//     int b;
//     int c;
// };

// int main()
// {
//     a obj;
//     cout<<sizeof(obj)<<endl;
// }

// sizeof empty class is 1
// sizeof int in class is 4
// sizeof two int in class is 8
// aligment of variables matter a lot to save the memory(greedy aligment is a rule that tells sabse bada datatype ko upar rakho)

// #include<iostream>
// using namespace std;

// class a{
//     int b;
//     char c;
// };

// int main()
// {
//     a obj;
//     cout<<sizeof(obj)<<endl;
// }

// in this above code the answer is different from expected, we expect 5 but the answer is 8 so some concept is used here which allocate memory in different
// way called "Padding"
// padding make the segment of the memory and then read in first segement "int" is there so it take 4 byte and in seceond segment "char" is there so 
// char take only 1 byte and in other three byte there is garbage so by read two segment of 4 byte answer is 8 Byte
// why padding:- qki hum jald se jald data ko read kar sake

// #include<iostream>
// using namespace std;

// class a{
//     char c;
//     int b;
//     char d;
// };

// int main()
// {
//     a obj;
//     cout<<sizeof(obj)<<endl;
// }

// iska answer 12 q aaya:- isme jo sabse bada datatype hai "int" wo in sab ke padding ke number se divide kar sake ye trick hai
// eg:- char 1 , int 4, char 1, total=9 byte with padding (par 9 divide nhi ho raha 4 (biggest datatype)se to uska nearest greatest number hoga wohi answer hoga like 12 divide hota hai 12 se)

// Dynamically Memory Allocation 
#include<iostream>
using namespace std;

class Student{
    public:
    string name;
    int age,roll_num;
    string grade;
};

int main()
{
    Student *S = new Student;
    (*S).name="Rohit";
    (*S).age=10;
    (*S).roll_num=21;
    (*S).grade="A+";

    cout<<S->name<<endl;
    cout<<S->age<<endl;
    cout<<S->roll_num<<endl;
    cout<<S->grade<<endl;
}