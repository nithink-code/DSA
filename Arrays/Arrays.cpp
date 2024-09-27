// Target sum with triplets
// #include<iostream>
// using namespace std;
// int main(){
//     int array[]={1,3,4,5,2,7,8};
//     int n=7;
//     int count=0;
//     int target=8;
//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             for(int k=j+1;k<n;k++){
//                 if(array[i]+array[j]+array[k]==target){
//                     count++;
//                 }
//             }
//         }
//     }
//     cout<<count;
//     return 0;
// }

// To find second largest element in a given array
 #include<iostream>
  using namespace std;
  int secondmaxelement(int array[],int size);
  int main(){
    int array[10]={};
    cout<<"Enter elements of the array"<<endl;
    for(int i=0;i<10;i++){
        cin>>array[i];
    }
    int result=secondmaxelement(array,10);
    cout<<result;
    return 0;
  }
  int secondmaxelement(int array[],int size){
    int max1;  //First highest number in array
    int max2;  //Second highest number in array
    if(array[0]>array[1]){
        max1=array[0];
        max2=array[1];
    }
    else {
        max1=array[1];
        max2=array[0];
    }
    for(int i=2;i<size;i++){
        if(array[i]>max1){
            max2=max1;
            max1=array[i];
        }
        else if(array[i]>max2 && array[i]<max1){
            max2=array[i];
        }
    }
    return max2;
  }

// Rotate the given array k times 

//  #include<iostream>
//  using namespace std;
//  int main(){
//      int array[]={1,2,3,4,5};
//      int n=5;
//      int k=2;
//      int ansarray[5];
//      int j=0;
//      k=k%n;
//      //Inserting last k elements in an array
//      // 1 2 3 4 5
//      // 4 5 
//      for(int i=n-k;i<n;i++){
//         ansarray[j++]=array[i];
//      }
//      //Inserting first elements in an array
//      // 4 5 1 2 3
//      for(int i=0;i<=k;i++){
//         ansarray[j++]=array[i];
//      }
//      // Printing 4 5 1 2 3
//      for(int i=0;i<n;i++){
//         cout<<ansarray[i];
//      }
//     return 0;
//  }

// Two Pointers

// sort an array with o's and 1's using two pointer approach
// #include<iostream>
// #include<vector>
// using namespace std;
// void sortZerosandOnes (vector<int> &v){
//    int left_ptr=0;
//    int right_ptr=v.size()-1;
//    while(left_ptr<right_ptr){
//     if(v[left_ptr]==1 && v[right_ptr]==0){
//         v[left_ptr++]=0;
//         v[right_ptr--]=1;
//     }
//     if(v[left_ptr]==0){
//        left_ptr++;
//     }
//     if(v[right_ptr]==1){
//         right_ptr--;
//     }
//    }
 
// }
// int main(){
//     int n; cin>>n;
//     vector<int> v;
//     for(int i=0;i<n;i++){
//         int ele; cin>>ele;
//         v.push_back(ele);
//     }
//     sortZerosandOnes(v);
//     for(int i=0;i<n;i++){
//         cout<<v[i]<<" ";
//     }cout<<endl;
//     return 0;
// }

// Move all even integers in the beginning of the array followed by odd integers
// #include<iostream>
// #include<vector>
// using namespace std;
// void sortevenodd(vector<int> &v){
//     int f_ptr=0;
//     int l_ptr=v.size()-1;
//     int temp;
//     while(f_ptr<l_ptr){
//         if((v[f_ptr])%2!=0 && (v[l_ptr])%2!=1){
//             temp=v[f_ptr];
//             v[f_ptr]=v[l_ptr];
//             v[l_ptr]=temp;
//         }
//         if((v[f_ptr])%2==0){
//             f_ptr++;
//         }
//         if((v[l_ptr])%2==1){
//             l_ptr--;
//         }
//     }
// }



// int main(){
//     int n; cin>>n;
//     vector<int> v;
//     for(int i=0;i<n;i++){
//         int ele; cin>>ele;
//         v.push_back(ele);
//     }
//      sortevenodd(v);
//      for(int i=0;i<n;i++){
//         cout<<v[i]<<" ";
//      }cout<<endl;
//     return 0;
// }

