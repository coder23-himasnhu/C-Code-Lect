#include<iostream>
using namespace std;

class structure
{
    public:
    int circle(int r)
    {
        cout<<2*3.14*r<<endl;
    }
    int square(int l, int b)
    {
        cout<<l*b;
    }
};

int main()
{
    structure a;
    a.circle(4);
    a.square(4,5);
}