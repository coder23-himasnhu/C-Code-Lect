#include<iostream>
using namespace std;

class A{
   protected:
   int a;

   public:
   void setdata(int a)
   {
      this->a = a;
   }
   void display(){
      cout<<"A:-"<<a<<endl;
   }
};

int main()
{
   A a;
   a.setdata(12);
   a.display();
}