// * Syntax to declare reference variable *

/*
#include<iostream>
using namespace std;
int main()
{
  int i=5;
 // Reference Variable syntax
  int &j=i;
  cout<<i<<endl;
  cout<<j<<endl;     
 return 0;
}
*/

// * Need of Reference Variable *
/*
#include<iostream>
using namespace std;
// This function has reference argument 
void num1(int& n){
    n++;
}
// Normal function
void num2(int n){
    n++;
}

int main()
{
 int n;
 cout<<"Enter the value of n:"<<endl;
 cin>>n;
 cout<<"Before:"<<n<<endl;
 num1(n);
 cout<<"After :"<<n<<endl;
 num1(n);  
 cout<<"After:"<<n<<endl;   
 return 0;
}
*/