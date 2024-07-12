// File handling in CPP:-
// Cin , Cout ek object hai
// ios ek parent class hai uske andar ifstream and ofstream children class hote hai 
// jo file read and write karne ke kaam me aate hai


// file write:-
// #include<iostream>
// #include<fstream>

// using namespace std;
// // if mere pass ek padi hai seceond memory me to
// int main()
// {
//     // file ko open karo
//     ofstream fout;  //ofstream ek class hai jo file ko kholega, aur fout class ka naam hai
//     fout.open("zoom.txt");  //file ka path yaha dena hai, if file is not present then it automatically create new file, fout() is a member function
//     // Write kar sakta hu
//     fout<<"Hello India"; //file ke andar hello india likh diya

//     fout.close(); //file close kar diya,q close karna hai :- taki mai uske resource ko release kar pau, kaun se resource: jo is file ko handle kar rahe hai
// }



// file read:-
// #include<iostream>
// #include<fstream>

// using namespace std;

// int main()
// {
//     ifstream fin;
//     // file open karo
//     fin.open("zoom.txt");
//     // file read karo
//     char c;
//     c=fin.get();
//     while(!fin.eof()) //eof():- end of file
//     {
//         cout<<c;
//         c=fin.get();
//     }
//     fin.close();
// }



// ye file ready karega input array lega sort karega then ouput bhi store karega file me

// #include<iostream>
// #include<fstream>
// #include<vector>
// using namespace std;

// int main()
// {
//     vector<int>arr(5);
//     cout<<"Enter the Input: ";
//     for(int i=0; i<5; i++)
//     cin>>arr[i];

//     //file ko open karo
//     ofstream fout;
//     fout.open("zero.txt");
//     fout<<"original data\n";
//     for(int i=0; i<5; i++)
//     {
//         fout<<arr[i]<<" ";
//     }
//     fout<<"\n sorted data\n";

//     sort(arr.begin(),arr.end());
//     for(int i=0; i<5; i++)
//     {
//         fout<<arr[i]<<" ";
//     }
// }



//
#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream fout;
    fout.open("z1.txt");
    fout<<"Hello India\n";
    fout<<"Hello Rohit\n";
    fout<<"Hello Bhai\n";
    fout.close();

    ifstream fin;
    fin.open("z1.txt");

    string line;

    while(getline(fin, line))
    {
        cout<<line<<endl;
    }
    fin.close();
}