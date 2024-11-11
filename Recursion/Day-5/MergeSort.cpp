#include<iostream>
using namespace std;
void merge(int *arr,int s,int e){
    int mid = (s+e)/2;

    int len1 = (mid-s+1);
    int len2 = (e-mid);

    int *first = new int[len1];  // Dynamic Allocation
    int *second = new int[len2];

    // Copy elements of 2 sub arrays
    int mainidx = s;
    for(int i=0;i<len1;i++){
        first[i]=arr[mainidx++];
    }
    mainidx = mid+1;
    for(int i=0;i<len2;i++){
        second[i]=arr[mainidx++];
    }

   //merge 2 sorted arrays     
    int index1 = 0;
    int index2 = 0;
    mainidx = s;

    while(index1 < len1 && index2 < len2) {
        if(first[index1] < second[index2]) {
            arr[mainidx++] = first[index1++];
        }
        else{
            arr[mainidx++] = second[index2++];
        }
    }   

    while(index1 < len1) {
        arr[mainidx++] = first[index1++];
    }

    while(index2 < len2 ) {
        arr[mainidx++] = second[index2++];
    }
    delete []first;
    delete []second;
}
void merge_sort(int *arr,int s,int e){
    // Base Case
    if(s>=e) return;

    // Recursive call
    int mid = (s+e)/2;
    // Sort Left Part of Array
    merge_sort(arr,s,mid);

    // Sort Right Part of Array
    merge_sort(arr,mid+1,e);

    // Merge 2 Arrays
    merge(arr,s,e);
}
int main()
{
 int arr[10];
 int n;
 cout<<"Enter the size of the Array:"<<endl;
 cin>>n;
 cout<<"Enter Array elements:"<<endl;
 for(int i=0;i<n;i++){
    cin>>arr[i];
 }
 merge_sort(arr,0,n-1);
 for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
 } 
 cout<<endl;         
 return 0;
}