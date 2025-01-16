#include<bits/stdc++.h>
using namespace std;
class Car{
  string name;
  string color;
  // Use of getter and setter functions
public:
  string getname(){
    return name;
  }
  string getcolor(){
    return color;
  }
  void setname(string n){
    name = n;
  }
  void setcolor(string c){
    color = c;
  }
};

int main()
{  
  // Static Allocation
  Car c1;
  c1.setcolor("Red");
  c1.setname("Nithin");
  cout<<c1.getcolor()<<endl;
  cout<<c1.getname()<<endl;  

  // Dynamic Allocation
  Car *c2 = new Car;
  c2->setname("Mercedes GLS");
  c2->setcolor("Blue");
  cout<<"Name : "<<c2->getname()<<endl;
  cout<<"Color : "<<c2->getcolor()<<endl;
  return 0;
}