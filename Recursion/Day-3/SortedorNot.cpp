// * USING RECURSION TO CHECK WHETHER ARRAY IS SORTED OR NOT *

#include<iostream>
using namespace std;
bool is_sorted(int *arr,int n){
    // Base Case
    int ans=0;
    if(n==0 || n==1){
        return true;
    }
    if(arr[0]>arr[1]){
        return false;
    }
    else{
    // Relation
     ans = is_sorted(arr+1,n-1);
    }
    return ans;
}
int main()
{
 int n;
 int arr[20];
 cout<<"Enter the size of the array:"<<endl;
 cin>>n;
 cout<<"Enter array elements:"<<endl;
 for(int i=0;i<n;i++){
    cin>>arr[i];
 } 
 if(is_sorted(arr,n)){
    cout<<"Array is sorted"<<endl;
 } 
 else{
    cout<<"Array is not sorted"<<endl;
 }

 return 0;
}