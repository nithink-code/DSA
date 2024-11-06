#include<iostream>
using namespace std;
int power(int a, int b){
    // Base Case
    if(b==0){
        return 1;
    }
    if(b==1){
        return a;
    }
    // Recursive call
    int ans = power(a,b/2);

    // When b is even
    if(b%2 == 0){
        return ans*ans;
    }
    // When b is odd
    else{
        return a*ans*ans;
    }
}
int main()
{
  int num1,num2;
  cout<<"Enter the value of num1 and num2:"<<endl;
  cin>>num1>>num2;
  int ans=0;
  ans = power(num1,num2);
  cout<<"Answer of the number is: "<<ans<<endl;              
  return 0;
}