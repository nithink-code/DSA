// * Factorial of number using Recursion *
/*
#include<iostream>
using namespace std;
int factorial(int n){
    // Formula for factorial f(n)=n*f(n-1)
    // Base Case
    if(n==0){
        return 1;
    }

    return n*factorial(n-1);
}
int main()
{
  int n;
  cout<<"Enter the value of n:"<<endl;
  cin>>n;
  int ans=0;
  ans=factorial(n);
  cout<<"Factorial of number is : "<<ans<<endl;            
return 0;
}
*/

// *  Power of 2 function using Recursion *
/*
#include<iostream>
using namespace std;
int power(int n){
    // Base Case
    if(n==0)
       return 1;
    // Recursive Relation
    // Formula f(n)=2*f(n-1)
    int small=power(n-1);
    int large=2*small;
    return large;
}
int main()
{
  int n;
  cout<<"Enter the value of n:"<<endl;
  cin>>n;
  int ans=0;
  ans=power(n);
  cout<<"Power of number is: "<<ans<<endl;              
return 0;
}
*/

// * Program to print for n=5 [5,4,3,2,1]
/*
#include<iostream>
using namespace std;
int count(int n){
    // Base Case
    if(n==0){
        return 1;
    }
    // Relation
    cout<<n<<" ";
    count(n-1);
    return 0;
}
int main()
{
 int n;
 cout<<"Enter n value"<<endl;
 cin>>n;
 count(n);        
return 0;
}
*/