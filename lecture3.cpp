// loop advance

// print 100 to 200
//  #include<iostream>
//  using namespace std;

// int main()
// {
//     for(int i=100; i<=200;i++)
//     {
//         cout<<i<<endl;
//     }
// }



// print a to z
//  #include<iostream>
//  using namespace std;

// int main()
// {
//     for(char name='a'; name<='z'; name++)
//     {
//         cout<<name<<endl;
//     }
// }



// print 10 to 1
// #include<iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cout<<"enter the number";
//     cin>>n;
//     for(int i=n;i>=1;i--)
//     {
//         cout<<i<<endl;
//     }
// }



// print 1 to 100 with gap of 3
//  #include<iostream>
//  using namespace std;

// int main()
// {
//     for(int i=1;i<=100;i=i+3)
//     {
//         cout<<i<<endl;
//     }
// }



// table
// #include <iostream>
// using namespace std;

// int main()
// {
//     int num;
//     cout << "enter the num:";
//     cin >> num;
//     for (int i = 1; i <= 10; i++)
//     {
//         cout << i * num<<endl;
//     }
// }


//power of a num
// #include<iostream>
// using namespace std;

// int main()
// {
//     int num, power, n;
//     cout<<"enter an num:";
//     cin>>n;
//     cout<<"enter the power";
//     cin>>power;
//     num=1;
//     for (int i=1;i<=power;i++)
//     {
//         num=num*n;
//     }
//         cout<<num<<endl;
// }


//sum of n natural number
// #include<iostream>
// using namespace std;

// int main()
// {
//     int n,out=0;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         out=out+i;
//     }
//         cout<<out;
// }


// factorial of a number
// #include<iostream>
// using namespace std;

// int main()
// {
//     int fact=1;
//     int n;
//     cout<<"enter the number:";
//     cin>>n;
//     for(int i=1;i<=n;i++)
//     {
//         fact=fact*i;
//     }
//     cout<<fact;
// }


//prime number:- eg:- agar n=10 hai, to 2 se lekar 9 tak loi bhi number divide nhi hone chahiye isliye loop lagaya hai
// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cout << "enter the number:";
//     cin >> n;
//     if (n < 2)
//     {
//         cout << "then the number is not a prime number";
//         return 0;
//     }
//     else
//     {
//         for (int i = 2; i <= n; i++)
//         {
//             if (n % i == 0)
//             {
//                 cout << "it is not a prime";
//                 return 0;
//             }
//             else
//             {
//                 cout << "it is prime";
//                 return 0;
//             }
//         }
//     }
// }




//fibonacci series in cpp.
#include <iostream>
using namespace std;

int main()
{
    int u;
    cin >> u;
    int a = 0;
    int b = 1;
    int c = 1;
    cout<<a<<" "<<b<<" "<<c<<" ";
    for (int i = 1; i <= u-3; i++)
    {
        a = b;
        b = c;
        c = a + b;
        cout << c<<" ";
    }
    cout<<endl;
}