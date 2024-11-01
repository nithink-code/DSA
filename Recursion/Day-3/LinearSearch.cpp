// Linear Search Using Recursion
#include<iostream>
using namespace std;
bool linearSearch(int *arr,int n, int k){
    // Base Case
    if(n==0){
        return false;
    }
    // Processing
    if(arr[0]==k){
        return true;
    }
    else{
        bool remainingpart = linearSearch(arr+1,n-1,k);
        return remainingpart;
    }
}
int main()
{
  int arr[10];
  int n;
  int k;
  cout<<"Enter the size of the array:"<<endl;
  cin>>n;
  cout<<"Enter the elements of the array:"<<endl;
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  cout<<"Enter the Target Element:"<<endl;
  cin>>k;
  if(linearSearch(arr,n,k)){
    cout<<"Element is present in the Array"<<endl;
  }         
  else{
    cout<<"Element is not present in the Array"<<endl;
  }        
return 0;
}