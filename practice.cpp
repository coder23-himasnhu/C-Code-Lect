
#include<iostream>
using namespace std;

int main()
{
    int arr[100]={6,4,5,-3,2,8};
    
    int prefix[100];
    prefix[0]= arr[0];

    for(int i=1; i<6; i++)
    {
      prefix[i] = prefix[i-1]+arr[i];
    }
    for(int i=0; i<6; i++)
    {
      cout<<prefix[i]<<" ";
    }
}