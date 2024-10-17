#include<iostream>
using namespace std;
int sum_array(int *arr,int n){
    int sum=0;
    // Base Case
    if(n==0){
        return 0;
    }
    if(n==1){
        return arr[0];
    }
    // Relation 
    int remaining=sum_array(arr+1,n-1);
    sum = arr[0] + remaining;
    return sum;
}
int main()
{
 int arr[20];
 int n;
 cout<<"Enter the size of the array:"<<endl;
 cin>>n;
 cout<<"Enter the elements of the array"<<endl;
 for(int i=0;i<n;i++){
    cin>>arr[i];
 } 
 int ans=sum_array(arr,n);
 cout<<"Sum of the Array is: "<<ans<<endl;          
return 0;
}