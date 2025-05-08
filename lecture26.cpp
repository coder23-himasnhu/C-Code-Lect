// 2D array
// if 4*3 array is given then vertical line is 4 and horizontal is 3.
// the language like cpp automatically follows row major order(it saved the array in row wise automatically)
// memory doest store 2D array bcz memory always store the data in continuous manner

// print all the value in 2D array in row wise
// #include<iostream>
// using namespace std;

// void printcol(int arr[][4], int row, int col)  //it is necceassy to give col number but not to row 
// {
//     // column wise
//     for(int j=0; j<col; j++)
//     {
//         for(int i=0; i<row; i++)
//         {
//             cout<<arr[i][j]<<" "; //row and col is line pe depend karta hai, agar "i" pehle raha to horizontal and "j" pehle raha to vertical
//         }
//     }
// }

// int main()
// {
//     int arr[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
//     for(int i=0; i<3; i++)
//     for(int j=0; j<4; j++)
//     cout<<arr[i][j]<<" ";
//     cout<<endl;
//     // print the element col wise, function call
//     printcol(arr,3,4);
// }


// print the element in column wise(or) column major order
// #include<iostream>
// using namespace std;

// int main()
// {
//     int arr[4][3]={1,2,3,4,5,6,7,8,9,10,11,12};
//     for(int i=0; i<3; i++)
//     {
//         for(int j=0; j<4; j++)
//         {
//             // cout<<arr[j][i]<<" ";
//             if(arr[j][i]==9)
//             {
//                 cout<<j<<i;
//             }
//         }
//     }
// }


// search an element in 2D array
// #include<iostream>
// using namespace std;

// int main()
// {
//     int arr[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
//     int target;
//     cout<<"enter the number want to search:-";
//     cin>>target;
//     // arr[3][1]=13   //for update the value
//     for(int i=0; i<3; i++)
//     {
//         for(int j=0; j<4; j++)
//         {
//             if(arr[i][j]==target)
//             {
//                 cout<<"yes";
//                 return 0;
//             }
//         }
//     }
//     cout<<"no";
// }


// Add two 2D matrix
// #include<iostream>
// using namespace std;

// int main()
// {
//     // we can add two array if there row and col are are same in number
//     int arr1[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
//     int arr2[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};

//     int ans[3][4];
//     for(int i=0; i<3; i++)
//     {
//         for(int j=0; j<4; j++)
//         {
//             ans[i][j]=arr1[i][j]+arr2[i][j];
//         }
//     }
//     for(int i=0; i<3; i++)
//     {
//         for(int j=0; j<4; j++)
//         {
//             cout<<ans[i][j]<<" ";
//         }
//     }
// }


// print row index with maximum sum
// #include<iostream>
// #include<limits.h>
// using namespace std;

// void printarr(int arr[][4], int row, int col)
// {
//     int index=-1, sum=INT_MIN;
//     for(int i=0; i<row; i++)
//     {
//         int total=0;  //this variable is in the loop bcz. it count only j loop if it is outside the loop it count both the loop
//         for(int j=0; j<col; j++)
//         {
//             total+=arr[i][j];

//             if(total>sum)
//             {
//                 sum=total;
//                 index=i;
//             }
//         }
//     }
//     cout<<index<<" ";
// }

// int main()
// {
//     int arr[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
//     printarr(arr,3,4);
// }


// print sum of diagonal element
// #include<iostream>
// using namespace std;

// void printdiagonal(int arr[][4], int row, int col)
// {
//     int first=0, seceond=0;

//     int i=0;
//     while(i<row)
//     {
//         first+=arr[i][i];
//         i++;
//     }
//     // seceond diagonal
//     i=0;
//     int j=col-1;
//     while(j>=0)
//     {
//         seceond+=arr[i][j];
//         i++, j--;
//     }
//     cout<<first<<" "<<seceond;
// }

// int main()
// {
//     int arr[4][4]={1,2,3,6,4,5,6,7,7,8,9,8,10,11,12,9};
    
//     printdiagonal(arr,4,4);
// }


// reverse each row of the matrix