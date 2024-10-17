// 2D Array creation using dynamic memory allocation
#include<iostream>
using namespace std;
int main()
{
 int n;
 cout<<"Enter the value of n:"<<endl;
 cin>>n;
 // * CREATION OF 2D ARRAY *
 int** arr = new int*[n];
 for(int i=0; i<n; i++){
    arr[i] = new int[n];
 }
 // * TAKING INPUT FROM USER *
 for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
        cin>>arr[i][j];
    }
 }
 for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
        cout<<arr[i][j]<<" ";
    }
 } 

 // * TO FREE THE ALLOCATED MEMORY OF ARRAYS *
 for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
        delete []arr[i];
    }
 }
 // * TO DELETE THE ALLOCATED MEMORY OF POINTER *
 delete [] arr;

 return 0;
}