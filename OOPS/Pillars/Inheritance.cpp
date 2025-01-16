// * Inheritance *
#include<iostream>
using namespace std;
class Human{
 public:
      int age;
 protected:
      int weight;
public:
      void setage(int a){
          this->age = a;
      }
      int getage(){
        return this->age;
      }
};
class Male: protected Human{
    public:
          int height;
    public:
        void setheight(int h){
            this->height=h;
        }
        int getheight(){
            return this->height;
        }
        int getweight(){
          return this->weight;
        }
        void setweight(int weight){
          this->weight=weight;
        }
};
int main()
{
  Male m1;
  m1.setheight(6);
  m1.setweight(50);
  cout<<"Height is: "<<m1.getheight()<<endl;   
  cout<<"Weigth is: "<<m1.getweight()<<endl;
  return 0;
}