// Return the squares of each number in an array that is already in sorted order
// #include<iostream>
// #include<vector>
// using namespace std;
// void sortsquare(vector<int> &v){
//     int left_ptr=0;
//     int right_ptr=v.size()-1;
//     vector<int> ans;
//     while(left_ptr<=right_ptr){
//        if(abs(v[left_ptr])<abs(v[right_ptr])){
//          ans.push_back(v[right_ptr]*v[right_ptr]);
//          right_ptr--;
//        }
//        else{
//          ans.push_back(v[left_ptr]*v[left_ptr]);
//          left_ptr++;
//        }
//     }
//     for(int i=ans.size()-1;i>=0;i--){  // To print the square of numbers in the ascending order
//         cout<<ans[i]<<" ";
//     }
//     cout<<endl;
// }
// int main(){
//     int n;
//     cin>>n;
//     vector<int>v;
//     for(int i=0;i<n;i++){
//         int ele;
//         cin>>ele;
//         v.push_back(ele);
//     }
//      sortsquare(v);
//     return 0;
// }

// Prefix sum problems
// #include<iostream>
// #include<vector>
// using namespace std;
// void prefixsum(vector<int> &v){
//     for(int i=1;i<v.size();i++){
//        v[i]=v[i]+v[i-1];
// }
// return;
// }
// int main(){
//    int n;
//    cin>>n;
//    vector<int>v;
//    for(int i=0;i<n;i++){
//       int ele;
//       cin>>ele;
//       v.push_back(ele);
//    }
//    prefixsum(v);
//    for(int i=0;i<n;i++){
//     cout<<v[i]<<" ";
//    }cout<<endl;
//     return 0;
// }

//Check whether we can divide an array into two sub arrays and also check whether sum prefix is equal to sum of suffix
// #include<iostream>
// #include<vector>
// using namespace std;
// bool prefixsuffixsum(vector<int> &v){
//     int totalsum=0;
//     for(int i=0;i<v.size();i++){
//         totalsum+=v[i];
//     }
//     int prefixsum=0;
//     for(int i=0;i<v.size();i++){
//         prefixsum+=v[i];
//         int suffixsum=totalsum-prefixsum;
//         if(prefixsum==suffixsum){
//             return true;
//         }
//     }
//     return false;
    
// }
// int main(){
//    int n;
//    cin>>n;
//    vector<int>v;
//    for(int i=0;i<n;i++){
//       int ele;
//       cin>>ele;
//       v.push_back(ele);
//    }

//    cout<<prefixsuffixsum(v)<<endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;

// bool linearsearch(int array[],int n,int key){
//    for(int i=0;i<n;i++){
//     if(key==array[i]){
//         return true;
//     }
//    }
//    return false;
// }

// #include<iostream>
// using namespace std;
// bool linearsearch(int array[],int n,int key){
//      for(int i=0;i<n;i++){
//       if(key==array[i]){
//          return true;
//       }
//      }
//      return false;
// }
// int main()
// {
//  int key=1;
//  int array[100];
//  cout<<"Enter the size of array:";
//  int n;
//  cin>>n;
//  cout<<"Enter array elements:";
//  for(int i=0;i<n;i++){
//   cin>>array[i];
//  } 
//  if(linearsearch){
//   cout<<"Element found in the array "<<key<<" "<<endl;
//  }
//  else{
//   cout<<"Element not found in the array"<<endl;
//  }     
//  return 0;
// }


// Program to swap alternate elements present in array


// #include<iostream>
// using namespace std;
// int swapping(int array[],int n){
//   for(int i=0;i<n;i+=2){
//      swap(array[i],array[i+1]);
//   }
//   for(int i=0;i<n;i++){
//     cout<<array[i]<<" ";
//   }
//   return 0;
// }

// int main()
// {
//  int array[100];
//  cout<<"Enter size of array:";
//  int n;
//  cin>>n;
//  cout<<"Enter elements of array:";
//  for(int i=0;i<n;i++){
//   cin>>array[i];
//  }  
//  swapping(array,n); 
//  return 0;
// }