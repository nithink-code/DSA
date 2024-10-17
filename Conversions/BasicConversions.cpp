//Decimal to Binary
// #include<iostream>
// #include<math.h>
// using namespace std;
// int main(){
//    int n;
//    cin>>n;
//    int ans=0;
//    int i=0;
//    while(n != 0){
//     int bit = n & 1;
//     ans = (bit * pow(10,i))+ ans;
//     n = n >> 1;
//     i++;
//    }
//    cout<<ans<<" ";
//     return 0;
// }

// Binary To decimal conversion
// #include<iostream>
// #include<math.h>
// using namespace std;
// int main()
// {
//   int n;
//   cin>>n;
//   int ans=0;
//   int i=0;
//   while(n!=0){
//     int digit =  n %10;
//     if(digit == 1){
//         ans= ans + pow(2,i);
//     }
//     i++;
//     n=n/10;
//   }
//   cout<<ans<<" ";
//   return 0;
// }

// For negative number
// #include<iostream>
// #include<math.h>
// using namespace std;
// int main(){
//     cout<<"Enter negative number:";
//     int n;
//     cin>>n;
//     bool isnegative=true;
//     unsigned int absN=-n;
//     while(absN>0){
//         if(absN & 1){
//             cout<<1;
//         }
//         else{
//             cout<<0;
//         }
//         absN=absN>>1;
//     }
//     if(isnegative){
//         cout<<1;
//     }
//     cout<<endl;
//     return 0;
// }