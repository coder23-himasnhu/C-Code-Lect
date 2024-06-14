// STL(Standard Template Library) in Vector.



// How to declare a vector
    // vector<datatype>v;
    // eg:- vector<int>v;


// // how to insert the value in vector
//     vector<datatype>v(size of vector, initialize)
//     eg:- vector<int>v(4,2)
// 2 is initalize in vector and every index of the vector has value 2.

//     the vector is same as array 

// how to initialize the different value in vector 
// eg:-  vector<int>a;
//       a.push_back(4);
//       a.push_back(8);

// another method to initialize the vector
    // eg:-  vector<int>v={2,4,6,8,10};

// another method to initialize the vector by taking input from user
    // eg:-    int n;
    //         cin>>n;
    //      vector<int>v(n); //here n is the size of the vector
    //      for(int i=0; i<5; i++)
    //      {
    //         cin>>v[i];
    //      }



// all the dsa problem take space in RAM, it is divided into two parts:- stack and heap
// stack has very less amount of space whereas, the data is present in good manner
// heap has very large amount of space, the data is not present in good manner

// lets take eg:- if we create a program in which there is more than one function so the main() take space in stack and when its turn to function then 
// ye pehle ek function ko run karega aur usko stack me space dega then after completing that function wo next function execute karega aur pehle wala 
// function remove kar dega stack se aur dusra function include kar dega after completing all function phir wo main function ko bhi stack se nikal 
// dega mtlb ki stack is temporary memory(stack work in LIFO)

// array always take space in stack
// so thatswhy we cannot access the user to enter the size of the array
// if we do that then user can write any big number which is not fullfill by the stack

// and vector always take space in heap
// so it allow user to write the size of the vector


// how to remove value from vector
// eg:-  vector<int>v={1,2,3,4,5};
//       v.pop_back()  //it remove the last element of the vector     O(1)
//       v.clear()     //it remove all the value of the vector        
//       v.erase(v.begin()+2) //it remove the 2 index element from the vector  O(n)


// size and capacity
// v.size(), v.capacity


// suppose a vector:- vector<int>v={1,2,3,4};
                // cout<<v.front();   output:- 1
                // cout<<v.back();    output:-4
                // cout<<v.empty();   output:-0  it return 1 if all the element of the vector are not there
                // cout<<v.at(2);     output:-3


// iterator in vector:-
//     v.begin(), v.end()
//     v.begin():- it points the first element(0th index) of the vector.
//     v.end():- it points the right of the last most element of the vector
// eg:-   vector<int>v={1,2,3,4,5};
//         for(auto i=v.begin(); i!=v.end; i++)  //auto means automatic creates a datatype according to the input given eg:- auto a=10  (here a automatically make integer)
//         {
//             cout<<*v<<" ";   //* prints the element in the vector
//         }

//     v.rbegin():- it is reverse begin means the first element is the last of the vector
//     v.rend():- it is reverse end means that it points the left of the first(0th index) most element



sorting:-
time complexity of sort is nlogn
eg:- vector<int>v={4,3,2,1};
    sort(v.begin(), v.end())  //it sort the element in the ascending order(sort(from,to))
    sort(v.begin(), v.end(), greater<int>())  //it sort the element in the decending order