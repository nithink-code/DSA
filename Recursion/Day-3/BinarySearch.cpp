#include<iostream>
using namespace std;
// To Print in every Call
void print(int *arr, int s, int e){
    for(int i=s;i<=e;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

bool binary_search(int *arr,int s, int e, int k){
    cout<<endl;
    print(arr,s,e);
    // Base Case
    if(s>e){
        return false;
    }
    int mid= (s+e)/2;
    if(arr[mid]==k){
        return true;
    }
    
    // Recursive Call
    if(arr[mid]<k){
        return binary_search(arr,mid+1,e,k);
    }
    else{
        return binary_search(arr,s,mid-1,k);
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
  cout<<"Enter the Target element:"<<endl;
  cin>>k;
  cout<<"Present or Not "<<binary_search(arr,0,n-1,k);      
return 0;
}