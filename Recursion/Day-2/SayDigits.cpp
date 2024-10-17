#include<iostream>
using namespace std;
int sayDigits(int n, string arr[]){
   // Base Case
   if(n==0){
    return 0;
   }
   // Processing
   int digit=(n%10);
   n/=10;

   // Relation
   sayDigits(n,arr);
   cout<<arr[digit];
   return 0;
}
int main()
{
    // Creating a mapping of all numbers from 0 to 9
  string arr[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
  int n;
  cout<<"Enter the value of n:"<<endl;
  cin>>n;
  sayDigits(n,arr);      
         
         
         
return 0;
}