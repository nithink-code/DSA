// STL for array
// #include<iostream>
// #include<array>
// using namespace std;
// int main()
// {
//   array<int,4>a={1,2,3,4};
//   cout<<"Element present in 2nd index is:"<<a.at(2)<<endl;
//   cout<<"Empty or not:"<<a.empty()<<endl;
//   cout<<"First element of the array->"<<a.front()<<endl;
//   cout<<"Last element of the array->"<<a.back()<<endl;  
//    return 0;
// }

// STL for vector
// #include<iostream>
// #include<vector>
// using namespace std;
// int main()
// {

//  vector<int>v;
//  v.push_back(1);
//  v.push_back(2);
//  cout<<"Size of the vector:"<<v.size()<<endl;
//  cout<<"Capacity of the vector:"<<v.capacity()<<endl;  
//   return 0;
// }

// STL for Deque[ We can perform operations both front & back of array in deque]
// #include<iostream>
// #include<deque>
// using namespace std;
// int main()
// {
//  deque<int>d;
//  d.push_back(1);
//  d.push_front(2); // add's 2 in the beginning
//  cout<<"Size of the vector:"<<d.size()<<endl;
//  for(int i: d){
//     cout<<i<<" ";     // Using for each loop
//  }
//  d.erase(d.begin(),d.begin()+1);
//  cout<<"Size of the vector:"<<d.size()<<endl;
//  return 0;
// }

//STL for lists
// #include<iostream>
// #include<list>
// using namespace std;
// int main()
// {
//  list<int>l;
//  l.push_front(1);
//  l.push_back(2);
//  l.push_back(3);
//  cout<<"Size of the list is:"<<l.size()<<endl;   
//  return 0;
// }

//STL for stacks [Last in First out]
// #include<iostream>
// #include<stack>
// using namespace std;
// int main()
// {
//   stack<string>s;
//   s.push("Nithin");
//   s.push("Kokkapuni");
//   cout<<"Top most element of the stack:"<<s.top()<<endl; // It will print Kokkapuni[LIFO]
//   s.pop();
//   cout<<"Size of stack :"<<s.size()<<endl;  
//   return 0;
// }

//STL for Queue [ First in First out]
// #include<iostream>
// #include<queue>
// using namespace std;
// int main()
// {
//  queue<string>q;
//  q.push("Nithin");
//  q.push("K");
//  cout<<"Top element:"<<q.front()<<endl; // It will print Nithin[ FIFO order for queue]    
//   return 0;
// }

// Priority Queue
// #include<iostream>
// #include<queue>
// using namespace std;
// int main()
// {
//  priority_queue<int>maxi; // Max heap[It will return maximum value]
//  priority_queue<int,vector<int>,greater<int>>mini; // Mini heap[It will return minimum value]
//  maxi.push(1);
//  maxi.push(2);
//  maxi.push(3);
//  mini.push(1);
//  mini.push(2);
//  cout<<"Size of maxi heap:"<<maxi.size()<<endl;
//  cout<<"Size of mini heap:"<<mini.size()<<endl;   
//  return 0;
// }

// STL for Set [ It will only store unique elements]
// #include<iostream>
// #include<set>
// using namespace std;
// int main()
// {
//   set<int>s;
//   s.insert(5);
//   s.insert(4);
//   s.insert(3);
//   s.insert(2);
//   set<int>::iterator it=s.begin(); // It will iterate & remove 1st index element in set
//   it++;
//   s.erase(it);
//   for(int i:s){
//     cout<<i<<endl;
//   }    
//  return 0;
// }

// STL for map[It will point to only 1 location]
// #include<iostream>
// #include<map>
// using namespace std;
// int main()
// {
//   map<int,string>m;
//   m[1]="Nithin";
//   m[2]="Kokkapuni";
//   for(auto i:m){
//     cout<<i.first<<endl; // It will print  1 & 2
//     cout<<i.second<<endl;// It will print Nithin & Kokkapuni 
//   } 
//   m.erase(2); // It will erase 2nd string value from map[Here 2 is key] 
//   return 0;
// }

// STL for Binary search
// #include<iostream>
// #include<algorithm>
// #include<vector>
// using namespace std;
// int main()
// {
//  vector<int>v;
//  v.push_back(1);
//  v.push_back(2);
//  v.push_back(3);
//  cout<<"Finding element using binary search:"<<binary_search(v.begin(),v.end(),2)<<endl;
//  cout<<"Lower bound:"<<lower_bound(v.begin(),v.end(),2)-v.begin()<<endl;
//  cout<<"Upper bound:"<<upper_bound(v.begin(),v.end(),2)-v.begin()<<endl;
//  // WE CAN SWAP OR REVERSE THE VARIABLES USING THIS STL BINARY SEARCH
// string a="Nithin";   
//  reverse(a.begin(),a.end());
//  cout<<a<<endl;
//  // WE CAN ALSO ROTATE THE VECTOR
//  rotate(v.begin(),v.begin()+1,v.end()); // Here we have to define 1st idx and how much element
//                                         //we have to rotate and last idx
//  cout<<"After rotating the vector:";
//  for(int i:v){
//     cout<<i<<" ";
//  }  
//  return 0;
// }