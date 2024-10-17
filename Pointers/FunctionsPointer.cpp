/*
#include<iostream>
using namespace std;
// * Implementation of Functions in Pointers
void print(int *p){
    cout<<p<<endl;
}
int main()
{
 int arr[5]={1};
 int *p=&arr[0];
 print(p);   
  return 0;
}
*/
/*
#include<iostream>
using namespace std;
void update(int *p){
    //p=p+1; // It will print same output for before & after
    *p=*p+1; // It will printf value present at 1st index for before & increments by 1 for after
}
int main()
{
 int arr[5]={1};
 int *p=&arr[0];
 update(p);
 cout<<"Before:"<<*p<<endl;
 update(p);
 cout<<"After:"<<*p<<endl;   
return 0;
}
*/

// * Array in Pointers *
/*
#include<iostream>
using namespace std;
int getsum(int *arr,int n){
   int sum=0;
   for(int i=0;i<n;i++){
    sum+=arr[i];
   } 
   return sum; 
}
int main()
{
 int arr[6]={1,2,3,4,8,9};
 int *p=&arr[0];
 cout<<"Value:"<<getsum(arr,5)<<endl; 
 cout<<"Part sum of the array:"<<getsum(arr+2,4)<<endl; // It will print the sum of array elements after the 1st index
  return 0;
}
*/
