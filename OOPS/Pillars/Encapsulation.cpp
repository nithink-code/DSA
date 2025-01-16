// * Encapsulation *
#include<iostream>
using namespace std;
class student{
    private:
      string name;
      int rollno;
    public:
       string getname(){
        return this->name;
       }
};

int main()
{
   student s1;
    
  return 0;
}


