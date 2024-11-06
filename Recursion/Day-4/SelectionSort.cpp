#include<iostream>
using namespace std;
void selection_sort(int *arr,int start,int end){
    int min=start;
    // Base Case
    if(start>=end-1){
        return;
    }
    // Processing
    for(int i=start;i<end;i++){
         if(arr[i]<arr[min]){
            min=i;
         }
    }
    swap(arr[min],arr[start]);
    selection_sort(arr,start+1,end);
}
int main()
{
  int arr[10];
  int start,end;
  cout<<"Enter the size of the array"<<endl;
  cin>>end;
  cout<<"Enter the elements of the array:"<<endl;
  for(int i=0;i<end;i++){
    cin>>arr[i];
  } 
  selection_sort(arr,0,end);
  for(int i=0;i<end;i++){
    cout<<arr[i]<<" ";
  }            
 return 0;
}