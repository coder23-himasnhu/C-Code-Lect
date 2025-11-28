// Pair in STL
// Pair may be inspired by the class for storing different types of value

// #include <iostream>
// // #include <bits/stdc++.h>
// #include <utility>
// using namespace std;

// int main()
// {
//     pair<string, int>p;
//     //first method for initialization
//     // p = make_pair("rohit",30);

//     //Second method for initialization
//     p.first = "rohit";
//     p.second = 30;
//     cout<<p.first<<" "<<p.second<<endl;
// }


//store 3 items in a single pair
// #include <iostream>
// using namespace std;

// // storing name, age and weight in a pair
// int main()
// {
//     pair<string, pair<int, int>>p;
//     // p.first = "rohit";
//     // p.second.first = 30;
//     // p.second.second = 50;
//     // or
//     p = make_pair("rohit", make_pair(30, 50));

//     cout<<p.first<<" "<<p.second.first<<" "<<p.second.second<<endl;
// }


//List:- It stores the data like doubly linked list
// Syntax:- list<type>name_of_list;
//eg:- list<int>l1;
//basic operation of list:- push_back, push_front, pop_front(), pop_back()


// #include <iostream>
// #include <list>
// #include <utility>
// using namespace std;

// int main()
// {
//     list<int>l;
//     l.push_back(20);
//     l.push_back(20);
//     l.push_back(20);
//     l.push_back(20);
//     l.push_back(20);
//     cout<<l.front()<<" "<<l.back()<<endl;
//     cout<<l.size();

//     for(auto it = l.begin(); it!= l.end(); it++)
//     {
//         cout<<*it<<" ";
//     }
// }


// Set:-
// It only stores only unique element.
// It store the value in the sorted form(Ascending).
// Insertion, deletion and search operation have TC:- (0(log n)), making them fast for most use cases.
// It is implented using Red-Black Tree.
// we can sort it using descending order also using:- greater<type>.

// #include <iostream>
// #include <set>
// using namespace std;

// int main()
// {
//     // set<int>s; //store in ascending order
//     set<int, greater<int>>s; //store in decending order
//     //Insert
//     s.insert(10);
//     s.insert(40);
//     s.insert(20);
//     s.insert(30);
//     for(auto it=s.begin(); it!=s.end(); it++)
//     {
//         //It print only in the sorted form
//         cout<<*it<<" ";
//     }
//     cout<<endl;
//     if(s.find(20)!=s.end())
//     cout<<"present";
//     else{cout<<"Absent";}
// }



// Unorder_set:-
// It contains only uniqque element
// search, insert, delete has average T.C of 0(1);
// It uses hashing technique to Impement it

// #include <iostream>
// #include <unordered_set>
// using namespace std;

// int main()
// {
//     unordered_set<int>s; //for unique
//     unordered_set<int>s; //for non-unique element
//     //Insert
//     s.insert(10);
//     s.insert(40);
//     s.insert(20);
//     s.insert(30);
//     s.insert(30);
//     for(auto it=s.begin(); it!=s.end(); it++)
//     {
//         //It print only in the sorted form
//         cout<<*it<<" ";
//     }
//     //All property same as set
// }



// Map:-
// - Data is always in the sorted form wrt. to its key
// - It stores the data in the key-value pair
// - Key should be unique
// - It uses Red-Black tree or AVL for implementation
// - Insertion, deletion and search operation have logarithmic (0(log(n))) time complexity, making them fast for more use cases.

// #include <iostream>
// #include <map>
// using namespace std;

// int main()
// {
//     //map creation
//     map<int, int>m;
//     m.insert(make_pair(20, 30));
//     m.insert(make_pair(30, 20));
//     m.insert(make_pair(40, 10));
//     m.insert(make_pair(50, 20));
//     m.insert(make_pair(20, 30));
//     m[100] = 60; //insert kiya because 100 key is not there
//     m[30] = 50; // also able to update on the 30 location.

//     for(auto it = m.begin(); it!=m.end(); it++)
//     {
//         cout<<it->first<<" "<<it->second;
//     }
//     cout<<endl;
//     cout<<m[100]; //if key not found then return 0.

//     // for delete use delete keyword
    
// }

//we also have multimap, in which we can store the duplicate value, but in that we cant store data like this m[100] = 60;
// syntax:- multimap<int, int>m;



//Unordered map:-
// - Data is not in the sorted order
// - Duplicate keys are not allowed
// -  

#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    unordered_map<int, int>m;
    m.insert(make_pair(10, 10));
    m.insert(make_pair(20, 20));
    m.insert(make_pair(30, 30));
    m.insert(make_pair(40, 40));
    m.insert(make_pair(50, 50));

    for(auto it=m.begin(); it!=m.end(); it++)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }
}

// Homework:- unorder_multiMap