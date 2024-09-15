// Taking input and output of 2D arrays

// #include<iostream>
// using namespace std;
// int main()
// {
//   int arr[3][3];
//   cout<<"Enter 2D array elements:";
//   for(int i=0;i<3;i++){
//     for(int j=0;j<3;j++){
//         cin>>arr[i][j];
//     }
//   }
//   for(int i=0;i<3;i++){
//     for(int j=0;j<3;j++){
//         cout<<arr[i][j]<<" ";
//     }
//     cout<<endl;
//   }
//   return 0;
// }

// If you want to insert 1st,2nd ,3rd or more row elements should be specific elements then 
// #include<iostream>
// using namespace std;
// int main()
// {
//   int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
//   for(int i=0;i<3;i++){
//     for(int j=0;j<3;j++){
//         cout<<arr[i][j]<<" ";
//     }
//     cout<<endl;
//   }
//   return 0;
// }

// The  output will be 
// 1 2 3
// 4 5 6
// 7 8 9

// Function to check whether element is present in 2D array or not
// [ In 2D array it is mandatory to specify the column size of the array when it is passed as a parameter]

// #include<iostream>
// using namespace std;
// bool ispresent(int arr[][4],int target,int row,int col){
//     for(int row=0;row<3;row++){
//         for(int col=0;col<4;col++){
//             if(arr[row][col]==target){
//                 return true;
//             }
//         }
//     }
//     return false;
// }
// int main()
// {
//   int arr[3][4];
//   int target;
//   cout<<"Enter elements of 2D array:";
//   for(int i=0;i<3;i++){
//     for(int j=0;j<4;j++){
//         cin>>arr[i][j];
//     }
//   } 
//   cout<<"Enter the target element:";
//   cin>>target;
//  if(ispresent(arr,target,3,4)){
//             cout<<"Element Found";
//         }
//         else{
//            cout<<"Element not Found";
//         }   
//   return 0;
// }

// Calculate sum of column elements present in the 2D array
// To print sum of row elements present in the array keep the row loop outside and column loop inside in the function
// #include<iostream>
// using namespace std;
// void rowsum(int arr[][3],int row,int col){
//     for(int col=0;col<3;col++){
//         int sum=0;
//         for(int row=0;row<3;row++){
//           sum+=arr[row][col];  
//         } 
//          cout<<sum<<endl;
//     }
// }
// int main()
// {
//  int arr[3][3];
//  cout<<"Enter 2D array elements:";
//  for(int i=0;i<3;i++){
//     for(int j=0;j<3;j++){
//         cin>>arr[i][j];
//     }
//  }
//  for(int i=0;i<3;i++){
//     for(int j=0;j<3;j++){
//         cout<<arr[i][j]<<" ";
//     }
//     cout<<endl;
//  }
//  rowsum(arr,3,3);
//  return 0;
// }

// Largest sum present in the row
// #include<iostream>
// using namespace std;
// void largestsum(int arr[][3],int row,int col){
//     int maxele=0;
//     int rowIndex=0;
//     for(row=0;row<3;row++){
//         int sum=0;
//         for(col=0;col<3;col++){
//             sum+=arr[row][col];
//         }
//         if(sum>maxele){
//             maxele=sum;  // Updating maximum row sum
//             rowIndex=row;  // Updating maximum row sum index
//         }
//     }
//     cout<<"Maximum sum present in the row is:"<<maxele<<endl;
//     cout<<"Row index of the maximum element is:"<<rowIndex<<endl;
// }
// int main()
// {
//   int arr[3][3];
//   cout<<"Enter elements of the array:";
//   for(int row=0;row<3;row++){
//     for(int col=0;col<3;col++){
//         cin>>arr[row][col];
//     }
//   }
//   largestsum(arr,3,3);  
//   return 0;
// }
