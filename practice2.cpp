#include<iostream>
using namespace std;

class Circle
{
    public:
    int area(int r)
    {
        return 2*3.14*r;
    }
    int area(int l, int b)
    {
        return l*b;
    }
};

int main()
{
    Circle C1;
    cout<<C1.area(2)<<endl;
    cout<<C1.area(2,3);
}