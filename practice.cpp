#include <iostream>
#include <vector>

using namespace std;

int main()
{
   vector<int>v;
   v.push_back(12);
   v.push_back(13);
   v.push_back(15);
   for(int i=0; i<=v.size(); i++)
   {
      cout<<i<<" ";
   }
}