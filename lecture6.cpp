// hard printing star


// #include <iostream>
// using namespace std;

// int main()
// {
//     int row, col;
//     for (row = 1; row <= 5; row++)
//     {
//         for (col = 1; col <= 5 - row; col++)
//         {
//             cout << " ";
//         }
//         for (col = 1; col <= row; col++)
//         {
//             cout << "*";
//         }
//         cout << endl;
//     }
// }



#include<iostream>
using namespace std;

int main()
{
    int row,col;
    for(row=1; row<=5; row++)
    {
        for(col=1; col<=5-row; col++)
        {
            cout<<" ";
        }
        for(col=1; col<=row; col++)
        {
            cout<<row;
        }
        cout<<endl;
    }
}



// #include <iostream>
// using namespace std;

// int main()
// {
//     int row,col;
//     for(row=1; row<=5; row++)
//     {
//         for(col=1; col<=5-row; col++)
//         {
//             cout<<" ";
//         }
//         for(col=1; col<=row; col++)
//         {
//             cout<<col;
//         }
//         cout<<endl;
//     }
// }



//    1
//   21
//  321
// 4321
//54321



// #include<iostream>
// using namespace std;

// int main()
// {
//     int row,col;
//     for(row=1; row<=5; row++)
//     {
//         for(col=1; col<=5-row; col++)
//         {
//             cout<<"  ";//two space
//         }
//         char name='a';
//         for(name='a'; name<='a'+row-1; name++)
//         {
//             cout<<name<<" ";
//         }
//         cout<<endl;
//     }
// }