// operator in C++
// Arithmetic operator:- binary operator and unary operator
//  presedence:- int<float<double
// presedence:- {*, /, %}>{+, -}

// Comparison operator:- prcedence {>,<,>=,<=}>{==, !=}

//logical operator:- &&(and),||(or),!(not)

// Bitwise operator{&(and),|(or),^(exor),~(not),<<(left shift),>>(right shift)},this operator is not used for negative number

// Assigment operator{=} eg:- a/=10 is equal to a=a/10.
#include<iostream>
using namespace std;

int main()
{
    int a=5^10*5-3>>7*4>8!=5==7;
    cout<<a;

}