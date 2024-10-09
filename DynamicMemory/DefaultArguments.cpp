#include<iostream>
using namespace std;
int defaultargs(int arr[],int n,int start=0){
    for(int i=start;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
int main(){
   int arr[50],n,ans=0;
   cout<<"Enter the size of array:"<<endl;
   cin>>n;
   cout<<"Enter the elements of the array:"<<endl;
   for(int i=0;i<n;i++){
    cin>>arr[i];
   }
   ans=defaultargs(arr,n);
    return 0;
}