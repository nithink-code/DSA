#include<iostream>
using namespace std;
int fib(int n){
    // Base Case
    if(n<=1){
        return n;
    }
    // Relation
    else{
        return fib(n-1)+fib(n-2);
    }
}   
int main()
{
  int n;
  cout<<"Enter n value:"<<endl;
  cin>>n;
  int ans=0;
  for(int i=0;i<n;i++){
     cout<<fib(i)<<" ";
  }       
return 0;
}