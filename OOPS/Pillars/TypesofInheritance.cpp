// ** Multiple Inheritance **

#include<bits/stdc++.h>
using namespace std;
class Animal{
    public:
       string name;
       int weight;
     void setname(string n){
        this->name=n;
     }
     string getname(){
        return this->name;
     }
     void setweight(int w){
        this->weight=w;
     }
     int getweight(){
        return this->weight;
     }
};
class Horse{
    public:
      int height;
    void setheight(int h){
        this->height=h;
    }
    int getheight(){
        return this->height;
    }
};
class Cow:public Animal,public Horse{
    public:
        string color;
     void setcolor(string c){
        this->color=c;
     }
     string getcolor(){
        return this->color;
     }

};
int main()
{
  Cow c1;
  c1.setname("Nandi");
  c1.setcolor("Brown");
  c1.setweight(500);
  c1.setheight(6);
  cout<<"Name of Cow is: "<<c1.getname()<<endl;
  cout<<"Color of Cow is: "<<c1.getcolor()<<endl;
  cout<<"Weight of Cow is: "<<c1.getweight()<<endl;
  cout<<"Height of Cow is: "<<c1.getheight()<<endl;       
  return 0;
} 