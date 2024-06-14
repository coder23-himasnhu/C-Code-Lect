// mostly problem are on leetcode

// leap year
// #include<iostream>
// using namespace std;

// int main()
// {
//     int num;
//     cout<<"enter the num:-";
//     cin>>num;
//     if(num%400==0)
//     {
//         cout<<"leap year";
//     }
//     else if(num%4 && num%100!=0)
//     {
//         cout<<"leap year";
//     }
//     else{
//         cout<<"not a leap year";
//     }
//     }



// palindrome
#include<iostream>
using namespace std;

int main()
{
    int x,rem,mul=0,ans;
    cout<<"enter the number";
    cin>>x;
    if(x<0)
    {
        cout<<"false";
    }
    while(x)
    {
        rem=x%10;
        x=x/10;
        mul=mul*10+rem;
    }
    if(ans==x)
    {
        cout<<"it is pandlorm";
    }
    else{
        cout<<"it is not pandlorm";
    }
}