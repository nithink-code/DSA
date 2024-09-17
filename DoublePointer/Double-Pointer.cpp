// Double Pointer usage
/*
#include<iostream>
using namespace std;
int main()
{
  int a=5;
  int *p=&a;
  int **ptr=&p; // Double Pointer
  // To print value of a using 3 methods
  cout<<"Value is ->"<<*p<<endl;
  cout<<"Value is->"<<**ptr<<endl;
  cout<<"Value is->"<<a<<endl; 

  // To print the address of a in 3 methods

  cout<<"Value is->"<<&a<<endl;
  cout<<"Value is->"<<p<<endl;
  cout<<"Value is ->"<<*ptr<<endl;  
  return 0;
}
*/
// Move all negative numbers to one side and all positive to another side
/*
void arrange(vector<int>& arr,int n){
  int j=0;
 for(int i=0;i<n;i++){
     if(arr[i]>0){
         if(i!=j){
             swap(arr[i],arr[j]);
             j++;
         }
     }
 }
}
*/
