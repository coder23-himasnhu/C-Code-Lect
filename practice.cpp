#include<iostream>
using namespace std;

int count = 0;
class num
{
   public:
   num()
   {
      count++;
      cout<<"this is the time where constructor is called for object number "<<count<<endl;
   }
   ~num()
   {
      cout<<"this is the time when destructor is called for object number "<<count<<endl;
      count--;
   }
};

int main()
{
   cout<<"we are inside our main function"<<endl;
   cout<<"Creating first object n1"<<endl;
   num n1;
   {

   }
   return 0;
}