// as we create the array in program it take the space in stack memory 

// but if we want to store the array in heap then we have to write a keyword called "new"
// eg:- int *ptr= new int 
//  in this example ptr is sotred in stack and it points in int which is stored in heap
// if all the program is executed then the stack is clear but heap pe data rahega
// program end hote hi stack clear ho jata hai but heap ko manually clear karna padta hai
// so to clear the heap a special keyword used called delete
// to delete variable type "delete p"
// to delete array "delete []p"
// vectors ko bhi heap me memory allote hoti hai but vector me koi delete keyword nhi hota 
// program complete hone ke baad vector apne aap heap ko clear kar deta hai thatswhy vector is powerful
// wherever you see "new" keyword that means that memory allocation is dynamically



#include<iostream>
using namespace std;

int main()
{
    // variable ke liye heap memory allocate karo
    int *ptr = new int;  //it return the address(new int)
    *ptr=5;  // to assign the value
    cout<<*ptr<<endl;

    //for float value
    float *ptr1= new float;
    *ptr1=3.6;
    cout<<*ptr1<<endl;

    // from user
    int n;
    cout<<"enter the size of the array";
    cin>>n;
    int *p=new int[n];  //it return the address of the 0th index 
    // value dalo
    for(int i=0; i<n; i++)
    {
        p[i]=i+1;
    }
    // print kara do
    for(int i=0; i<n; i++)
    {
        cout<<p[i];
    }

    // use of delete keyword(delete keyword delete the memory that is alloted in heap)
    delete ptr; //it delete the memory of ptr from heap
    delete ptr1;
    delete p;
}