#include<bits/stdc++.h>
using namespace std;
class Car{
public:
    // string name;
    string color;
    char *name;
    
    // Paramterized Constructor
    // Car(string name){
    //     this->name = name;
    // }
    // Car(string name,string color){
    //     this->name = name;
    //     this->color = color;
    // }

    // User defined copy constructor

    Car (Car& temp){
        this->name = name;
        this->color = color;
        char *name2 = new char[strlen(temp.name)+1];  // Dynamic array for deep copy of same size as *name
        strcpy(name2,temp.name);
        this->name = name2;

    }

    //  ** Dynamic intialization **
    Car(){
        name = new char[10];
    }


    // void setname(string name){
    //      this->name = name;
    // }
    void setcolor(string color){
        this->color = color;
    }
    // string getname(){
    //     return name;
    // }
    string getcolor(){
        return color;
    }
    void print(){
        cout<<"Value is: "<<name<<endl;
    }
    void  setName(char name[]){
        strcpy(this->name,name);
    }

    // Destructor
    ~Car(){
       cout<<"Destructor Called: "<<endl; 
    }
};
int main()
{
//   Car c1("Mercedes Benz","Blue");
//   Car c2("Audi");
//   c2.setcolor("Blue");
//   c2.setname("Thar");
//   cout<<"Object2: "<<c2.getcolor()<<endl;
//   cout<<"Object2: "<<c2.getname()<<endl;

//   Use of copy constructor
//   Car c3;
//   cout<<"Object3: "<<c3.getcolor()<<endl;
//   cout<<"Object3: "<<c3.getname()<<endl;
  
                              // Shallow & Deep Copy concept

  Car c1;
  char name[10]="Nithin";
  c1.setName(name);
  c1.name[0]='G';
  c1.print();                 // Shallow Copy and Deep copy
  Car *c3 = new Car(c1);
  c3->print();
  delete c3;                  // Manually we want to delete dynamic object

  



  






         
         
         
  return 0;
}