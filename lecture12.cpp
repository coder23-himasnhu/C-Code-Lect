// functions
// return_type new_function(parameter1,)
// {
//     {
//         code 

//     }
//     return value; 
// }


// example of swapping the number
// cpp also has inbuilt function of swap i.e swap() it direct swap the two number without using any function
#include<iostream>
using namespace std;

void swap(int &a, int &b)//pass by refrence
{  
     int c;
     c=b;
     b=a;
     a=c;
}

void swap(float &c, float &d)//this is for float value
{
    float r=c;
    c=d;
    d=r;
}

int main()
{
    int a,b;
    cin>>a>>b;
    swap(a,b);
    cout<<a<<" "<<b<<" ";

//for float
    float c=2.3, d=4.5;
    swap(c,d);
    cout<<c<<" "<<" "<<d;
}