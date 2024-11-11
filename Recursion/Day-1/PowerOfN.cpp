#include<iostream>
using namespace std;
int power_n(int n){
    // Base Case
    if(n==0) return 1;

    // Recursive Call
    int small = power_n(n-1);
    return (3*small);
}
int main()
{
  int n;
  cout<<"Enter the value of n:"<<endl;
  cin>>n;
  int ans = power_n(n);
  cout<<" 3 to the power of given number is: "<<ans<<endl;              
  return 0;
}