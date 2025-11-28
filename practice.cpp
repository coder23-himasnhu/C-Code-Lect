#include <iostream>
using namespace std;

class CMarks 
{
    public:
    int m_nAptitude ;
    int m_nCpp;

    CMarks(int apti, int cpp)
    {
        m_nAptitude = apti;
        m_nCpp = cpp;
    }
};

CMarks operator+(CMarks& obj1, CMarks& obj2)
{
    return CMarks(obj1.m_nAptitude+obj2.m_nAptitude, obj1.m_nCpp+obj2.m_nCpp);
}


CMarks operator*(CMarks&obj1, CMarks& obj2)
{
    return CMarks(obj1.m_nAptitude*obj2.m_nAptitude, obj1.m_nCpp*obj2.m_nCpp);
}

CMarks operator-(CMarks& obj1, CMarks& obj2)
{
    return CMarks(obj1.m_nAptitude-obj2.m_nAptitude, obj1.m_nCpp-obj2.m_nCpp);
}

CMarks operator--(CMarks& obj1)
{
    ++obj1.m_nAptitude;
    ++obj1.m_nCpp;
    return obj1;
}

CMarks operator--(CMarks& obj1, int)
{
    obj1.m_nAptitude--;

}


int main()
{
    CMarks s1(10, 20);
    CMarks s2(30, 40);
    CMarks ans = s1 + s2;
    cout<<"Aptitude:- "<<ans.m_nAptitude<<"CPP:- "<<ans.m_nCpp<<endl;

    ans = s1*s2;
    cout<<"Aptitude:- "<<ans.m_nAptitude<<"CPP:- "<<ans.m_nCpp<<endl;

    ans = s1 - s2;
    cout<<"Aptitude:- "<<ans.m_nAptitude<<"CPP:- "<<ans.m_nCpp<<endl;

    --s1;
    cout<<"Aptitude:- "<<s1.m_nAptitude<<"CPP:- "<<s1.m_nCpp<<endl;

    s1--;
    cout<<"Aptitude:- "<<s1.m_nAptitude<<"CPP:- "<<s1.m_nCpp<<endl;

}