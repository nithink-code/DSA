// Macros to find area of a rectangle

#include<iostream>
using namespace std;
#define Area(l,b)(l*b)
int main() {
   int l,b,area;
   cout<<"Enter the length and breadth: "<<endl;
   cin>>l>>b;
   area=Area(l,b);
   cout<<"Area of Rectangle: "<<area<<endl;
   return 0; 
}