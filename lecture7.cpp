#include <iostream>
using namespace std;

int main()
{
    int row, col;
    for (row = 1; row <= 5; row++)
    {
        for (col = 1; col <= 5 - row; col++)
        {
            cout << "  ";
        }
        for (col = 1; col <= 2 * row - 1; col++)
        {
            cout << "*"
                 << " ";
        }
        cout << endl;
    }
}



// #include<iostream>
// using namespace std;

// int main()
// {
//     int row, col;
//     for(row=1; row<=5; row++)
//     {
//         for(col=1; col<=5-row; col++)
//         {
//             cout<<"  ";
//         }
//         for(col=1; col<=row; col++)
//         {
//             cout<<col;
//         }
//         for(col=row-1; col>=1; col--)
//         {
//             cout<<" ";
//         }
//         cout<<endl;
//     }
// }


// doubt

// #include<iostream>
// using namespace std;

// int main()
// {
//     int row, col;
//     for(row=1; row<=5; row++)
//     {
//         for(col=1; col<=row-1; col++)
//         {
//             cout<<" ";
//         }
//         for(col=1; col<=9-(row-1*2); col++)
//         {
//             cout<<"*"<<" ";
//         }
//         cout<<endl;
//     }
// }



// #include<iostream>
// using namespace std;

// int main()
// {
//     int row, col,n;
//     cout<<"enter the input:-";
//     cin>>n;
//     for(row=4; row>=1; row--)
//     {
//         for(col=1; col<=row; col++)
//         {
//             cout<<"* ";
//         }
//         for(col=1;col<=2*n-2*row; col++)
//         {
//             cout<<"  ";
//         }
//         for(col=1; col<=row; col++)
//         {
//             cout<<"* ";
//         }
//         cout<<endl;
//     }

//     for(row=1; row<=4; row++)
//     {
//         for(col=1; col<=row; col++)
//         {
//             cout<<"* ";
//         }
//         for(col=1;col<=2*n-2*row; col++)
//         {
//             cout<<"  ";
//         }
//         for(col=1; col<=row; col++)
//         {
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
// }





// #include<iostream>
// using namespace std;

// int main()
// {
//     int row,col,n;
//     cout<<"enter the number:-";
//     cin>>n;
//     for(row=1; row<=n; row++)
//     {
//         for(col=1; col<=row;col++)
//         {
//             cout<<"* ";
//         }
//         for(col=1; col<=2*n-2*row; col++)
//         {
//             cout<<"  ";
//         }
//         for(col=1; col<=row; col++)
//         {
//             cout<<"* ";
//         }
//         cout<<endl;
//     }

//     for(row=n-1; row>=1; row--)
//     {
//         for(col=1; col<=row;col++)
//         {
//             cout<<"* ";
//         }
//         for(col=1; col<=2*n-2*row; col++)
//         {
//             cout<<"  ";
//         }
//         for(col=1; col<=row; col++)
//         {
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
// }




// done by me
// include<iostream>
// using namespace std;

// int main()
// {
//     for(int i=1; i<=5; i++)
//     {
//         for(int j=1; j<=5-i; j++)
//         {
//             cout<<"  ";
//         }
//         for(int z=1; z<=2*i-1; z++)
//         {
//             cout<<"*"<<" ";
//         }
//         for(int j=1; j<=5-i; j++)
//         {
//             cout<<" ";
//         }
//         cout<<endl;
//     }
//     for(int i=4; i>=1; i--)
//     {
//         for(int j=1; j<=5-i; j++)
//         {
//             cout<<"  ";
//         }
//         for(int z=1; z<=2*i-1; z++)
//         {
//             cout<<"*"<<" ";
//         }
//         for(int j=1; j<=5-i; j++)
//         {
//             cout<<" ";
//         }
//         cout<<endl;
//     }
// }