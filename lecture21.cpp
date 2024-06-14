// introduction:-
// #include<iostream>
// #include<vector>

// using namespace std;

// int main()
// {
//     //create vector, declare
//     vector<int>v;
//     // size and capacity
//     cout<<"size of v "<<v.size()<<endl;
//     cout<<"capacity of v "<<v.capacity()<<endl;
//     v.push_back(2);
//     v.push_back(3); 
//     v.push_back(10);
//     cout<<"size of v "<<v.size()<<endl;
//     cout<<"capacity of v "<<v.capacity()<<endl;
//     // update
//     v[1]=5;
// }



// initalize of vector

// #include<iostream>
// #include<vector>

// using namespace std;

// int main()
// {
//     vector<int>v1(5,1);//create a vector of size 5 with all element 1
//     cout<<"size of the vector"<<v1.size()<<endl;
//     cout<<"capacity of the vector"<<v1.capacity()<<endl;
//     v1.push_back(1);
//     cout<<"size of the vector"<<v1.size()<<endl;
//     cout<<"capacity of the vector"<<v1.capacity()<<endl;
//     v1.pop_back();
//     cout<<"size of the vector"<<v1.size()<<endl;
//     cout<<"capacity of the vector"<<v1.capacity()<<endl;
//     v1.erase(v1.begin()+1);
//     cout<<"size of the vector"<<v1.size()<<endl;
//     cout<<"capacity of the vector"<<v1.capacity()<<endl;
//     for(int i=0; i<v1.size(); i++)
//     {
//         cout<<v1[i]<<" ";
//     }

//     v1.insert(v1.begin()+1,50);  //insert value
//     cout<<endl;
//     for(int i=0; i<v1.size(); i++)
//     {
//         cout<<v1[i]<<" ";
//     }

// }


// another method of initialze

// #include<iostream>
// #include<vector>
// using namespace std;

// int main()
// {
//     vector<int>v={1,2,3,4,5};
//     cout<<v.size();
// }


// print first and last element of the vector

// #include<iostream>
// #include<vector>
// using namespace std;

// int main()
// {
//     vector<int>v;
//     v.push_back(2);
//     v.push_back(3);
//     v.push_back(4);
//     cout<<v[0]<<endl;
//     cout<<v.front()<<endl;
//     cout<<v[v.size()-1]<<endl;
//     cout<<v.back()<<endl;

//     // copy element of one vector in another
//     vector<int>v1;
//     v1=v;
//     cout<<v1.size()<<endl;
//     for(auto i=v1.begin(); i!=v1.end(); i++)
//     {
//         cout<<*i<<" ";
//     }
//     cout<<endl;
//     // another method to print the vector
//     for(auto i:v1)
//     {
//         cout<<i<<" ";
//     }
// }


// sorting the vector
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    vector<int>v;
    v.push_back(3);
    v.push_back(4);
    v.push_back(1);
    v.push_back(2);
    for(auto i=v.begin(); i!=v.end(); i++)
    {
        cout<<*i<<" ";
    }
    cout<<endl;
    // ascending order
    sort(v.begin(), v.end());
    for(auto i=v.begin(); i!=v.end(); i++)
    {
        cout<<*i<<" ";
    }
    cout<<endl;

    // // decending order
    // sort(v.begin(), v.end(), greater<int>());
    // for(auto i=v.begin(); i!=v.end(); i++)
    // {
    //     cout<<*i<<" ";
    // }
    // cout<<endl;

    // // another method of decending order
    // sort(v.rbegin(), v.rend());
    // for(auto i=v.begin(); i!=v.end(); i++)
    // {
    //     cout<<*i<<" ";
    // }
    // cout<<endl;

    // search in binary search
    cout<<binary_search(v.begin(), v.end(),3)<<endl;
    
    // find index of the element
    cout<<find(v.begin(), v.end(), 3)-v.begin();
}