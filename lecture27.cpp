// vectors in 2D
// how to create vectors in 2D
// vector<vector<int>>matrix;
// how to set the column and vector in a vector
// vector<vector<int>>matrix(row,vector<int>col(intialize))

// to find the size of the row in vector 
// row=matrix.size();  //it is a function in STL used in vector
// col=matirx[0].size;  //to find the size of the column


// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;

// int main()
// {
//     // we can also take rows and column input form user 
//     vector<vector<int> >matrix(3,vector<int>(4,1));

//     for(int i=0; i<3; i++)
//     {
//         for(int j=0; j<4; j++)
//         {
//             cout<<matrix[i][j]<<" ";
//         }
//     }
//     cout<<endl;
//     cout<<"Rows:-"<<matrix.size()<<endl;
//     cout<<matrix[0].size();
// }


// // wave array
// #include<iostream>
// #include<algorithm>

// using namespace std;

// int main()
// {
//     int arr[3][3]={1,2,3,4,5,6,7,8,9};
//     for(int i=0; i<3; i++)
//     {
//             if(i%2==0)
//             {
//                 for(int j=0; j<3; j++)
//                 {
//                 cout<<arr[j][i]<<" ";
//                 }
//             }
//             else
//             {
//                 for(int j=2; j>=0; j--)
//                 {
//                 cout<<arr[j][i]<<" ";
//                 }
//             }
//     }
// }

// time complexity= O(row*col)


// spiral form
// transpose of a matrix