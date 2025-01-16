// 1. Compile Time 
// [Function Overloading]
// #include<iostream>
// using namespace std;
// class Animal{
//    public:
//      void weight(){
//           cout<<"Horse"<<endl;
//      }
//      void weight(){
//         cout<<"Dog"<<endl;
//      }
    
// };

// int main()
// {
//   Animal a1;
//   a1.weight();    // Error: Cannot make function overloading      
//   return 0;
// }

// [Operator Overloading]
 #include<iostream>
 using namespace std;
class Car{
    public:
     int  number;
    int getnumber(){
        return this->number;
    }
    void setnumber(int n){
        this->number=n;
    }
    // Syntax for operator overloading
    void operator+(Car &c1){
         int val1 = this->number;
         int val2 = c1.number;
         cout<<"Adding :"<<val1+val2<<endl;
    }

};
 int main()
 {
   Car c2,c3;
   c2.number = 10;
   c3.number = 10;
   c2+c3;  // Calls operator+ function    
   return 0;
 }

// ** Runtime Polymorphism [Method Overriding]
#include<iostream>
using namespace std;
class Animal{
    public:
       string name;
    void speak(){
        cout<<"Noise"<<endl;
    }
};
class Dog:public Animal{
    public:
      void speak(){
        cout<<"Barking"<<endl;
      }
};
int main()
{
  Dog d1;
  d1.speak();       
         
         
         
  return 0;
}