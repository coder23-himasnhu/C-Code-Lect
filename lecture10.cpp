// deciaml to binary

//concetenate two number
// #include<iostream>
// using namespace std;

// int main()
// {
//     int a=10, b=20;
//     cout<<a*100+b;
// }

// swap the number
// #include<iostream>
// using namespace std;

// int main()
// {
//     int a=10, b=23;
//     cout<<a*100+b;
// }

// decimal to binary conversion

// #include<iostream>
// using namespace std;

// int main()
// {
//     int num=13;
//     int rem,ans=0, mul=1;

//     while(num>0)
//     {
//         rem=num%2;  //remainder
//         num=num/2;  //quotient (num/=2)
//         ans=rem*mul+ans;
//         mul=mul*10;  //(mul*=10)
//     }
//     cout<<ans;
// }



// binary to decimal conversion

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cout << "enter the number:-";
//     cin >> n;
//     int ans = 0, rem, mul = 1; // mul is 1 because easy to multiply with 10
//     while (n > 0)
//     {
//         rem = n % 10; // remainder
//         n = n / 10;
//         ans = rem * mul + ans;
//         mul = mul * 2;
//     }
//     cout << ans << endl;
// }