#include<iostream>
using namespace std;
int sum(int *arr,int n){
    int sum1=0;
    int totalsum=0;
    // Base Case
    if(n==0){
        sum1=0;
    }
    if(n==1){
        return arr[0];
    }
    // Processing
    else{
        sum1 = sum(arr+1,n-1);
        totalsum = sum1 + arr[0];
    }
    return totalsum;
}
int main()
{
  int arr[10];
  int n;
  cout<<"Enter the size of the Array:"<<endl;
  cin>>n;
  cout<<"Enter the elements of the array:"<<endl;
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  int ans=0;
  ans=sum(arr,n);
  cout<<"Sum of the elements of the Array is:"<<ans<<endl;      
 return 0;
}