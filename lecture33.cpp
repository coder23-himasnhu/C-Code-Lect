// double pointer
// #include<iostream>
// using namespace std;

// int main()
// {
//     int n=10;
//     int *p=&n; //single pointer
//     int **p2=&p; //double pointer
//     int ***p3=&p2; //triple pointer
//     cout<<p<<endl;
//     cout<<&p<<endl; //address of p
//     cout<<p2<<endl;
//     cout<<p3<<endl;

//     // modifiaction of value present in n
//     *p=*p+5;
//     cout<<n<<endl;
//     **p=**p+5;
//     cout<<n<<endl;
// }

// using function

// #include<iostream>
// using namespace std;

// void func(int *p)
// {
//     *p+=10;
// }
// int main()
// {
//     int n=10;
//     int *p=&n;
//     func(p);
//     cout<<*p;
// }



// #include<iostream>
// using namespace std;

// int main()
// {
//     char c[]="GATE2024";
//     cout<<c<<endl;  //on printing C it return all the array till its find the null which is present at the end of the char array
//     char *p=c;  //here p contain the address of first element i.e address of G
//     cout<<p+p[3]-p[2];
// }

// #include<iostream>
// using namespace std;

// void func(int *p1, int *p2)
// {
//     p1=p2;
//     *p1=2;
// }

// int main()
// {
//     int i=0, j=1;
//     func(&i, &j);
//     cout<<i<<" "<<j<<endl;
// }

// #include<iostream>
// using namespace std;

// int main()
// {
//     int *ptr;
//     int x=0;
//     ptr=&x;
//     int y=*ptr;
//     *ptr=1;
//     cout<<x<<" "<<y<<endl;
// }

#include<iostream>
using namespace std;

int main()
{
    int a=5, b=10;
    int &name=a;  //refrence name of a is also name
    int *ptr=&a;
    (*ptr)++;
    ptr=&b;
    *ptr=*ptr+5;
    name+=5;
    cout<<a<<" "<<b<<endl;
}