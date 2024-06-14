// pointer with character Array

// vector and string ko refeence ki help se solve kare
// int char ko pointer ki help se solve kare

// #include<iostream>
// using namespace std;

// int main()
// {
//     char arr[5]="1234";
//     char *ptr=arr;
//     cout<<arr<<endl;
//     cout<<ptr<<endl;
//     // in pointer character array it continuosly print the charcter till null character, whenever null occures it stops
//     cout<<(void*)arr<<endl;

//     // print the address of char
//     char name='a';
//     char *ptr1=&name;
//     cout<<(void*)&name<<endl;
//     cout<<(void*)ptr1<<endl;
// }

// swappin the number by pass by pointer
// #include<iostream>
// using namespace std;

// void swapping(int *p1, int *p2)
// {
//     int temp=*p1; 
//     *p1=*p2;
//     *p2=temp;
// }
// int main()
// {
//     int first=10, seceond=20;
//     // cout<<&first<<" "<<&seceond<<endl;
//     swapping(&first, &seceond);
//     cout<<first<<" "<<seceond;
// }


// swappin the number by pass by refrence
#include<iostream>
using namespace std;

void swapping(int &p1, int &p2)
{
    int temp=p1;
    p1=p2;
    p2=temp;
}
int main()
{
    int first=10, seceond=20;
    swapping(first, seceond);
    cout<<first<<" "<<seceond;
}