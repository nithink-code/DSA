#include<iostream>
using namespace std;
void bubble_sort(int *arr,int n){
    // Base Case
    if(n==0 || n==1){
        return;
    }
    // Processing
    // 1 case we are solving
    // In this 1st largest element will be there at the end of array
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
    bubble_sort(arr,n-1);
}
int main()
{
  int arr[10];
  int n;
  cout<<"Enter the size of the array:"<<endl;
  cin>>n;
  cout<<"Enter the elements of the array:"<<endl;
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  bubble_sort(arr,n);
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }             
 return 0;
}