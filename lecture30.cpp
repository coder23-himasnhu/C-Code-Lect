// stirng :-
// it read the dynimc memory
// string is used to store the data in the form of charachter
// how to store the string :- same like int we also store char in an array 
// eg:- char fruit[]={'a','p','p','l','e'};

// #include<iostream>
// using namespace std;

// int main()
// {
//     char fruit[]={'a','p','p','l','e'};
//     cout<<fruit;
// }


// #include<iostream>
// using namespace std;

// int main()
// {
//     char name[10];
//     cin>>name;
// }


// to take string array from user
// #include<iostream>
// using namespace std;

// int main()
// {
//     char fruit[10];
//     cout<<"enter the string";
//     // take input from user
//     for(int i=0; i<10; i++)
//     {
//         cin>>fruit[i];
//     }
//     // display output enter from user
//     for(int i=0; i<10; i++)
//     {
//         cout<<fruit[i];
//     }
// }

// #include<iostream>
// using namespace std;

// int main()
// {
//     char arr[10];
//     cin>>arr;
//     arr[2]='\0'; //it added null to seceond index so after null char not any char is printed
//     cout<<arr;
// }


// #include<iostream>
// using namespace std;

// int main()
// {
//     string s;
//     cin>>s;
//     cout<<s;
// }

// to get input a pragragraph
// #include<iostream>
// using namespace std;

// int main()
// {
//     string s;
//     getline(cin, s);  //this function also allow space given by user to write the paragraph
//     cout<<s;
// }

// to find the size of the stirng 
// #include<iostream>
// using namespace std;

// int main()
// {
//     string s="himanshu";
//     cout<<s.size();
// }

// to combine two or more string
// #include<iostream>
// using namespace std;

// int main()
// {
//     string s="himanshu";
//     string s2="shivam";
//     string s3=s+s2;
//     cout<<s3;
// }


// #include<iostream>
// using namespace std;

// int main()
// {
//     string s="himanshu";
//     string s2="shivam";
//     // string s3=s.append(s2);
//     // cout<<s3;

//     // s.push_back('p');
//     // cout<<s;

//     // s.pop_back();
//     cout<<s;
// }

// escape character :- it said that ignore me and print the element after me
// #include<iostream>
// using namespace std;

// int main()
// {
//     string s="rohit is a \"good\" boy";
//     cout<<s;
// }

// how to print null character
#include<iostream>
using namespace std;

int main()
{
    string s="\\0";
    cout<<s;
}