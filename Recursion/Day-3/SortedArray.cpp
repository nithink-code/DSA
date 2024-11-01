// Array is Sorted or Not using Recursion
// Sorted in Ascending Order
#include<iostream>
using namespace std;
bool sorted(int *arr,int n){
    if(n==1 || n==0){
        return true;
    }
    if(arr[0]>arr[1]){
         return false;
        }
    else{
        sorted(arr+1 , n-1);
    }
    return true;
}
int main()
{
 int arr[10];
 int n;
 cout<<"Enter the size of the array:"<<endl;
 cin>>n;
 cout<<"Enter array elements:"<<endl;
 for(int i=0;i<n;i++){
    cin>>arr[i];
 } 
 if(sorted(arr,n)){
    cout<<"Array is Sorted"<<endl;
 }
 else{
    cout<<"Array is not Sorted"<<endl;
 }        
return 0;
}