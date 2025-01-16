#include<iostream>
using namespace std;
int partition(int *arr, int s,int e){
    int pivot = arr[s];
    int count = 0;
    for(int i=s+1; i<=e; i++){
        if(arr[i] <= pivot){
            count++;
        }
    }
    int pivotidx = s+count;
    swap(arr[pivotidx],arr[s]);
    
    // 2 pointers 
    int i=s;
    int j=e;
    while(i<pivotidx && j>pivotidx){
        while(arr[i] < pivotidx){
            i++;
        }
        while(arr[j] > pivotidx){
            j--;
        }
        if(i<pivotidx && j>pivotidx){
            swap(arr[i++],arr[j--]);
        }
    }
    return pivotidx;
}

void quicksort(int *arr, int s,int e){
    // Base Case
    if(s >= e) return;

    // Partition
    int p;
    p = partition(arr,s,e);

    // Recursive call

    // Sort LEFT part
    quicksort(arr,s,p-1);

    // Sort RIGHT part
    quicksort(arr,p+1,e);
}
int main()
{
  int arr[5];
  int n = 5;
  cout<<"Enter the elements of the array:"<<endl;
  for(int i=0; i<n; i++){
    cin>>arr[i];
  }
  quicksort(arr,0,n-1);
  for(int i=0; i<n; i++){
    cout<<arr[i]<<" ";
  }
  cout<<endl;       
 return 0;
}