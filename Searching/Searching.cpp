// Total number of occurances in an array using linear search

// #include<iostream>
// using namespace std;
// int totalocc(int arr[],int n,int key){
//     int count=0;
//     for(int i=0;i<n;i++){
//         if(key==arr[i]){
//             count++;
//         }
//     }
//     return count;
// }
// int main()
// {
//   int arr[5]={1,2,3,3,3};
//   int n=5;
//   int key=3;
//   cout<<"Total number of occurances of the given key element is : "<<totalocc(arr,n,key)<<endl; 
//    return 0;
// }

// Square of a float number using binary search

// #include<iostream>
// using namespace std;
// int sqrt(int n){
//     long long int low=1;
//     long long int high=n;
//     long long int ans=0;
//     while(low<=high){
//         long long int mid=low+(high-low)/2;
//         long long int square=(mid*mid);
//         if(square<=n){
//            ans=mid;
//            low=mid+1;
//         }
//         else{
//             high=mid-1;
//         }
//     }
//     return ans;
// }
// double sqrtfloat(int n,int precision,int temp){
//     double factor=1;
//     double ans=temp;
//     for(int i=0;i<precision;i++){
//         factor/=10;
//     for(double j=ans;j*j<n;j=j+factor){
//          ans=j;
//     }
//     }
//     return ans;
// }
// int main()
// {
//     int n;
//     cout<<"Enter any number:";
//     cin>>n;
//     int temp=sqrt(n);
//     cout<<"Floating square root value is: "<<sqrtfloat(n,3,temp)<<endl; 
//    return 0;
// }