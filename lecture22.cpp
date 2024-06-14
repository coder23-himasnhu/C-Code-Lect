// two sum :-
// time complexity is n^2 by all sorting method;
// #include<iostream>
// using namespace std;

// int main()
// {
//     int arr[5]={2,7,11,15,27};
//     for(int i=0; i<5; i++)
//     {
//         for(int j=i+1; j<5; j++)
//         {
//             if(arr[i]+arr[j]==22)
//             {
//                 cout<<arr[i]<<" "<<arr[j];
//             }
//         }
//     }
// }

// two sum by pointer method (also solve in leetcode)
#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int arr[5]={2,7,11,15,17};
    vector<int>ans;
    int start=0, end=4;
    while(start<=end)
    {
        if(arr[start]+arr[end]==9)
        {
            ans.push_back(start+1);
            ans.push_back(end+1);
            // return ans;
        }
        else if(arr[start]+arr[end]>9)
        {
            end--;
        }
        else{
            start++;
        }
    }
    cout<<vector<int>ans;
}