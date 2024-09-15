// nCr problem

// #include<iostream>
// using namespace std;
// int factorial(int n){
//     int fact=1;
//     for(int i=1;i<=n;i++){
//         fact = fact * i;
//     }
//     return fact;
// }
//  int nCr(int n,int r){
//     int ans=0;
//     int num= factorial(n);
//     int denom = factorial(r)*factorial(n-r);
//     ans = (num / denom);
//     return ans;
//  }

// int main()
// {
//  int n,r;
//  cin>>n>>r;
//  int ans =0;
//  ans = nCr(n,r);
//  cout<<ans<<endl;
//   return 0;
// }

// Given number is prime or not
// return 0 -> Not a Prime Number
// return 1 -> Prime Number
// #include<iostream>
// using namespace std;
// bool isPrime(int n){
//     for(int i=2;i<n;i++){
//         if(n%i==0){       // Not a Prime number 
//             return 0;          
//         } 
//     }
//     return 1;
// }
// int main()
// {
//  int n;
//  cin>>n;
//  if(isPrime(n)){
//     cout<<"Prime Number";
//  }else{
//  cout<<"Not  a Prime Number";
//  }
//   return 0;
// }