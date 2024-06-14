// convert the lower letter to upper letter
// #include <iostream>
// using namespace std;

// char change(char a)
// {
//      a=a-32;//because of ascii value we subtract it by 32
//     return a;
// }

// int main()
// {
//    char ch;
//    cout<<"Enter a character in lowercase: "; 
//    cin>>ch;
//    ch=change(ch);
//    cout<<ch;
// }


// armstrong number
// #include <iostream>
// #include <cmath> //get this library from chatgpt
// using namespace std;

// int count_digit(int n)
// {
//     int count = 0;
//     while (n)
//     {
//         count++;
//         n /= 10;
//     }
//     return count;
// }

// bool armstrong(int num, int digit)
// {
//     int n = num, ans = 0, rem;
//     while (n)
//     {
//         rem = n % 10;
//         n /= 10;
//         ans = ans + pow(rem, digit);
//     }
//     if (ans == num)
//     {
//         return 1;
//     }
//     else
//     {
//         return 0;
//     }
// }

// int main()
// {
//     int num;
//     cin >> num;
//     int digit = count_digit(num);
//     cout << armstrong(num, digit);
// }



// rectangle check
// #include<iostream>
// using namespace std;

// int main()
// {
//     int a,b,c,d;
//     cin>>a>>b>>c>>d;
//     if((a==b && c==d) || (a==c && b==d) ||(a==d && a==d))
//     {
//         cout<<"it is rectangle";
//     }
//     else{
//         cout<<"no! it is not rectangle";
//     }
// }


// nimgame
// #include<iostream>
// using namespace std;

// int main()
// {
//     int n;
//     if(n%4!=0)
//     {
//         return 1;
//     }
//     else{
//         return 0;
//     }
// }