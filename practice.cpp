#include<iostream>
using namespace std;

class student
{
   private:
   string name;
   int num;

   public:
   student(string name, int num)
   {
      this->name = name;
      this->num = num;
   }
   void display()
   {
      cout<<name<<" "<<num;
   }
};

int main()
{
   student s();
   s.display();
}